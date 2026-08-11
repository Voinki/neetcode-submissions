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
    ListNode* reverseList(ListNode* headOriginal) {
        if (headOriginal == NULL) return headOriginal;
        ListNode* prevNode = NULL;
        ListNode* currentNode = headOriginal;
        ListNode* nextNode = NULL;

        while(currentNode!=NULL){
            nextNode = currentNode->next;
            currentNode->next = prevNode;
            prevNode = currentNode;
            currentNode=nextNode;
        }
        return prevNode;

    }
};
