first_num = input("enter your first number ")
secound_num = input("enter your secound number ")
if ((first_num or secound_num) is not(int)):
    print('error')
print("what operation you want to do with your numbers in binery")
operation = input("sum : 's' , mines : 'm' ")
while operation is not("m" or 's'):
    operation = input("sum : 's' , mines : 'm' ")
print(bin(first_num))
print(bin(secound_num))
print(bin(first_num + secound_num))

