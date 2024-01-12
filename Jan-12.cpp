
// User function Template for C++

class Solution
{
    public:
    
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
        stack<int > s; for(int i=0; i<k; i++) // inserting first k elements into the stack
        { int x = q.front(); q.pop(); s.push(x); } while(!s.empty()) // Retriving the eleemnts from stack to queue 
        { int x = s.top(); s.pop(); q.push(x); } int x = q.size()-k; while(x--) // IMP fetching the first (n-k) elements from the queue and push back into queue
        { int val = q.front(); q.pop(); q.push(val); } return q;
    }
};
