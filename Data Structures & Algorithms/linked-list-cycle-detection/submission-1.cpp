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

// given head of list, true if cylce, false if not
// if value repeats -> cycle, 

class Solution {
public:
    bool hasCycle(ListNode* head) {
        set<ListNode*> cycleSet;

        while (head != NULL) {
            if (head->next == NULL) return false;

            if (!cycleSet.contains(head)){
                cycleSet.insert({head});
                head = head->next;
            }
            else return true;
        }

        return false;
    }
};
