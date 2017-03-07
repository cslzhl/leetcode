#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        if(root == nullptr) return ans;
        addTreePaths(root,to_string(root->val),ans);
        return ans;
    }
    void addTreePaths(TreeNode *root,string str,vector<string> &ans){
        if(root == nullptr) return;
        if(root->left == nullptr && root->right == nullptr){
            ans.push_back(str);
            return;
        }
        if(root->left){ addTreePaths(root->left,str+"->"+to_string(root->left->val),ans);}
        if(root->right){ addTreePaths(root->right,str+"->"+to_string(root->right->val),ans);}    }
};
