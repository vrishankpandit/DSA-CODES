# a=input()
# for i in range(10):
#     if(i<5):
#         if(a[i].isalpha()==False):
#             # print("1")
#             print("Invalid input")
#             break
#     elif(i>=5 and i<9 ):
#         if(a[i].isdigit()==False):
#             # print("2")
#             print("Invalid input")
#             break
#     else:
#         if(a[i].isalpha()==False):
#             # print("3")
#             print("Invalid input")
#             break

n=eval(input())
a=0
c=0
for i in n:
    if type(i)==list:
        c+=len(i)
        a=1
    else:
        c+=1
if(a==1):
    print(c)
else:
    print("cannot unpack")