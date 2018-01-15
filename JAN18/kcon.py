def maxsubarr(l):
    mr=-(10**9 -1) 
    me=0
 
    for i in l :
        me=me+i
        if mr<me:
            mr = me
        if me<0:
            me=0
        
    return mr
def main():
    t=int(input())
    while t:
        n,k=input().split()
        n=int(n)
        k=int(k)
        
        l=[int(x) for x in input().split()]
        l=l*k;
        print(maxsubarr(l))
        t=t-1

if __name__ == '__main__':
    main()