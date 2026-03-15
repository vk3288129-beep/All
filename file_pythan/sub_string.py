n1 = input("Enter the main string")
n2 = input("Enter the substring:")
indices = []
start = 0
while true:
    pos = n1.find(num2,start)
    if pos == -1:
        break
    indices.append(pos)
    start = pos +1
if len(indices) ==  0:    
    print("-1")
    print("indices of occurrance:", indices)
