// In C++, the level order traversal of a tree can be done by using a queue to store the address of elements level by level and popping them out once we have printed their data and pushed addresses of the left node and right node of the element into the queue.
// First of all, we check whether the root of the tree is equal to NULL or not, if so we return empty vector.
// Now, if root is not equal to NULL, we push it into the queue. And follow the aforementioned process to get elements of the tree as a level order traversal. The solution would be more clear as we walk through the CODE.

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans={};
        if(root==NULL) return ans;  // if root is NULL, we return empty vector
        
        queue<TreeNode*> q;
		q.push(root);          // if root is not NULL we push it into the queue
        
		while(!q.empty()){       // while queue is not empty
            
            int len=q.size();      // Size of queue is same as number of elements in the current level of the tree. e.g. root, being the level 1, always has 1 element and in a binary tree there can be at max 2 elements in level 2, 4 elements in level 3 and so on.
			
			// The level of the tree shifts ahead by one after each iteration, Level 1 being the one in first iteration. 
			
            vector<int> arr(len,0);  // Initialising a vector of length as number of elements in the current level with zeroes.
			
			// Storing current level's elements into the arr and pushing the addresses of left and right node of the elements into the queue.
            
            for(int i=0;i<len;i++){
                
                TreeNode* pointer=q.front();  
				arr[i]=pointer->val;    
                
                if(pointer->left) q.push(pointer->left);
                if(pointer->right) q.push(pointer->right);
                
                q.pop();
            }
            
			// Pushing back the current level's elements into the vector containing the elements as level order traversal.
			
            ans.push_back(arr);
            
            
        }
        
        return ans;
    }
};
