a=int(input("1st value:"))
b=int(input("2nd value:"))
if a>b:
    print("Greatest value:",a)
elif b>a:
    print("Greatest value:",b)
else:
    print("Both are equal")
c=int(input("3rd value:"))
if a>b and a>c:
    print("Greatest value:",a)
elif b>a and b>c:
    print("Greatest value:",b)
elif c>a and c>b:
    print("Greatest value:",c)
else:
    print("Equal")
a=int(input("Enter the number:"))
if a%2==0:
    print("Even number:",a)
else:
    print("Odd number:",a)
a=int(input("Enter Age:"))
if a>=18:
    print("Major")
else:
    print("Minor")
a=int(input("Enter Year:"))
if a%4==0 and a%100!=0 or a%400==0:
    print("Leap year:",a)
else:
    print("Not a leap year")
a=int(input("Enter 1st angle:"))
b=int(input("Enter 2nd angle:"))
c=int(input("Enter 3rd angle:"))
if a+b+c==180:
    print("It is a valid triangle.")
else:
    print("Invalid triangle")
a=int(input("Enter the length of the rectangle:"))
b=int(input("Enter the breadth of the rectangle: "))
area=a*b
perimeter=2*(a+b)
if area>perimeter:
    print("Area of rectangle is greater than the perimeter of recatngle.")
elif perimeter>area:
    print("Perimeter of recatngle is greater than the area of rectangle  ")
else:
    print("Both are equal.")
x1=int(input("x1="))
x2=int(input("x2="))
x3=int(input("x3="))
y1=int(input("y1="))
y2=int(input("y2="))
y3=int(input("y3="))
if (y2-y1)*(x2-x3)-(y3-y2)*(x2-x1)==0:
    print("Collinear")
else:
    print("Not collinear.")
x1=int(input("centre x1:"))
y1=int(input("centre y1:"))
r=int(input("radius:"))
x=int(input("x:"))
y=int(input("y:"))
if pow((x1-x),2))+pow((y1-y),2))==r*r:
    print("Lies on the circle")
elif pow((x1-x),2))+pow((y1-y),2))>r*r:
    print("Point lies outside the circle.")
else:
    print("Point lies inside the circle.")
    

