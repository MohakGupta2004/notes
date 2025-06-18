# Group A
1. A regular graph with odd degree, can’t have odd number of vertices – why?
=> A regular graph is that kind of a graph in which every vertex has same degree.
Total degree = odd vertex * odd degree. But according to Handshaking lemma total degree of all vertices = 2 * no of edges.
So the value of Total degree must be even. So it's not following the Handshaking lemma so it's not possible.

2. What is the density of C 5?
=> Density = No of edges / Maximum possible edges.
As in circular graph no of edges and vertices are same so
so density = 2*E/n(n-1) = 2*5/5(5-1) = 10/5 * 1/4 = 0.5
3. (OR) What is the density of a graph. Draw one sparse and one dense graph.
=> Density of a graph is defined by the ratio of no of edges and the maximum no of edges which are possible by that graph.
Sparse graph = Which has no of edges less than the Maximum possible edges.
Dense graph = Which has no of edges close to the Maximum.

4. Write down the generalized Pigeon-hole theorem.
=> If N number of objects are placed into k no of boxes then at least one box contains [N/K] no of objects.

5. Write down the maximum number of edges of a graph with 25 vertices and 4 components?
=> We know the maximum no of edges = (n-k)(n-k+1)/2, where n=vertices and k=components
so, 
(n-k)(n-k+1)/2 = (25-4)(25-4+1)/2 = 231

6. A complete bipartite graph G has 20 vertices, is also a regular graph. Find out the number of edges
in G.
=> A complete bipartite graph has 20 vertices and if it is a regular graph also then the no of edges in G are
20/2 = 10 divided equally.
So in both graph has 10 vertices and as if it is equal then, total possible edges are then = 10 * 10 = 100 edges.

6. What is an unicursal graph? Give an example.
=> A unicursal graph is that kind of a graph in which the graph traverses every edge exactly once.
![[Pasted image 20250618150339.png]]


7. Define the chromatic number of a graph C4?
=> Chromatic number means the minimum no of colors needed to color the vertices that no 2 adjuscent vertices has the same color. Chromatic number of C4 is 2 because we can make only two nodes in different colors making their adjuscent nodes not in the same color as the color theory of graph.

8.  Find the number of different 5-digit numbers, that can be created using digits from
the set {1, 2, 3, 4, 5} with repetition being allowed.
=> The number of 5 digit possible without repitition are 5<sup>5</sup> =  3125

9. (OR) What is the coefficient of the 5th term in the expansion of (3x-2/x)<sup>7</sup>?
=> 5th term means the 4th term = <sup>7</sup>C<sub>4</sub> x (3x)<sup>3</sup> (2/x)<sup>4</sup>

10. (OR) In how many ways we can arrange 3 letters into 3 envelopes that no letter gets the correct envelope?
=> 1 => A, 2=>B, 3=>C ideally. Then the first way we can arrange is,
1=>B, 2=>C, 3=>A
Another way can be,
1=>C, 2=>A, 3=>B

Other than this if we try to add, one letter will go to it's ideal place always. So the correct answer is 2 ways.

 10. What is the recurrence relation of an AP series whose 1st term is 5 and common difference is 3?
 => a<sub>n</sub> = a<sub>n-1</sub>+3 , n>1

# Group B

 1. A connected undirected graph G has 4 vertices and the following edges:
E = {(A, B), (A, C), (B, C), (B, D), (C, D)}.
(a) Draw the graph.
(b) List all possible spanning trees.

=>(a).  ![[Pasted image 20250618153810.png]](b)
![[Pasted image 20250618154229.png]]

2. Let T be a tree of order n ≥ 2. Prove that T has at least two leaves 
=> Theorem = A tree will always have at least two leaves if the order of the order >= 2 
So from handshaking lemma we know,
Sum of all vertices = 2 x No of edges
sum = 2(n-1) [n vertices has alwasys n-1 edges]

Now if we imagine only 1 leaf node exist in the tree then other than that node all the other nodes degree must be bigger than 1, then taking it as 2, 
	1 + 2(n-1) = 2n-1 will be the no of degree in that graph

So, 
	2n-1 = 2(n-1) should be equal but it's not 
	2n-1 != 2(n-1), so it proves that the tree of greater than order 2 can't have one leaf node. 

3. ![[Pasted image 20250618160250.png]] 
=> Eccentricity of every node is.
E(A) = 3, E(B)=2, E(C)=2, E(D) = 2, E(E)=2, E(F)=3, E(H)=3, E(G)=3

(a) Diameter = 3, Periphery = {A,G,H,F}
(b) Radius = 2, center = {B,C,D,E}
(c) Density = 
2*E / n(n-1) = 2* x 11/ 8(8-1) = 22/56 = 11/28

4. ![[Pasted image 20250618162039.png]]
=> We can start off from any node now. Let's say we start from A then the least weighted edge is A-C then, 
 (A,C)
from C we have to see what's the least weighted edge between A and C. Now the least weighted edge between A and C is A-B
{(A,C), (A,B)}
from C and A and B the least weighted edge is F, 
{(A,C), (A,B), (B, F)}
from A, B, C, F the least weighted is G or D, I choose G
{(A,C), (A,B), (B, F), (C, G)}
from A,B,C,F,G the least node is E, 
{(A,C), (A,B), (B, F), (C, G), (G,E)}
from A,B,C,F,G,E is now H,
{(A,C), (A,B), (B, F), (C, G), (G,E), (E, H)}
from H is now D,
{(A,C), (A,B), (B, F), (C, G), (G,E), (E, H), (H, D)}

