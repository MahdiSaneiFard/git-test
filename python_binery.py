first_num = int(input("enter your first number "))
secound_num = int(input("enter your secound number "))
print("what operation you want to do with your numbers in binery")
operation = input("sum : 's' , mines : 'm' ")
while operation is not("m" or 's'):
    operation = input("sum : 's' , mines : 'm' ")
print(bin(first_num))
print(bin(secound_num))
if operation == "m" :
    print(bin(first_num + secound_num))
else :
    print(bin(first_num + secound_num))
