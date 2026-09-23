// HackerRank Problem: Binary Search Tree : Lowest Common Ancestor
// Link: https://www.hackerrank.com/challenges/binary-search-tree-lowest-common-ancestor/problem
// Difficulty: Easy
// Language: cpp14



/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
  
    Node* lca(Node* root, int v1, int v2) {
    while (root != NULL) {
        if (v1 < root->data && v2 < root->data) {
            root = root->left;
        }
        else if (v1 > root->data && v2 > root->data) {
            root = root->right;
        }
        else {
            return root;
        }
    }
    return NULL;
}
