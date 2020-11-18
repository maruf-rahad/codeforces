
t = int(input())

for tt in range(t):
    x = input().split()

    n = int(x[0])
    m = int(x[1])

    li = [int(x)for x in input().split()]

    li.sort()
    a = n-2;
    sum = li[n-1]
    for i in range(m):
        sum = sum + li[a]
        a = a-1
        if a == -1:
            break
    print(sum)
