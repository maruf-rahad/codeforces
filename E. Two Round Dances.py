def fact(n):
    n = int(n)
    sum = 1
    for i in range(1,n+1):
        sum = sum*i
    return sum


n = int(input())

x = (fact(n)/fact(n/2))/(fact(n/2))

x = x*fact((n/2)-1)*fact((n/2)-1)

x = x/2


print(int(x))
