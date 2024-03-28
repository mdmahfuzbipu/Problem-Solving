testcase=int(input())    
while testcase > 0:
    time = input()

    hour = time[0:2]
    minute = time[3:5]

    if int(hour) < 12 and hour != "00":
        print(hour.zfill(2) + ":" + minute.zfill(2) + " AM")
    elif int(hour) > 12:
        hour = int(hour) - 12
        print(str(hour).zfill(2) + ":" + minute.zfill(2) + " PM")

    if hour == "12":
        print(str(hour).zfill(2) + ":" + minute.zfill(2) + " PM")

    if hour == "00":
        hour= int(hour)+12
        print(str(hour).zfill(2)+ ":" + minute.zfill(2)+" AM")


    testcase -= 1