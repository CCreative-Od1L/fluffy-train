buf = [1, 10, 20, 4, 8]
for i in range(len(buf) - 1):
    smallest_index = i
    for j in range(i + 1, len(buf)):
        if buf[j] < buf[smallest_index]:
            smallest_index = j
    if smallest_index != i:
        buf[i], buf[smallest_index] = buf[smallest_index], buf[i]
print(buf)