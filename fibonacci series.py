n = int(input("How many terms? "))


n1, n2 = 0, 1
count = 0
print("Fibonacci sequence:")
if n == 1:
   print("Fibonacci sequence upto",n,":")
   print(n1)

else:
   print("upto",n,":")
   while count < n:
       print(n1)
       nth = n1 + n2
 
       n1 = n2
       n2 = nth
       count += 1
