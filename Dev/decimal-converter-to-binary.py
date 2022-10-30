def dec2bin(number: int):
	ans = ""
	if ( number == 0 ):
		return 0
	while ( number ):
		ans += str(number&1)
		number = number >> 1
	
	ans = ans[::-1]

	return ans


def main():
	number = 10
	print(f"The binary of the number {number} is {dec2bin(number)}")


# code driver 
if __name__ == "__main__":
	main()

 // Sample output
//you will get a answer like as below
//The binary of the number 10 is 1010
