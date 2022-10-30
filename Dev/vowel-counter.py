import re
# lets find number of vowels in a sentence
# Using re.findall
def Check_Vow(string, vowels):
	
	# Used re.findall 
	str_list = re.findall(f'[{vowels}]', string, re.I)
	
	# prints number of vowels in the sentences
	print(len(str_list))
	
	# provide the output (display the vowels)
	return str_list
	
# Code Driver
vowels = 'aeiou'
string = "Welcome"
print (Check_Vow(string, vowels))

# S a m p l e  O u t p u t # 
# 3
# ['e', 'o', 'e']
