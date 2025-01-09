Binary search tree is a unique kind of a tree which has small elements than root node in the left side of the
tree and bigger elements on the right side of it and in every level every node follows the same structure.

Structure:
    1. value 
    2. left node <value
    3. right node >value

searching of an element cause it O(log n) worst case O(n) [for linkedlist]

left and right of a root is also a bst

BST also has similar ways of traversing (in,pre,post)

function searchBST(root, target):
    if root is NULL:
        return NULL  // Element not found
    if root.value == target:
        return root  // Element found
    if target < root.value:
        return searchBST(root.left, target)  // Search in left subtree
    else:
        return searchBST(root.right, target)  // Search in right subtree
