#include <iostream>
#include <vector>
using namespace std;
void insert_sort(vector<int> &vec) {
    for (int i = 1; i < vec.size(); i++) {
        int base = vec[i];
        int j = i - 1;
        while (j >= 0 && vec[j] > base) {
            vec[j + 1] = vec[j];
            j--;
        }
        vec[j + 1] = base;
    }
}
int main() {
    vector<int> vec = {1, 14, 5, 1, 41, 919, 810};
    insert_sort(vec);
    for (auto num : vec) {
        cout << num << " ";
    }
    return 0;
}