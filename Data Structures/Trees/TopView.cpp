// https://www.hackerrank.com/challenges/tree-top-view/problem

#include<iostream>
#include<queue>
#include<map>
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

void CalculateHd (Node * root, map<Node *, int> & hdmap, int parenthd)
{
    if (root == nullptr)
        return;

    if (root->left) {
        hdmap.insert(pair<Node*, int> (root->left, parenthd - 1));
        CalculateHd (root->left, hdmap, parenthd - 1);
    }

    if (root->right) {
        hdmap.insert(pair<Node*, int> (root->right, parenthd + 1));
        CalculateHd (root->right, hdmap, parenthd + 1);
    }
}

void printTopView (Node * root, map<Node *, int> hdmap) {

    queue<Node *>           q;
    multimap<int, Node *>   map;

    q.push(root);
    map.insert(pair<int, Node *> (0, root));

    while (!q.empty()) {

        Node * cur_node = q.front();

        q.pop();

        if (cur_node->right) {
            q.push(cur_node->right);

            if (!map.count(hdmap[cur_node->right]))
                map.insert(pair<int, Node *> (hdmap[cur_node->right],cur_node->right));
        }

        if (cur_node->left) {
            q.push(cur_node->left);

            if (!map.count(hdmap[cur_node->left]))
                map.insert(pair<int, Node *> (hdmap[cur_node->left],cur_node->left));
        }
    }

    for (auto itr = map.begin(); itr != map.end (); ++itr) {
        cout <<itr->second<<" ";
    }
}

void topView(Node * root) {

    if (root == nullptr)
        return;

    // This will hold the hd of all the nodes
    map<Node *, int> hdmap;

    // Set the hd of the root node to be 0
    hdmap.insert(pair<Node*, int> (root, 0));

    // Calculate the hd of all the nodes
    CalculateHd (root, hdmap, 0);

    // Print the top view
    printTopView (root, hdmap);
}
