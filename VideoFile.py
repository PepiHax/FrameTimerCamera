import cv2
import numpy as np
import glob
import os
from natsort import natsorted, ns

img_array = []
paths = glob.glob(r'C:\Users\hax\AppData\Local\FactoryGame\Saved\Screenshots\WindowsNoEditor\*.png')

paths = natsorted(paths, key=lambda a: a.lower())

out = cv2.VideoWriter('ANewVideoClip.avi',cv2.VideoWriter_fourcc(*'DIVX'), 30, (1920, 1080))

for filename in paths:
    img = cv2.imread(filename)
    out.write(img)
    print(filename)

out.release()
for filename in paths:
    os.remove(filename)
