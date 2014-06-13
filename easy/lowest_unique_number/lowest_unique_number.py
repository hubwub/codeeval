# CodeEval
# Anne Celestino - hubwub
# Challenge Level:  Easy
# Challenge Description: LOWEST UNIQUE NUMBER
# Challenge Link:  https://www.codeeval.com/open_challenges/103/

import sys

test_cases = open(sys.argv[1], 'r')

for test in test_cases:
    # ignore test if it is an empty line
    # 'test' represents the test case, do something with it
    # ...
    # ...
    num_list = test.strip('\n').split(' ')
    low = 10
    for num in num_list:
    	if num_list.count(num) == 1 and int(num) < low:
    		low = int(num)
    if low == 10:
    	print 0
    else:
    	print num_list.index(str(low)) + 1

test_cases.close()
