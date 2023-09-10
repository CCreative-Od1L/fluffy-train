def bubble_sort(nums):
    size = len(nums)
    for i in range(size - 1, 0 , -1):
        for j in range(0, i):
            if nums[j] > nums[j + 1]:
                nums[j], nums[j + 1] = nums[j + 1], nums[j]

nums = [11, 41, 5, 14, 1, 1919, 810]
bubble_sort(nums=nums)
print(nums)