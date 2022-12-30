

struct ListNode{
int val;
ListNode* next;
};

class Solution {
public:
      ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
      {
           ListNode* new_head=new ListNode();
           ListNode* temp = new_head;
           int x,y;
           int carry=0;
           while(l1!=NULL||l2!=NULL||carry!=0)
           {
               x=l1?l1->val:0;
               y=l2?l2->val:0;
               int sum=x+y+carry;
               carry=sum/10;
               temp->next=new ListNode(sum%10);
               temp=temp->next;
               l1=l1?l1->next:nullptr;
               l2=l2?l2->next:nullptr;
           }
           return new_head->next;
      }
};       
