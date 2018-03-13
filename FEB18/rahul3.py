from collections import Counter
def isPalin(s,l,dic):
	od = 0
	for i in dic :
		if dic[i]%2 != 0:
			od +=1
		if od > 1:
			return False
	if l % 2 == 0 and od == 1 :
		return False
	return True
for t in range(int(input())):
	s1=input()
	s = list(s1)
	l = len(s)
	dic = Counter(s)
	temp = [None]*l
	ans = []
	if not isPalin(s , l , dic):
		print(-1)
	else:
		x = 0
		for i in dic:
			if dic[i]%2 == 1:
				temp[l//2] = i
			for j in range(dic[i]//2):
				temp[x] = temp[l-x-1] = i
				x += 1
		
		#print(s1)
		#print(s2)
		k=0
		while k<len(s) :
			m=0
			while m<len(s) and k<len(s) :
				if temp[k]==s[m]:
					ans.append(str(m+1))
					s[m]='1'
					#print(ans)
					#s1=s1.replace(s1[m],"M")
					#print (s1)
					k+=1
				m+=1
		q=" ".join(ans)
		print(q)

