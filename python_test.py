from qrcode import

def get_Link():
    link = import("enter your link : ")

def creating_qrcode(link):
    img = qrcode.make(f"{link}")
    img.save("qrcode_image.png", "PNG")
    

