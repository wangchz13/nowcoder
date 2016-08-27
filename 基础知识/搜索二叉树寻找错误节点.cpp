/*
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};*/

class FindErrorNode {
public:
    void inorder(TreeNode* root){
        if(!root) return;
        inorder(root->left);
        in.push_back(root->val);
        inorder(root->right);
    }
    vector<int> findError(TreeNode* root) {
        inorder(root);
        vector<int> ans;
        int left = -1,right;
        bool flag = false;
        for(int i = 1; i < in.size(); i++){
            if(in[i] < in[i-1]){
                if(left == -1)
                    left = i-1;
                right = i;
            }
        }    
        ans.push_back(in[right]);
        ans.push_back(in[left]);
        return ans;
    }
    vector<int> in;
};
