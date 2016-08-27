/*
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};*/

class IdenticalTree {
public:
    bool chkIdentical(TreeNode* A, TreeNode* B) {
        strA = traver(A);
        strB = traver(B);
        return strA.find(strB) != string::npos;
    }
    string traver(TreeNode *root){
        if(!root) return "#";
        string str;
        str += root->val+'0';
        str += traver(root->left);
        str += traver(root->right);
        return str;
    }
    string strA;
    string strB;
};
