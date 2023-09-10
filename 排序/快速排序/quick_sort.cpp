#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &nums, int left, int right) {
    // 只需要移动索引，交换元素也是交换索引位置的元素。
    int i = left;
    int j = right;
    while (i < j) {
        while (i < j && nums[j] >= nums[left]) {
            j--;
        }
        while (i < j && nums[i] <= nums[left]) {
            i++;
        }
        swap(nums[j], nums[i]);
    }
    swap(nums[i], nums[left]);
    return i;
}
void quick_sort(vector<int> &nums, int left, int right) {
    if (left >= right) {
        return; 
    }
    int pivot = partition(nums, left, right);
    quick_sort(nums, left, pivot - 1);
    quick_sort(nums, pivot + 1, right);
}

int main() {
    vector<int> vec = {1, 14, 5, 1, 41, 919, 810};
    quick_sort(vec, 0, vec.size() - 1);
    for (auto num : vec) {
        cout << num << " ";
    }
    return 0;
}