n = int (input("enter the number of terms(n):"))
total_sum = 0
for i in range(1,n + 1):
      if i % 2 ==0:
        total_sum -= i 
even
    else:
        total_sum += i 
print(f"the summation of the series up to{n terms is:{total_sum}}")
