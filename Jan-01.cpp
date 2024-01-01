// https://www.geeksforgeeks.org/problems/array-pair-sum-divisibility-problem3257/1

class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
        int n = nums.size();
        if(n%2!=0) return false;
        map<int,int>mp;
        
        // store the modulo value


        for(auto it:nums){
            mp[it%k]++;
        }
        
        // check if abs(k-mp[val]) exist in map or not if yes then check for the other conditions
        
        for(auto it:mp){
            int val = abs(it.first-k);
            if(it.first==val && it.second%2!=0) return false;
            if(it.first==0 && it.second%2==0)continue;
            if(it.second>0 && mp.find(val)!=mp.end()){
                if(mp[val]>=it.second){
                    mp[val] -= it.second;
                    mp[it.first]-= it.second;
                }
                else return false;
            }
            else if(mp.find(val)==mp.end()) return false;
        }
        
        return true;
    }
};
