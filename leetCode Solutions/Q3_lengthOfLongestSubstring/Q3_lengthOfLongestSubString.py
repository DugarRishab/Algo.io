charSet = set()
left_index = 0  # since set is unordered, we use this to find left most index
res = 0

for i in range(len(s)):
    while s[i] in charSet:
        charSet.remove(s[left_index])  # remove the left most char
        left_index += 1
    charSet.add(s[i])
    res = max(
        res, len(charSet)
    )  # compare each no repeating substring length in the charSet
print(res)