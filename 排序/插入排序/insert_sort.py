def insert_sort(nums):
    nums_size = len(nums)
    for i in range(1, nums_size):
        base = nums[i]
        j = i - 1
        while (j >= 0 and nums[j] > base):
            nums[j + 1] = nums[j]
            j -= 1
        nums[j + 1] = base

nums = [1, 14, 5, 1, 41, 919, 810]
insert_sort(nums=nums)
print(nums)