
# Finding a prime number
import math

number = int(input())
i = 2
sqrt_number = int(math.sqrt(number))
while i <= sqrt_number:
	if number % i == 0:
		print('{} is Not a Prime number'.format(number))
		break
	i = i + 1 
else:
	print('{} is a Prime number'.format(number))
