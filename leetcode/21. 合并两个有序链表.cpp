这道题反应了我对结构体掌握还是不很熟练
对指针掌握也不是很明白
需要多加练习


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode q(-1);
        ListNode *p=&q;
        while(list1!=nullptr&&list2!=nullptr)
        {
            if(list1->val<list2->val)
            {
                p->next = list1;
                list1 = list1->next;
            }
            else
            {
                p->next=list2;
                list2 = list2->next;
            }
            p = p -> next;
        }
        p->next = (list1 != nullptr) ? list1 : list2;
        return q.next;
    }
};


