from random import randint



test_case=int(input())

for i in range(test_case):
    
    num=int(input())
    if num < 10:
        print("NO")
        continue
    while True:
        x=randint(1,10)
        y=randint(1,10)
        z=randint(1,10)
        
        if x!= y and y !=z and x!=z:
            #print(x,y,z)
            if x%3 != 0 and y%3 != 0 and z%3 != 0:
                if num-(x+y+z) == 0:
                    print("YES")
                    print(x,end="\t")
                    print(z,end="\t")
                    print(y)
                    break
                
                    