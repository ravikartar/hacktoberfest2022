from PIL import Image
import os
img=Image.open(r"C:\Users\bansa\Desktop\blogr-landing-page-main\images\bg-pattern-intro-mobile.png")
# neagtive=img.convert("L")
#neagtive.show()
print(os.path.getsize(r"C:\Users\bansa\Desktop\blogr-landing-page-main\images\bg-pattern-intro-mobile.png"))
rgb = img.convert("RGB")
rgb.show()
rgb.save("png_to_jpg.jpg")
print(os.path.getsize("png_to_jpg.jpg"))