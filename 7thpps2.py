def whileloop(x,i):
    print("enteri")
    for j in range(i,x):
        print (j)
        whileloop(x,i+1)
    
a=input().split(" ")
b=list(a)
# print(b)
luckno=int(input())
leng=int(input())
l2=[]
for i in range(1,leng+1):
    l2.append(i-1)
whileloop(leng,0)    
    
    


