# Tree: Height of a Binary Tree

**Difficulty:** Easy  
**Topics:** N/A  
**HackerRank URL:** [Tree: Height of a Binary Tree](https://www.hackerrank.com/challenges/tree-height-of-a-binary-tree/problem)

## Problem Description

The height of a binary tree is the number of edges between the tree's root and its furthest leaf.  For example, the following binary tree is of height :

* **
Function Description**

Complete the getHeight* or *height* function in the editor.  It must return the height of a binary tree as an integer.

getHeight or height has the following parameter(s):

* *root*: a reference to the root of a binary tree.

**Note** -The Height of binary tree with single node is taken as zero.

**Input Format**

The first line contains an integer , the number of nodes in the tree. **
Next line contains  space separated integer where th integer denotes node[i].data.

Note**:  Node values are inserted into a binary search tree before a reference to the tree's root node is passed to your function.  In a binary search tree, all nodes on the left branch of a node are less than the node value.  All values on the right branch are greater than the node value.

**Constraints**

 **

Output Format**

Your function should return a single integer denoting the height of the binary tree.

**Sample Input**

![image](https://s3.amazonaws.com/hr-assets/0/1527625966-0f80a8e1a4-treeDepthSample0.png)

**Sample Output**

```
3

```

**Explanation**

The longest root-to-leaf path is shown below:

![image](https://s3.amazonaws.com/hr-assets/0/1527626088-807ca5fc63-treeDepthSample1.png)

There are  nodes in this path that are connected by  edges, meaning our binary tree's .

## Examples



## Constraints



## Solution

```cpp
// HackerRank Problem: Tree: Height of a Binary Tree
// Link: https://www.hackerrank.com/challenges/tree-height-of-a-binary-tree/problem
// Difficulty: Easy
// Language: cpp


/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    int height(Node* root)
{
    if(root == NULL)
        return -1;

    return max(height(root->left),height(root->right))+1;
}


```

---
<div align="center">

**🔄 Synced with [CommitSync](https://www.google.com/search?q=CommitSync+extension)**

*Automatically organized and synced by CommitSync.*

</div>
