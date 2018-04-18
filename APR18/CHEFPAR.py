from random import randint
def main():
	n, m, k = [int(x) for x in input().split()]
	array = [int(x) for x in input().split()]
	prime = [int(x) for x in input().split()]
	ran = []
	for i in range(len(array)):
		ran.append(str(array[i] + randint(1,k)))
	
	print(" ".join(ran))


if __name__ == '__main__':
	main()