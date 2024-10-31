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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * head=nullptr,* tail=nullptr;
        int yu=0;
        while(l1!=nullptr&&l2!=nullptr)
        {
            int n= l1==nullptr? 0:l1->val;
            int m= l2==nullptr? 0:l2->val;
            int sum=n+m+yu;
            if(head==nullptr)
            {
                head=tail=new ListNode (sum%10);
            }
            else
            {
                tail->next =new ListNode(sum%10);
                tail = tail->next;
            }
            yu=sum/10;
        }
        if(yu!=0)
        {
            tail->next =new ListNode(yu);
            tail = tail->next;
        }


        return head;
        
    }
};
