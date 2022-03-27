
import cv2 as c


capture = c.VideoCapture(0)
while True:
   success , image = capture.read()
   image2= c.cvtColor(image , c.COLOR_BGR2RGB)







   c.imshow("detect", image)
   c.waitKey(3)