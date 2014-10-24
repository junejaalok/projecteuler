def lpath (a,b):
	row=a
	col=b
	n=row+col
	print factorial(n)/(factorial(n-row)*factorial(row))

def factorial(n):
	if n==1:
		return n
	else:
		return n*factorial(n-1)
	
lpath(20,20)
