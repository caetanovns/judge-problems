import math 

def solve(q, d, p):
    days = (d * p) / (p - q)
    pages = days * q
    if int(pages) > 1:
        print("{} paginas".format(int(pages)))
    else:
        print("{} pagina".format(int(pages)))

n = input().split(" ")

while (len(n) != 1 and n[0] != 0):
    q = int(n[0])
    d = int(n[1])
    p = int(n[2])
    solve(q, d, p)
    n = input().split(" ")
