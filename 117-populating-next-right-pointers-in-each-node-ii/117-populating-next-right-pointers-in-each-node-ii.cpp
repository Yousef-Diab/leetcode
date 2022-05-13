/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(!root)return NULL;
        queue<pair<Node*,int>>q;
        q.push(make_pair(root,0));
        while(!q.empty()){
            Node*temp=q.front().first;
            if(temp->left)q.push(make_pair(temp->left,q.front().second+1));
            if(temp->right)q.push(make_pair(temp->right,q.front().second+1));
            int floor=q.front().second;
            q.pop();
            if(q.front().second==floor)temp->next=q.front().first;
            else temp->next=NULL;
        }
        return root;
    }
};