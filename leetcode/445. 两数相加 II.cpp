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

#include <stack>

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    stack <int> n1;
    stack <int> n2;
    int yu=0,sum=0;
    while(!(l1==nullptr&&l2==nullptr))
    {

        if(l1!=nullptr)
        {
            n1.push(l1->val);
            l1 = l1->next;
        }
        
        if(l2!=nullptr)
        {
            n2.push(l2->val);
            l2 = l2->next;
        }
    }
    
    ListNode *head=nullptr,*tail=nullptr;
    ListNode *p =nullptr;
    int n=0,m=0;

    while(!(n1.empty()&&n2.empty()))
    {
    if(!n1.empty())
    {
        n=n1.top();
        n1.pop();
    }
    else
    {
        n=0;
    }

     if(!n2.empty())
    {
        m=n2.top();
        n2.pop();
    }
    else
    {
        m=0;
    }

    sum=n+m+yu;
    yu=sum/10;

    // if(head==nullptr)  反序
    // {
    //     head=tail=new ListNode (sum%10);
    // }
    // else
    // {
    //     tail->next = new ListNode (sum%10);
    //     tail = tail -> next;
    // }
    if(head==nullptr) 
    {
        head=new ListNode (sum%10);
        head ->next =nullptr;

    }
    else
    {
    p = new ListNode(sum%10);
    p->next = head;
    head = p;
    }

    

    }
    if(yu!=0)
    {
        p = new ListNode(yu);
        p->next = head;
        head = p;
    }
    return head;
    }
};
