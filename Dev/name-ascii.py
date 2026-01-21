# Python3 code to demonstrate working of
# Convert String list to ascii values
# using list comprehension + ord()

# initializing the list
test_list = ['welcome', 'to', 'hacktoberfest']

# printing the original list for clear identification
print("The original list : " + str(test_list))

# Convertion starts here
# used ord()
res = [ord(ele) for sub in test_list for ele in sub]

# Final out put will be provided by this code
print("The ascii list is : " + str(res))

###########################################
##### O u t p u t  s a m p l e #####
# The original list : ['welcome', 'to', 'hacktoberfest']
# The ascii list is : [119, 101, 108, 99, 111, 109, 101, 116, 111, 104, 97, 99, 107, 116, 111, 98, 101, 114, 102, 101, 115, 116]
###########################################
