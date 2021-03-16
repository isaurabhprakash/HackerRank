// https://www.hackerrank.com/challenges/tree-level-order-traversal/problem

#include<iostream>
#include<queue>
using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

void levelOrder(Node * root) {

    if (root == nullptr)
        return;

    queue<Node *>  q;
    q.push(root);

    while (!q.empty()) {

            Node * cur_node = q.front();

        cout<<cur_node->data<<" ";
        q.pop();
        if (cur_node->left)
            q.push(cur_node->left);
        if (cur_node->right)
            q.push(cur_node->right);
    }
}