function bubble_sort(nums) {
    let size = nums.length;
    for (let i = size - 1; i > 0; i--) {
        for (let j = 0; j < i; j++) {
            if (nums[j] > nums[j + 1]) {
                let tmp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = tmp;
                // same as
                // [nums[j], nums[j + 1]] = [nums[j + 1], nums[j]]
            }
        }
    }
}
nums = [1145, 514, 1, 91, 9, 81, 0]
bubble_sort(nums)
console.log(nums)