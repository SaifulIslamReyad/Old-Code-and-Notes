d = {0}
for _ in range(int(input())):
    x = int(input())
    d = set((i+x)%360 for i in d) | set((i-x)%360 for i in d)
print(("NO", "YES")[0 in d])
# learn from copy code 