class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) {
        unordered_map<string,vector<string>>mp;
        vector<vector<string>>ans;
        for(string path:paths)
        {
            stringstream ss(path);
            string dir;
            ss>>dir;

            string file;

            while(ss>>file)
            {
                int pos=file.find('(');
                string name=file.substr(0,pos);
                string content=file.substr(pos+1,file.size()-pos-2);
                string fullPath=dir+"/"+name;

                mp[content].push_back(fullPath);
            }
        }
        for(auto &it:mp)
        {
            if(it.second.size()>1)
            {
                ans.push_back(it.second);
            }    
        }
        return ans;
    }
};