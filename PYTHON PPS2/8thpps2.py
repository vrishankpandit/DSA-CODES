
x=input()
y=x
agct="AGCT"
if(set(agct)==(set(x))  and set(agct)==(set(y)) ):
    l1=[i for i in range(len(x)) if x.startswith("AGCT",i)]
    l2=[i for i in range(len(y)) if y.startswith("AGCT",i)]
    if(l1==l2 and x.count("AGCT")==y.count('AGCT')):
        print("MATCH")
    else:
        print("MISMATCH")
else:
    print("MISMATCH")                
