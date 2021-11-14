import cv2 as cv
import numpy as np
img0 = cv.imread('hka.jpg', 0)
img = img0.astype(np.float16)
img1 = np.zeros([640, 640], np.float16)
img2 = np.zeros([640, 640], np.float16)
cv.imshow('img0', img0)
for m in range(639, 319, -1):
    img1[639-m, m] = 0.8
for i in range(0, 639):
    img1[639-i, i] = 0.8
    
img2 = np.matmul(img, img1)
img1[:] = 0
for m in range(0, 639):
    img1[m, m] = 0.2
for m in range(319, 639):
    img1[m, m] = 0.2

#     # img1[m, n] = -1
# # for m in range(0, 511):
# for m in range(0, 319):
#     for n in range(0, m):
#         img1[n, m] = 1
img2 = img2 + np.matmul(img, img1)

img2 = img2.astype(np.uint8)
cv.imshow('img2', img2)
cv.waitKey(0)
cv.destroyAllWindows()

#-------------------------------------------------------------------------------------------------
# import cv2 as cv
# import numpy as np
# p = 0
# def click_event(event, x, y, flags, param):
#     if event == cv.EVENT_LBUTTONDOWN:
#         global p
#         print(x, ' , ', y)
#         for j in range(x-45, x+45):
#             for i in range(y-45, y+45):
#                 img[i, j, p] = 250
#         # font = cv.FONT_HERSHEY_SIMPLEX
#         # s = str(x) + ', ' + str(y)
#         # cv.putText(img, s, (x, y), font, 1, (255, 230, 0), 2)
#         cv.imshow('image', img)
#
#     if event == cv.EVENT_RBUTTONDOWN:
#         if p == 2:
#             p = 0
#         elif p == 0:
#             p = 1
#         elif p == 1:
#             p = 2
#
# img = cv.imread('cont_new.png')
# cv.imshow('image', img)
# cv.setMouseCallback('image', click_event)
#
# cv.waitKey(0)
# cv.destroyAllWindows()

