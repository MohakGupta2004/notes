A left rotation always happens when a right subtree becomes bigger than the left subtree.

function leftRotate(node):
    y = node.left [y is the new node]
    node.left = y.right
    y.left = node

    updateHeight(node)
    updateHeight(y)
