import qrcode
from PIL import Image

def get_Link():
    link = input("enter your link : ")
    return link

def creating_qrcode(link):
    img = qrcode.make(f"{link}")
    img.save("qrcode_image.png", "PNG")

def open_pic():
    img = Image.open('qrcode_image.png')
    img.show()

def main():
    link = get_Link()
    creating_qrcode(link)
    open_pic()

main()


