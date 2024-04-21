t=int(input())

for _ in range(t):
    n=int(input())

    sticks=list(map(int,input().split()))

    unique_sticks=set(sticks)

    unique_sticks=list(unique_sticks)


    polygons=0
    for length in unique_sticks:
        count=sticks.count(length)

        polygons+= int(count/3)

    print(polygons)