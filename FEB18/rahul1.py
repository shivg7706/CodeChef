def main():
	for i in range(int(input())):
		n,m,x,k = map(int,input().split())
		s=input().strip()
		a=m//2
		e,o,sum1=0,0,0
		for l in s:
			if l=='E':e=e+1
			else:o=o+1
		for j in range(a):
			sum1=sum1+min(x,e)
			e=e-min(x,e)
		for t in range(m-a):
			sum1=sum1+min(x,o)
			o=o-min(x,o)
		if sum1 >= n:
			print("yes")
		else:
			print("no")
if __name__ == '__main__':
	main()