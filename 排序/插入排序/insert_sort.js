function insert_sort(nums) {
    for (let i = 1; i < nums.length; i++) {
        let base = nums[i];
        let j = i - 1;
        while (j >= 0 && nums[j] > base) {
            nums[j + 1] = nums[j]
            j--
        }
        nums[j + 1] = base
    }
}

nums = [1, 14, 5, 1, 41, 919, 810]
insert_sort(nums)
console.log(nums)