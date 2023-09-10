/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 *	ListNode(int x) : val(x), next(nullptr) {}
 * };
 */

struct ListNode
{
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 
     * @param head ListNode类 
     * @param m int整型 
     * @param n int整型 
     * @return ListNode类
     */
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        // write code here
        if (m == n) {
            return head;
        }
        bool is_change_head = (m == 1);
        auto* p3 = new ListNode(-1);
        p3->next = head;
        for (int i = 0; i < m - 1; i++) {
            p3 = p3->next;
        }
        ListNode* p1 = p3->next;
        ListNode* p2 = p1->next;
        ListNode* p4 = nullptr;
        ListNode* p5 = p1;  // 新尾
        for (int i = m; i <= n; i++) {
            p1->next = p4;
            p3->next = p2;
            p4 = p1;
            if (p3->next) {
                p1 = p3->next;
            } else {
                p1 = nullptr;
                break;
            }
            p2 = p1->next;
        }
        p3->next = p4;
        p5->next = p1;
        return is_change_head ? p3->next : head;
    }
};