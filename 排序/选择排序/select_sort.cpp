#include <iostream>
#include <vector>
using namespace std;
int main () {
    // 1. 每次选择最小的元素放到排序完成区间的末尾
    vector<int> vec = {1, 10, 20, 4, 8};
    for (int i = 0; i < vec.size() - 1; i++) {
        int smallest_index = i;
        for (int j = i + 1; j < vec.size(); j++) {
            if (vec[smallest_index] > vec[j]) {
                smallest_index = j;
            }
        }
        // 交换最小值
        if (smallest_index != i) {
            int tmp = vec[i];
            vec[i] = vec[smallest_index];
            vec[smallest_index] = tmp;
        }
    }
    for (auto num : vec) {
        cout << num << endl;
    }
    return 0;
}