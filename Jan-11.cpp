//Link- https://www.geeksforgeeks.org/problems/remove-k-digits/1

// User function Template for C++

class Solution {
  public:
    string removeKdigits(string S, int K) {
        int n=S.size();
        stack<char>st;
        for(int i=0;i<n;i++)
        {
            while(!st.empty()&&st.top()>S[i]&&K>0)
            {
                st.pop();
                K--;
            }
            if(st.empty()&&S[i]=='0')
            continue;
            st.push(S[i]);
        }
        while(!st.empty()&& K>0)
        {
           st.pop();
           K--;
        }

       if(st.empty())
       {
       return "0";
       }
       string ans="";

        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
