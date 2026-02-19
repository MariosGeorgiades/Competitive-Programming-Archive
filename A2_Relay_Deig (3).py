x = float(input())
print("%.0f"% (x//0.5))
if x%0.5==0:
    print(0)
else:
    print("%.2f"% (x%0.5))