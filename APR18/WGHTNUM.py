def main():
	for _ in range(int(input())):
		N, W = [int(x) for x in input().split()]
		mod = 1000000007
		if W > 8 or W < -9: ans = 0
		elif W>=0:
			ans = ((9 - W) * pow(10, N-2, mod))%mod
		else:
			ans = ((10 + W ) * pow(10, N-2, mod))%mod
		print(ans)
if __name__ == '__main__':
	main()