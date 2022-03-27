n = int(input("Enter the Number Of Fibonacci numbers to be printed : "))

a=0
b=1

while (n!=0):
    if (n== 1):
        print (a)
        n -= 1
    else:
        print (a)
        a= a+b
        b= a-b
        n -= 1

    
    