#p5842.py

def score_objects(a,b):
	score = 0
	for i in range(5):
		if a[i] > b[i]:
			score += a[i]
		else:
			score += b[i]
	return score

def score_object(a):
	score = 0
	for i in a:
		score += i
	return score

def add_objects(a,b):
	temp = [0]*5
	for i in range(5):
		if a[i] > b[i]:
			temp[i] = a[i]
		else:
			temp[i] = b[i]
	return (temp[0],temp[1],temp[2],temp[3],temp[4])

def main():
	zero = (0,0,0,0,0)
	obj = [(30,30,30,30,0),(50,0,0,0,0)]
	objects = 2
	choose = 2
	K = [[0 for x in range(choose+1)] for x in range(objects+1)] 

	for i in range(objects+1):
		for w in range(choose+1):
			if i == 0 or w == 0:
				K[i][w] = zero
			elif w >= 1:
				if(score_objects(obj[i-1],K[i-1][w-1])>score_object(K[i-1][w])):
					K[i][w] = add_objects(obj[i-1],K[i-1][w-1])
				else:
					K[i][w] = K[i-1][w]
			else:
				K[i][w] = K[i-1][w]
	print(score_object(K[objects][choose]))

main()