All the nodes are completed, Now if we draw the tree then, 
![[Pasted image 20250618182010.png]]

MST = 2+3+4+6+4+5+4 = 28

5. Find the solution to the recurrence relation a<sub>n</sub> = 5a<sub>n-1</sub> - 6a<sub>n-2</sub>  using characteristic equation
technique. The initial conditions being a<sub>0</sub> = 0 and a<sub>1</sub> = 12.
=> Suppose, a<sub>n</sub> = r<sup>2</sup> 
	r<sup>2</sup> = 5r - 6
	=> r<sup>2</sup>-5r+6 = 0
	=> r<sup>2</sup> - 3r - 2r +6 = 0
	=> r(r-3)-2(r-3) =0
	=> (r-3)(r-2) = 0
r = 3,2

a<sub>n</sub>  = A (3)<sup>n</sup>+ B (2)<sup>n</sup>

a<sub>0</sub> = A+B=0 => B = -A
a<sub>1</sub> = 3A+2B
=> a<sub>1</sub> = 3A-2A = A
A = 12
B = -12
Then, 
a<sub>n</sub> = 12(3)<sup>n</sup> -12 (2)<sup>n</sup>  

6. Using the generalization formula for binomial expansion with functional and negative indices expand 1/√2
=> 1/√2 = 2<sup>-1/2</sup>

2<sup>-1/2</sup> = (1+1)<sup>-1/2</sup>

(1+x)<sup>n</sup> = <sup>n</sup>C<sub>0</sub>  (1)<sup>n-0</sup>  (x)<sup>0</sup>+ <sup>n</sup>C<sub>1</sub>  (1)<sup>n-1</sup>  (x)<sup>1</sup> + <sup>n</sup>C<sub>2</sub>  (1)<sup>n-2</sup>  (x)<sup>2</sup>+................
	   = 1 + nx + n(n-1)/2! x + .....

(1+1)<sup>-1/2</sup> = 1 - 1/2 + 3/8-5/16 = 0.5625

# Group C

1. i) Using Euler’s formula of planar graphs, prove that for any simple connected planar graph G. Prove e<= 3n-6. where e is the number of edges and n is the number of vertices in G. 
ii) Using the above relationship, prove that K<sub>5</sub> is nonplanar
iii) Find out the maximum number of edges in a simple connected planar graph with 15 vertices?

=> i) From Eular's formula we know, 
	n - e + f = 2, where n = vertices, e = edges, f = faces.
	 f = 2-n+e
	In simple planar graph, each face have at least 3 edges that's why,
		2e  >= 3f
	=>  f <= 2e/3
	=> 2-n+e <=2e/3
	=> 6 - 3n + 3e <=2e
	=> e <= 3n-6

ii) K<sub>5</sub> has 5 vertices 
3 x5-6 = 9 
K has 5 vertices then the no of edges is n(n-1)/2 = 5 x 4/2 = 10 edges
then 9!<=10 so it's not planar

iii) e <= 3x15-6 = 39
so 39 maximum edges is possible.

2. a) Define a bipartite graph. 
b) Prove that for any bipartite graph with n vertices, the maximum number of edges is n<sup>2</sup>/4 when n is even number. 
c) Every tree is a bipartite graph but not every bipartite graph is a tree. - justify

=> a) A bipartite graph is that kind of a graph in which we can divide in two parts called u and v, so that in each set's elements are connected with another set's vertex not with the same set. 

b) Let's say we have n vertices. Then we make 2 disjoint sets out of it

u = K, v = n-k
now let's suppose this K is the maximum which we can get.
Then in that case k = n/2
u = n/2 and v = n/2
Now we know the bipartite graph edges are equal with k(n-k)
So now in the maximum case the no of edges are n/2 x n/2 = n<sup>4</sup> /2

c) Since tree has no cycles certainly it doesn't had a odd length cycle. So it satisfies the condition of a being a bipartite graph. And as we know if we do coloring then we can always make tree a 2 color process because tree has no cycles so that no 2 vertices will have the same color so always it'll show up with the vertices with 2 different colors means we can identify them as 2 different sets.
	On the other hand if we are talking about the bipartite graph being a tree everytime it's not true because bipartite graph can have cycles which tree's don't.


3. a. Find the number of bit strings of length 10, which contains less than four 1’s? 
b. A drawer contains 10 red, 12 blue, and 14 green socks, all mixed together. Socks one at a time, without looking. How many socks must you draw to guarantee that you have at least 5 socks of the same color?
=> a) For 10 length bit strings there are 4 possiblities (as it says less than four)
No 1's => 0 or
one 1 => 1 or
two 1 => 2 or
three 1=> 3 or

Now, <sup>10</sup>c<sub>0</sub>+<sup>10</sup>c<sub>1</sub>+<sup>10</sup>c<sub>2</sub>+<sup>10</sup>c<sub>3</sub> = 176

b) If we draw 4 from 10 red, 4 from 12 blue, 4 from 14 green then adding 1 anyother sock can gurantee that one of the colors will be have at least 5 socks. 
so 3x4+1 = 13  socks