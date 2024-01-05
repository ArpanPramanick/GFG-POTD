//Link- https://www.geeksforgeeks.org/problems/count-possible-ways-to-construct-buildings5007/1

class Solution{
	public:
	int TotalWays(int N)
	{
	    long long prev = 1;
	    long long prevprev=1;
	    const long long md = 1000 * 1000 * 1000LL + 7LL;
	    for (int i=1; i<=N; ++i) {
	        prevprev = (prev + prevprev) % md;
	        std::swap(prev, prevprev);
	    }
	    return (prev * prev) % md;
	}
};
