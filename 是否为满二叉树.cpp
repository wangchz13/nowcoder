/*
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};*/

class CheckCompletion {
public:
    bool chk(TreeNode* root) {
        queue<TreeNode *> q;
        int len = 1;
        q.push(root);
        bool flag = false;
        while(q.size()){
            TreeNode*t = q.front();
            q.pop();
            if(!t->left && t->right)
                return false;
            if(t->left && !t->right){
                if(flag)
                    return false;
                flag = true;
            }
            if(t->left)
                q.push(t->left);
            if(t->right)
                q.push(t->right);
        }
        return true;
    }
};
