num = int(input("enter the value of number"))
prime = 1
for x in range (2,num):
    if(num%2==0):
        prime=2
if(prime==1):
    prime("prime number")
else:
    print("not prime")