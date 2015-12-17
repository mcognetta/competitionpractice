import math
from useful_methods import sieve_of_eratosthenes

for i in sieve_of_eratosthenes(int(math.sqrt(600851475143))):
    if 600851475143%i == 0:
        print(i)