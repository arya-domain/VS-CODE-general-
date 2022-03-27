
a =[]
for x in range (0,5):
    print("Enter the ",(x+1), " array element : ")
    n = (input())
    a.append(n)
print ("Array Before reversing : ", a)
a.reverse()
print("Reversed array : ",a)