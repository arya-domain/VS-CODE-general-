import cv2
import mediapipe as mp
import math
import numpy as np

from ctypes import cast, POINTER
from comtypes import CLSCTX_ALL
from pycaw.pycaw import AudioUtilities, IAudioEndpointVolume

devices = AudioUtilities.GetSpeakers()
interface = devices.Activate(
    IAudioEndpointVolume._iid_, CLSCTX_ALL, None)
volume = cast(interface, POINTER(IAudioEndpointVolume))


print(volume.GetMasterVolumeLevel())
print(volume.GetVolumeRange())
volume.SetMasterVolumeLevel(-20.0, None)


mpDraw = mp.solutions.drawing_utils
mpHands = mp.solutions.hands
hands = mpHands.Hands()

cap = cv2.VideoCapture(0)


while True:
    success, img = cap.read()
    imgRGB = cv2.cvtColor(img, cv2.COLOR_RGB2BGR)
    results = hands.process(imgRGB)
    print(results.multi_hand_landmarks)


    if results.multi_hand_landmarks:
        for handLms in results.multi_hand_landmarks:
           lmList = []
           for id, lm in enumerate(handLms.landmark):
               print(id, lm)
               h, w, c = img.shape
               cx, cy = int(lm.x*w) , int(lm.y*h)
               print(id, cx, cy)
               lmList.append([id, cx, cy])

           print(lmList)
           if lmList:
                x1, y1 = lmList[4][1] , lmList[4][2]
                x2, y2 = lmList[8][1] , lmList[8][2]

                cv2.circle(img, (x1, y1), 10, (0, 256, 0), cv2.FILLED)
                cv2.circle(img, (x2, y2), 10, (0, 256, 0), cv2.FILLED)
                cv2.line(img, (x1, y1), (x2, y2), (2,6,252), 4)
                
                length = math.hypot((x2-x1), (y2-y1))
                print(length)
                
                volRange = volume.GetVolumeRange()
                minVol = volRange[0]
                maxVol = volRange[1]
                vol = 0
                volBar = 400
                volPer = 0
                vol = np.interp(length, [30, 300], [minVol , maxVol])
                volBar = np.interp(length, [30, 300], [400 ,150])
                volPer = np.interp(length, [30, 300], [0 , 100])
                volume.SetMasterVolumeLevel(vol, None)

                cv2.rectangle(img, (50, 150), (90, 400), (3, 220, 200), 3)
                cv2.rectangle(img, (50, int(volBar)), (90, 400), (3, 120, 250), cv2.FILLED)
                cv2.putText(img, f' {int(volPer)}' , (40 , 450), cv2.FONT_HERSHEY_COMPLEX, 1, (256, 0, 0), 3)

    cv2.imshow("Image", img)
    if cv2.waitKey(3) & 0xFF== "q":
        break

    #length = 30-300
#length = 30 ==> vol = 0 ==> volRange = -65.25
#length = 300 ==> vol = 100 ==> volRange = 0.0