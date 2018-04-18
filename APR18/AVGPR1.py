def main():
	for _ in range(int(input())):
		n = int(input())
		count = 0
		indexing = [0 for x in range(2001)]
		array = [int(x) for x in input().split()]
		for i in array:
			indexing[i+1000]+= 1
		for i in range(2000):
			for j in range(i+1, 2001):
				if indexing[i] > 0 and indexing[j] > 0:
					if (i+j)%2 == 0:
						if indexing[(i+j)//2] != 0:
							count += indexing[i] * indexing [j]
		for i in indexing:
			if i > 1:
				count += (i * (i-1))//2
		print(count)
if __name__ == '__main__':
	main()