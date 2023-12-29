vector<string> winner(string arr[] , int n){
        map<string , int> m;
        for(int i=0 ; i<n ; i++){
            m[arr[i]]++;
        }
        int mx=0;
        string s , s1;
        for(auto &pr : m){
            if(pr.second>mx){
                mx=pr.second;
                s=pr.first;
                s1=to_string(pr.second);
            }
        }
        return {s , s1};
    }
