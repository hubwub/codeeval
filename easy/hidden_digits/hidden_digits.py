# CodeEval
# Anne Celestino - hubwub
# Challenge Level: Easy
# Challenge Description: Hidden Digits
# Challenge Link: https://www.codeeval.com/open_challenges/122/

import sys
test_cases = open(sys.argv[1], 'r')
for test in test_cases:
    # ignore test if it is an empty line
    # 'test' represents the test case, do something with it
    # ...
    # ...
    if test:
    	split_sentence = test.split()
    	current_longest_word = ""
    	for current_word in split_sentence:
    		if len(current_longest_word) < len(current_word):
    			current_longest_word = current_word
    	print current_longest_word
test_cases.close()
