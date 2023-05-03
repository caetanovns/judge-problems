n = int(input())

list = []
original = []

for i in range(n):
    value = int(input())

    original.append(value)

    list.append(value)

    if i > 0 and original[i-1] == 1:
        list[i] += 1

    if i > 0 and value == 1:
        list[i-1] = list[i-1] + 1

for i in list:
    print(i)
