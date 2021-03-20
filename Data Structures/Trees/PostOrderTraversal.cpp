// https://www.hackerrank.com/challenges/tree-postorder-traversal/problem

void postOrder(Node *root) {

    postOrder (root->Left);
    postOrder (root->Right);
    cout<<root->data<<" ";
}