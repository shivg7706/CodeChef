def get_b(string, n):
	s = string
	temp = 0
	temp_count, count_b, count_a, counter, l = 0, 0, 0, 0, 1
	while 1:
		for i in range(temp, len(string)):
			if string[i] == 'a':
				count_a += 1
			else : count_b += 1
			if count_a > count_b : temp_count += 1
		
		if(temp_count == counter or l == n):
			break
		else:
			counter = temp_count 
		temp = len(string)
		string += s
		l += 1
	if l != 1:
		print(counter)
	else:
		print (temp_count)

def get_a(string, n):
	s = string
	temp_count, count_b, count_a, counter, l = 0, 0, 0, 0, 1
	temp = 0
	while 1:
		for i in range(temp, len(string)):
			if string[i] == 'a':
				count_a += 1
			else : count_b += 1
			if count_a > count_b :
				temp_count += 1
		if(temp_count == len(s)):
			print(counter + (n-l+1)*len(s))
			break
		else:
			counter += temp_count 
		temp = len(string)
		string += s
		if(l == n):
			print(counter)
			break
		l += 1
		temp_count = 0

def get_everything(string):
	count_a, count_b, counter = 0, 0, 0
	for i in string:
		if i == 'a':
			count_a += 1
		else:
			count_b += 1
		if count_a > count_b:
			counter += 1

	return count_a, count_b, counter

def main():
	for _ in range(int(input())):
		temp = [x for x in input().split()]
		string = temp[0]
		n = int(temp[1])
		count_a, count_b, counter = get_everything(string)
		if count_a == count_b:
			print(n * counter)
		elif count_b > count_a:
			get_b(string, n)
		elif count_a > count_b:
			get_a(string, n)

if __name__ == '__main__':
	main()