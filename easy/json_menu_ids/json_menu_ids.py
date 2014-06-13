#	CodeEval
#	Anne Celestino - hubwub
#	Challenge Level: Easy
#	Challenge Description: JSON menu IDs
#	Challenge Link: https://www.codeeval.com/open_challenges/102/

import json, sys


if __name__ == '__main__':
    with open(sys.argv[1]) as f:
        for line in f:
            if line.strip():
                data = json.loads(line)['menu']['items']
                total = 0
                
                for x in data:
                    if x and 'id' in x and 'label' in x:
                        total += x['id']
                
                print(total) 