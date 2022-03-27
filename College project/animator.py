import cv2
 
#Img_storing
img = cv2.imread("College project/demopic.jpg")

#edges
grey = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
edge = cv2.adaptiveThreshold(grey, 255,cv2.ADAPTIVE_THRESH_MEAN_C,cv2.THRESH_BINARY,9,6)

#colours
img_c = cv2.GaussianBlur(img ,(3,3), cv2.BORDER_DEFAULT)
img_c = cv2.bilateralFilter(img_c , 9, 250 , 250)

#cartoon
op = cv2.bitwise_and(img_c,img_c, mask=edge)

#output
cv2.imshow("Original_Input", img)
cv2.imshow("Cartoon",op)
cv2.waitKey(0)
cv2.destroyAllWindows()