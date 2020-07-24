#The  task for 23 rd July :
#One image is uploaded on drive link under task folder.
#Task :
#We have to read a given image then after that convert that image in gray scale and
#hsv using cvtColor function then resize the original image and prints it old and new shape and size
#then after that on grayscale image apply all the thresholding methods and then save all the image - gray ,hsv and four of thresholding
import cv2
img = cv2.imread(r"C:\Users\Mayurakshi\Pictures\text.jpg", cv2.IMREAD_UNCHANGED)
img_gray=cv2.cvtColor(img,cv2.COLOR_RGB2GRAY)
img_hsv=cv2.cvtColor(img,cv2.COLOR_RGB2HSV)
re=cv2.resize(img,(500,500))
print("Original image size : ",img.size)
print("Resized Image size :",re.size)
cv2.imshow("Resized",re)
cv2.imshow("Grayscale ",img_gray)
cv2.imshow("HSV",img_hsv)
cv2.waitKey(0)
cv2.destroyAllWindows()
#--------thresholding---------------#
ret,thre=cv2.threshold(img_gray,150,255,cv2.THRESH_OTSU)
ret,thre1=cv2.threshold(img_gray,150,255,cv2.THRESH_BINARY)
ret,thre2=cv2.threshold(img_gray,150,255,cv2.THRESH_BINARY_INV)
ret,thre3=cv2.threshold(img_gray,150,255,cv2.THRESH_TOZERO)
#-----------------adaptive thresholding-----------------#
adap_thre=cv2.adaptiveThreshold(img_gray,255,cv2.ADAPTIVE_THRESH_MEAN_C,cv2.THRESH_BINARY,5,3)
adap_thre2=cv2.adaptiveThreshold(img_gray,255,cv2.ADAPTIVE_THRESH_GAUSSIAN_C,cv2.THRESH_BINARY,7,7)
cv2.imshow("binary",thre1)
cv2.imshow("otsu",thre)
cv2.imshow("inv",thre2)
cv2.imshow("zero",thre3)
cv2.imshow("adap_m",adap_thre)
cv2.imshow("adap_g",adap_thre2)
cv2.waitKey(0)
cv2.destroyAllWindows()