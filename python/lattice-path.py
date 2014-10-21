import itertools

row=20
col=20
right=1
down=row+1
cnt =0
#print range(1,22,20)
for i in itertools.product(xrange(1,22,20),repeat=40):
	#print type(list(i))

	#print j, " : ", sum(list(i)), " : ",map(sum,i)
	#j += 1
	#print i
	if sum(list(i)) == 440:
		cnt +=1
	#	print i

print cnt

'''
def lpath (a,b):
	right=a-1
	down=b+1
	last=2*(a*b)
	for i in range(1,4,2):
		summe=0
		while sum <= last:
			for j in range


lpath(2,2)
'''
