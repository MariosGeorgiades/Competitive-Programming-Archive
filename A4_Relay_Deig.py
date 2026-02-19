x = int(input())
if x>15:
    print(10*4.5+5*3.75+(x-15)*3.5)
elif x>10:
    if (10*4.5+(x-10)*3.75)%1==0:
        print("%.0f"% (10*4.5+(x-10)*3.75))
    else:
        print(10*4.5+(x-10)*3.75)
else:
    if (x*4.5)%1==0:
        print("%.0f"% (x*4.5))
    else:
        print(x*4.5)
