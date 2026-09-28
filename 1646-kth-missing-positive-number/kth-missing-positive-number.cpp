class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {

        int count = 0;

        for(int num = 1; ; num++) {

            bool found = false;

            for(int x : arr) {
                if(x == num) {
                    found = true;
                    break;
                }
            }

            if(!found) {
                count++;
            }

            if(count == k) {
                return num;
            }
        }

        return -1;
    }
};