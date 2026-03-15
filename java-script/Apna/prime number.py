def is_prime(n):
    count = 0
    for i in range(1, n+1):
      if n % i == 0:
        count += 1
    if count == 2:
      print("this is a prime number")
    else:
      print("this is not prime number")

is_prime(13)                