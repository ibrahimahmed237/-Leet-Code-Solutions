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
    ListNode* deleteDuplicates(ListNode* head) {
         if (nullptr == head || nullptr == head->next) {
            return head;
        }
        map<int,int>mp;
        ListNode* t=head;
        ListNode* p=head;
        while(t != nullptr ){
           mp[t->val]++;
           t=t->next; 
        }
        bool y=0;
        for(auto i:mp){
            if(i.second==1){
                ListNode* newN= new ListNode;
                newN->val=i.first;
                newN->next=NULL;
                p->next=newN;
                if(!y){
                    head=p->next;
                    y=1;
                }
                p=p->next;
            }
        }
        if(!y)head=NULL;
        return head;
    }
};
