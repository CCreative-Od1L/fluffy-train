#include <iostream>
#include <vector>
using namespace std;

void bubble_sort(vector<int> &nums) {
    for (int i = nums.size() - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (nums[j] > nums[j + 1]) {
                swap(nums[j], nums[j + 1]);
            }
        }
    }
}

int main () {
    vector<int> nums = {11, 4, 51, 4, 19, 8, 1, 0};
    bubble_sort(nums);
    for (auto num : nums) {
        cout << num << " ";
    }
    return 0;
}