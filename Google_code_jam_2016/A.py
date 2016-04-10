import sys

N=1000000 #large input version
#N = 200 #small input version
T = int(input())
digits = 10
for i in range(0,T):
	x=int(input())
	arr=[]
	res = [0]*digits
	
	for j in range(1,N+1):
		a = x*j
		arr = [int(y) for y in str(a)]

		for k in arr:
			res[k]=1
		soma = sum(res)
		if soma==digits:
			print("Case #{}: {}".format(i+1, a))
			break
		elif j==N and soma!=digits:
			print("Case #{}: INSOMNIA".format(i+1))
