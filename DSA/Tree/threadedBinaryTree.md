A threaded binary tree is a kind of binary tree which has no null pointers. Every node is either connected to 
it's predecessor or successor via concept of threads. 

2 types - 

1. Single threaded Binary tree:
    Either has a thread for successor or predecessor not both
2. Double threaded Binary Tree:
    Both.


structure:
    1. left pointer 
    2. right pointer
    3. data
    4. flags (distinguish between regular child pointer and threads)


benifits:
    1. Inorder traversal becomes simpler
    2. space optimised. no recursion required.
    3. Faster successor or predecessor access.
