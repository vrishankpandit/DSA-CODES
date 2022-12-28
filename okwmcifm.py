a=input().split(",")
b=tuple(a)
a=0
for x in b: 
    isup=0
    islow=0
    isdig=0
    ischarac=0
    if (len(x)>=6 and len(x)<=12):
        for j in x:
            if(j.islower()==1):
                islow+=1
            elif(j.isupper()==1):
                isup+=1
            elif(j.isdigit()==1):
                isdig+=1
            elif ('$' or '@' or '#' == j):
                ischarac+=1       
        if (islow>=1 and ischarac>=1 and isdig>=1 and isup>=1):
            print(x)  
            a=-1           
if a==0:
    print("invalid")