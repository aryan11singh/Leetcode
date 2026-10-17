/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int>res;
        fun(root,res);
        return res;
        
    }
    void fun(Node*node,vector<int>&res){
        if(node==nullptr)
        return;
        res.push_back(node->val);
        for(Node*child:node->children)
        fun(child,res);
        return ;
    }
};