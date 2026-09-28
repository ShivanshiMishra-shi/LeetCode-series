class Solution {
public:
    int countPairs(vector<int>& deliciousness) {
        unordered_map<int,int> mp;
        int count = 0;

        for(int x : deliciousness) {
            for(int p = 1; p <= (1 << 21); p *= 2) {
                
                int need = p - x;

                if(mp.find(need) != mp.end()) {
                    count = (count + mp[need]) % 1000000007;
                }
            }

            mp[x]++;
        }

        return count;
    }
};