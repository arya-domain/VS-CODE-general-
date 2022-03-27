n = int(input("Enter the Number Of prime Numbers to be printed : "))

i=2
print ("The prime Numbers are : ")
while (n!=0):
    c=0
    for x in range (1,i+1):
        if (i%x==0):
            c +=1
    if c==2:
        print (i)
        n -= 1
    i +=1

