The inorder successor is the upcoming node of a target node. The very next node(In traversal)

if the inorder traversal is like this: 1,2,3,4,5,6,7,8,9
target:8 then inorder successor is 9


There are 2 cases:
Let's just say we are finding the successor of Node X.
1. if X's right subtree:
    the leftmost node will be the successor.
2. if X's has no right subtree:
    then the lowest ancestor of X, for which X is in a left subtree.
