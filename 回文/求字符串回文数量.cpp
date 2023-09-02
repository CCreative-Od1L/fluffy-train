#include <iostream>
using namespace std;

class Solution {
  public:
    void getRes(int start_pos, string str, int len, int& res) {
        // 填充符号 + 回文中心
        int fp = start_pos, ep = start_pos;  // fp (front_pointer) ep (end_pointer)
        // 获取最近范围
        int less_distence = 0;
        if (start_pos <= len / 2) {
            less_distence = start_pos;
        } else {
            less_distence = len - 1 - start_pos;
        }
        for (int i = 0; i <= less_distence; i++) {
            if (str[fp] == str[ep]) {
                // 相等，但是需要剔除补充符号的影响
                if (str[fp] != '#') {
                    res++;
                }
            } else {
                // 不相等后面都不可能是回文了
                break;
            }
            // 移动指针
            fp --;
            ep ++;
        }
    }
    int Substrings(string str) {
        // write code here
        int res = 0;
        string new_str;
        //  填充中间符号
        for (int i = 0; i < str.length(); i++) {
            new_str += str[i];
            if (i != str.length()) {
                new_str += "#";
            }
        }
        int len = new_str.length();
        for (int i = 0; i < len; i++) {
            getRes(i, new_str, len, res);
        }
        return res;
    }
};