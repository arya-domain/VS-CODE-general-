a = int(input("Enter the first number : "))
b = int(input("Enter the second number : "))
ul=0
if a>b:
    ul=b
else :
    ul= a

gcd=0
for i in range(2,ul) :
    if (a%i==0 and b%i==0 ):
        gcd = i

print ("GCD of ",a,"and",b,"=",gcd)

