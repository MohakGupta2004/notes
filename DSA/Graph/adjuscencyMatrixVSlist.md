
Adjuscency Matrices:
    Check edges in O(1)
    Suitable for dense graphs where every node is more or so connected with each other.
    easier to implement but little costly for efficiency.
    more used when edge existence checks frequently.
    required space complexity O(V^2)
Adjuscency Lists:
    required space complexity O(V+E) 
    faster while traversing a neighbour
    efficient for modifing a vertex
    more useful for sparse matrix


### **Comparison Table**

| **Aspect**               | **Adjacency Matrix**                      | **Adjacency List**                     |
|---------------------------|-------------------------------------------|----------------------------------------|
| **Space Complexity**      | \( O(V^2) \)                             | \( O(V + E) \)                         |
| **Edge Query Efficiency** | \( O(1) \)                               | \( O(\text{degree of vertex}) \)       |
| **Traversal Efficiency**  | \( O(V) \) per vertex                    | \( O(\text{degree of vertex}) \)       |
| **Memory Usage**          | High for sparse graphs                   | Low for sparse graphs                  |
| **Implementation**        | Simple                                   | Slightly more complex                  |
| **Best for**              | Dense graphs, frequent edge queries      | Sparse graphs, traversal tasks         |


