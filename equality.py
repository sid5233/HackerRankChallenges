def eqlty(string1):
    sc = 0
    num = 0
    low = 0
    up = 0
    
    for i in range (len(string1)):
        if (string1[i].isup()):
            up = up + 1
        elif (string1[i].islow()):
            low = low + 1
        elif (string1[i].isdigit()):
            num = num + 1
        else:
            sc = sc + 1
    if ((low == up) and (low == num) and (low==sc) and (up==num) and (up==sc) and (num==sc)):
        print("Equality For Everyone")
    else:
        print("No Equality")
try:    
    strIn =str(input())
    eqlty(strIn)
except EOFError as e:
    print("Equality For Everyone")
