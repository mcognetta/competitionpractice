p = [True]*1000000
p[0] = False
p[1] = False
for i in range(4,1000000,2):
	p[i] = False
for i in range(3,1000000,2):
	if p[i]:
		for j in range(i*2,1000000,i):
			p[j] = False

def factor(n,p):
	out = []
	for i in range(2,int(n**.5)+1):
		if p[i]:
			if n%i == 0:
				count = 1
				j = i*i
				while(n%j == 0):
					count += 1
					j*=i
				out.append((i,count))
	return out

print(factor(640,p))




