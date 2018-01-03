def main():
	t=int(input())
	while t:
		n=int(input())
		a=0
		b=0
		i=0
		s=''
		while i<n: 
			k=input()
			if s==k or i==0: 
				a=a+1
				s=k
			else:
				b=b+1
				w=k
			i=i+1	
		if a>b:print(s)
		elif a<b:print(w)
		else: print('Draw')
		t=t-1 

			
if __name__ == '__main__':
	main()