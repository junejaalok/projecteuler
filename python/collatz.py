

def collatz(n):
  if n in known:
    return known[n]
  
  if n%2:
    a=(3*n)+1
    known[n]=a
    collatz(a)
  else:
    a=n/2
    known[n]=a
    collatz(a)
  return known

max_len=0
max_val=0
#print collatz(13)
for i in range(2,1000000):
  known = {1:1}
  val=collatz(i)
#  print i,": ",val
#  print type(val)
#  if type(val) is dict:
#    count=len(val)
#  else:
#    count = val
#  print i, ": ", count
  if max_len<len(val):
    max_len=len(val)
    max_val=i

print max_val,": ",max_len

#  count[i]=collatz(i)
#final=collatz(13)
#print len(final)