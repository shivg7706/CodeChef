def main():
	n = int(input())
	coins = [int(x) for x in input().split()]
	type_of_workers = [int(x) for x in input().split()]
	shiv = {x+1:[] for x in range(3)}
	for i in range(n):
		shiv[type_of_workers[i]].append(coins[i])
	for i in range(3):
		shiv[i+1].sort()
	value = [100001 for x in range(3)] 
	for i in range(1, 4):
		if(len(shiv[i]) != 0):
			value[i-1] = shiv[i][0]
	if value[0] + value [1] > value[2]:
		print(value[2])
	else: print(value[0] + value[1])

if __name__ == '__main__':
	main()