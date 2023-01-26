# f=open('ok.txt','r')
# print(f.name)
# f.close()

with open('ok.txt','r+') as f:
    # fcontent=f.read()
    # print(fcontent)
    # for line in f:
    #     print(line,end='')
    # f.write('ok')
    print(f.read())