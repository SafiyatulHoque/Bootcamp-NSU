num = input()
n=int(num)
result = {}
for i in range(n):
    text = input()
    str = text.split()

    for letter in str:
        if letter not in result:
            result[letter] = 0
        result[letter] += 1
        break

sortedDict = dict( sorted(result.items(), key=lambda x: x[0]) )

for k,v in sortedDict.items():
    print('{} {}'.format(k,v))

# # res = result.items()
# # sorted_items = sorted(res)
# # for coun,num in sorted_items.items():
# #     print("{} {}".format(coun,num))
# # #
# res = result.items()
# sorted_items = sorted(res)
# print(sorted_items)
