from collections import Counter
def main():
	for _ in range(int(input())):
		n = int(input())
		count = 0
		array = [int(x) for x in input().split()]
		new_dict = dict(Counter(array))
		temp = list(new_dict)
		new_list =[]
		for i in range(len(new_dict)-1):
			for j in range(i+1, len(new_dict)):
				if (temp[i] + temp[j]) % 2 == 0:
					a = new_dict[temp[i]]
					b = new_dict[temp[j]]				
					new_list.extend(((temp[i]+temp[j])//2,a*b))
		for i in range(len(new_list)//2):
			if new_list[2*i] in temp:
				count += new_list[2*i+1]
		for i in new_dict:
			count += (new_dict[i]*(new_dict[i] - 1)) // 2
		print(count)

if __name__ == '__main__':
	main()