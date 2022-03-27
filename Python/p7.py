year = int(input("Input a year: "))

if (year % 400 == 0):
    leap_year = True
elif (year % 100 == 0):
    leap_year = False
elif (year % 4 == 0):
    leap_year = True
else:
    leap_year = False

if leap_year == True :
    print("Yes It Is A Leap Year ")
else :
    print("No It Is Not A Leap Year ")