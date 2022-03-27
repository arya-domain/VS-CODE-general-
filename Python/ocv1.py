import cv2

img = cv2.imread("Resources/demopic.jpg")
imggray = cv2.cvtColor(img , cv2.COLOR_BGR2GRAY)
imgblur = cv2.GaussianBlur(imggray , (11,11),0 )
imgblur2 = cv2.blur(img , (11,11), 0)

cv2.imshow("TERMINAL",imggray)
cv2.imshow("TERMINAL2",imgblur)
cv2.imshow("TERMINAL3",imgblur2)
cv2.waitKey(0)


