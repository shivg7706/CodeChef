def main():
	for test in range(int(input().strip())):
		loss=0
		a=[]
		n=int(input().strip())
		for i in range(n):
			a.append([int(x) for x in input().strip().split()])
		for i in range(n):
			temp=(a[i][0]*a[i][1])+(a[i][0]*a[i][1])*(a[i][2]/100.0)
			temp-=temp*(a[i][2]/100.0)
			loss+=(a[i][0]*a[i][1])-temp
		print(loss)
if __name__ == '__main__':
	main()