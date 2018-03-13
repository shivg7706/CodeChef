def main():
	for i in range(int(input())):
		n=int(input())
		l=[int (x) for x in input().split()]
		c,d,s=map(int,input().split())
		print(max(l)*(c-1))
if __name__ == '__main__':
	main()