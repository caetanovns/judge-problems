n = 0


def solve():

    names = []
    colors = []
    sizes = []

    for i in range(n):
        name = input()
        [color, size] = input().split(' ')

        names.append(name)
        colors.append(color)
        sizes.append(size)

    output_zip = zip(names, sizes, colors)

    for i in range(3):
        if i == 1:
            output_zip = sorted(output_zip, reverse=True, key=lambda x: x[i])
        else:
            output_zip = sorted(output_zip, key=lambda x: x[i])

    names, sizes, colors = zip(*list(output_zip))

    for i in range(n):
        print("{} {} {}".format(colors[i], sizes[i], names[i]))
    

n = int(input())

while (n != 0):
    solve()
    n = int(input())
    if n != 0:
        print("")