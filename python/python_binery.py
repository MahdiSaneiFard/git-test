def check_second():
    second_num = input("enter your second number ")
    try:
        second_num = int(second_num)
        return second_num
    except ValueError :
        print("err")
        check_second()
def check_first():
    first_num = input("enter your first number ")
    try:
        first_num = int(first_num)
        return first_num
    except ValueError :
        print("err")
        check_first()
first_num = check_first()
secound_num = check_second()
print("what operation you want to do with your numbers in binery")
list = ["s", "m"]
operation = input("sum : 's' , mines : 'm' ")
while operation not in list :
    operation = input("sum : 's' , mines : 'm' ")
print(".....")
print(format(first_num, 'b'))
print(format(secound_num, 'b'))
if operation == "m" :
    print(format(first_num - secound_num ,'b'))
    print(".....\n-^^^^^^-")
    print("for '-' in at the beging of a binery put the binery number at the end ")

else :
    print(format(first_num + secound_num) ,'b')
