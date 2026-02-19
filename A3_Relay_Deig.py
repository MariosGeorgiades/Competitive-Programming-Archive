x = int(input())
y = int(input())
if abs(x-y)>3:
    z = int(input())
    print("%.2f"% ((x+y+z)/3))
else:
    print("%.2f"% ((x+y)/2))