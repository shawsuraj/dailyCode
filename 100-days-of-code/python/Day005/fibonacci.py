n = int(input("Enter the range of fibonacci: "))

a = 0
b = 1

for _ in range(0, n) :
    (a, b) = (b, a + b)
    print(a, end=' ')


# a = 0
# b = 1
# for _ in range(20):
#     (a, b) = (b, a + b)
#     print(a, end=' ')
