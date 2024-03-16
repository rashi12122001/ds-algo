class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
        map<int, ListNode*> sums;
        int sum = 0;
        ListNode* ptr = head;
        ListNode* prev = nullptr;
        while (ptr != nullptr) {
            sum += ptr->val;
            if (sum == 0) {
                head = ptr->next; 
                sums.clear(); 
            } else if (sums.find(sum) != sums.end()) {
                prev = sums[sum]->next;
                int temp = sum + prev->val;
                while (prev != ptr) {
                    sums.erase(temp);
                    prev = prev->next;
                    temp += prev->val;
                }
                sums[sum]->next = ptr->next;
            } else {
                sums[sum] = ptr;
            }
            ptr = ptr->next;
        }

        return head;
    }
};
