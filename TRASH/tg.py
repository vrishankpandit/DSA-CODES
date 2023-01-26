e=int(input())
sum1=0
prod=1
b=str(e)
for i in range(len(b)):
    sum1+=int(b[i])
    print(sum1)
    prod=prod*int(b[i])
    print("product is ",prod)
if(sum1==prod):
    print(1)  
  
