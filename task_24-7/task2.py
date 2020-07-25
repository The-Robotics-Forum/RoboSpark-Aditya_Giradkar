#
#Take the any one of the images from the 'Day 2->Task image' folder of the drive link you've been provided.
#Apply all the blurring techniques (filter2D, averaging, gaussian blur, median blur and bilateral filter) to the original
#image or the masked image, whichever you want. Save the outputs and draw a flowerpot for the flower on any of the output image.
#Also write the name of the flower on the image. While submitting the task, you should submit 1 masked image, 5 output images of blurring
#1 output of drawing and text on image, and the codes.
#
import cv2
import numpy as np

img=cv2.imread(r"C:\Downloads\daisy_flower.jpg")
fl=cv2.imread(r"C:\Downloads\yellow_flower.jpg")
res=cv2.resize(fl,(500,500))

bgrl=np.array([0,0,0],np.uint8,)
bgrh=np.array([215,255,255],np.uint8)

mask=cv2.inRange(img,bgrl,bgrh)
kernel=np.array(([3,4,5],[1,2,5],[9,5,2]),np.uint8)

blur=cv2.filter2D(mask,-1,kernel)

avg=cv2.blur(mask,(7,7))

gaus=cv2.GaussianBlur(mask,(9,9),0)

bil=cv2.bilateralFilter(mask,6,200,200)

med=cv2.medianBlur(mask,71)

res=cv2.rectangle(res,(100,400),(400,450),(42,42,165),-1)
res=cv2.rectangle(res,(150,400),(350,500),(42,42,165),-1)

font=cv2.FONT_HERSHEY_COMPLEX
cv2.putText(res,"Hyoseris",(90,100),font,2,(255,255,255),2,cv2.LINE_8)

cv2.imshow("original",img)
cv2.imshow("masked",mask)
cv2.imshow("filter2D",blur)
cv2.imshow("avg",avg)
cv2.imshow("gaussian",gaus)
cv2.imshow("bilateral",bil)
cv2.imshow("median",med)
cv2.imshow("flower",res)

cv2.waitKey(0)
cv2.destroyAllWindows()