# CodeEval
# Anne Celestino - hubwub
# Challenge Level:  Easy
# Challenge Description: WORD TO DIGIT
# Challenge Link:  https://www.codeeval.com/open_challenges/104/

import sys

def word_to_int(st):
    if num == "one":
        return 1
    elif num == "two":
        return 2
    elif num == "three":
        return 3
    elif num == "four":
        return 4
    elif num == "five":
        return 5
    elif num == "six":
        return 6
    elif num == "seven":
        return 7
    elif num == "eight":
        return 8
    elif num == "nine":
        return 9
    elif num == "zero":
        return 0
    else:
        return -1

test_cases = open(sys.argv[1], 'r')

for test in test_cases:
    # ignore test if it is an empty line
    # 'test' represents the test case, do something with it
    # ...
    # ...
    list = test.strip('\n').split(';')

    for num in list:
            print word_to_int(str(num))

test_cases.close()
