def isPrime(n):
	i = 2 
	prime = True
	while(i * i <= n and prime == True):
		  prime = n % i != 0
		  i += 1
	return prime

def Goldbach(n):
	if n % 2 != 0:
	   return	
	out = ""
	for i in range(2,n//2+1):
		if isPrime(i) and isPrime(n-i):
		   out += "%d + %d %s" % (i, n - i,"\n")
	return out	   
 
def main():
    arr = []
    fout = open('goldbach.out','w')
    with open('goldbach.in') as f:
    	for line in f:
    		arr.append(line)
    #N = int(arr[0].strip().split(" ")[0])
    out = arr[1].strip().split(" ")
    print(out)
    for i in out:
        n = int(i)
        out = Goldbach(n)
        print("%d = %s" % (n, out))
        fout.write("%d = %s" % (n, out))      
main()	
