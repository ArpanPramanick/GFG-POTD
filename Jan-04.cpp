//Link- https://www.geeksforgeeks.org/problems/find-element-occuring-once-when-all-other-are-present-thrice/1

class Solution {
  public:
    int singleElement(int arr[] ,int N) {
        // code here
        sort(arr,arr+N);
        vector<int>ans;
        unordered_map<int,int>map;
        for(int i =0;i<N;i++){
            map[arr[i]]++;
            if(map[arr[i]]==1)ans.push_back(arr[i]);
            if(map[arr[i]]==2)ans.pop_back();
        }
    
        return ans[0];
    }
    
};
