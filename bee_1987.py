def solve(n, m):
    sum = 0
    while (m >= 1):
        digit = m % 10
        sum += digit
        m = int(m / 10)
    
    if sum % 3 == 0:
        print("{} sim".format(sum))
    else:
        print("{} nao".format(sum))


while (True):
    try:
        n, m = input().split()
        solve(int(n), int(m))
    except EOFError:
        break
