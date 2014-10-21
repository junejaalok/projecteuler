known = {1:1}

def collatz(n):
  if n in known:
    return known[n]
  else:  
    if n%2:
      known[n]=1+collatz(3*n+1)
    else:
      known[n]=1+collatz(n/2)
    return known[n]

max_len=0
max_val=0
for i in range(2,1000000):
  if max_len<collatz(i):
    max_len=collatz(i)
    max_val=i

print max_val,": ",max_len