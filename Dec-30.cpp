int first=-1;
        int second=-1;
        int ans=INT_MAX;
        
        for(int i=0;i<n;i++)
        {
            if(a[i]==x)
                first=i;
                
            if(a[i]==y)
                second=i;
                
            if(first !=-1 && second !=-1)
                ans = min(ans,abs(second-first));
        }
        
        return ans==INT_MAX ? -1:ans;
