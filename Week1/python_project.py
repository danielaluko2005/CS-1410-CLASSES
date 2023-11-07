merchandise=float(input("Enter the amount of merchandise:: "))

if merchandise>=500:
    discount=0.40
elif merchandise>=200 and merchandise<500:
    discount=0.20
else:
    discount=0.10

print("\nCalculating the discount.....")
print(f"\n****Amount payable is {merchandise-(discount*merchandise)}")