def check():
    first_num = input("enter your first number ")
    if int(first_num) == True:
        return first_num
    except ValueError :
        print("err")
        check()
check()

secound_num = int(input("enter your secound number "))
print("what operation you want to do with your numbers in binery")
list = ["s", "m"]
operation = input("sum : 's' , mines : 'm' ")
while operation not in list :
    operation = input("sum : 's' , mines : 'm' ")
print(format(first_num, 'b'))
print(format(secound_num, 'b'))
if operation == "m" :
    print(format(first_num - secound_num ,'b'))
else :
    print(format(first_num + secound_num) ,'b')
x = input (" :")
