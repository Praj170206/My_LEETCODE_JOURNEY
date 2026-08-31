class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {

        ListNode* prev = head;
        ListNode* curr = head->next;

        int pos = 1;

        int first = -1;
        int last = -1;
        int minDist = INT_MAX;

        while(curr->next != nullptr) {

            if((curr->val > prev->val && curr->val > curr->next->val) ||
               (curr->val < prev->val && curr->val < curr->next->val)) {

                // First critical point
                if(first == -1) {
                    first = pos;
                    last = pos;
                }
                else {
                    minDist = min(minDist, pos - last);
                    last = pos;
                }
            }

            prev = curr;
            curr = curr->next;
            pos++;
        }

        if(first == -1 || first == last)
            return {-1, -1};

        return {minDist, last - first};
    }
};