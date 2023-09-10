my_dict = {}
list = [1,1,4,5,1,4]

for i in list:
    if my_dict.get(str(i)):
        my_dict[str(i)] += 1
    else:
        my_dict.update({str(i) : 1})

print(my_dict)
my_dict = sorted(my_dict.items(), key = lambda x: x[1])

buf = []
for item in my_dict:
    buf.append([item[0], item[1]])

print(buf)

res_str = []
res = 0

for index, item in enumerate(buf):
    # print(item, index)
    cur = index
    for match in range(cur + 1, len(buf)):
        if buf[cur][1] <= 0:
            break
        if buf[match][1] <= 0:
            continue
        if buf[match][1] > 0 and buf[cur][1] > 0:
            res += 1
            buf[match][1] -= 1
            buf[cur][1] -= 1
            res_str.append(buf[cur][0] + "-" + buf[match][0])
    
    if (buf[cur][1] >= 2):
        buf[cur][1] -= 2
        res += 1
        res_str.append(buf[cur][0] + "-" + buf[cur][0])

print(res)
print(res_str)