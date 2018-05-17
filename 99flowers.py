print("99 flower on wall")
l=[];
for i in range(1,100):
    l.append(i)
n=len(l)
print("The printing part in Python")
for i in range(1,100):
    if(l[n-i]==1):
        print("flower on wall",l[n-i])
    else:
        print(l[n-i]," flowers on wall")

