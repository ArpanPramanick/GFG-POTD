//Link- https://www.geeksforgeeks.org/problems/sum-of-leaf-nodes-in-bst/1

class Solution
{
    public:
        
        int sumOfLeafNodes(Node *root){
          
            if (!root) {
                return 0;
            }
        
            
            if (!root->left && !root->right){
                return root->data;
            }
                
        
           
            return sumOfLeafNodes(root->left) + sumOfLeafNodes(root->right);
        }
};

// -----------------------ARRAY VERSION-----------------------
// int sum=0;
//     for(int i=0;i<n;i++){
//         int left=2*i+1, right=2*i+2;
//         if(left<=n-1 || right<=n-1){
//             if(arr[left]>=arr[i]) return -1;
//             if(right<=n-1){
//             if(arr[right]<arr[i]) return -1;
//             }
//         }
//         else{
//             sum+=arr[i];
//         }
//     }
//     return sum;
