
//Link- https://www.geeksforgeeks.org/problems/search-pattern0205/1

class Solution
{public:
        vector <int> search(string pat, string txt){
            vector<int>ans;
            int ind = txt.find(pat,0);
            while(ind!=string::npos) {
                ans.push_back(ind+1);
                ind = txt.find(pat,ind+1);
            }
            return ans;
        }
     
};
