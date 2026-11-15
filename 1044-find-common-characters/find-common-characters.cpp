
class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> ans;

        for(int i = 0; i < words.size(); i++) {
            sort(words[i].begin(), words[i].end());
        }

        string first = words[0];

        for(char ch = 'a'; ch <= 'z'; ch++) {
            int count = 0;

            for(char c : first) {
                if(c == ch) {
                    count++;
                }
            }

            int mini = count;

            for(int i = 1; i < words.size(); i++) {
                int temp = 0;

                for(char c : words[i]) {
                    if(c == ch) {
                        temp++;
                    }
                }

                mini = min(mini, temp);
            }

            for(int i = 0; i < mini; i++) {
                ans.push_back(string(1, ch));
            }
        }

        return ans;
    }
};
