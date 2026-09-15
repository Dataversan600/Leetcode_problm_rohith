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
        
        vector<int>ll;
        ListNode*temp1 = list1;
        ListNode* temp2 = list2;
        while(temp1 != NULL){
            ll.push_back(temp1->val);
            temp1 = temp1->next;
        }
        while(temp2 != NULL){
            ll.push_back(temp2->val);
            temp2 = temp2->next;

        }
        sort(ll.begin() ,ll.end());
        if(ll.empty()){
            return NULL;
        }
        // convertt the given or obtained LL VECTOR INTO A NEW LL
        ListNode*newHead = new ListNode(ll[0]);
        ListNode* tail =   newHead;
        for(int i = 1 ; i< ll.size() ; i++){
            tail->next  = new ListNode(ll[i]);
            tail = tail->next;
        }
    return newHead;

    }
};