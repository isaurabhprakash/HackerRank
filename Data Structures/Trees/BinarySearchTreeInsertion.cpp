// https://www.hackerrank.com/challenges/binary-search-tree-insertion/problem

#include<iostream>
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

Node * insert(Node * root, int data) {

    if (root == nullptr)
        return new Node (data);

    if (root->data < data) {

        root->right  = insert (root->right, data);

    } else {

        root->left = insert (root->left, data);
    }

    return root;
}