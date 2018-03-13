def main():
	for q in range(int(input())):
		s=input()
		c=0
		if len(s)<4:
			print("normal")
			pass
		for j in range(len(s)-3):
			s1="".join(sorted(s[j:j+4]))
			if s1=='cefh':
				c=c+1
		if c==0:
			print("normal")
		else:
			print("lovely "+str(c))



if __name__ == '__main__':
	main()