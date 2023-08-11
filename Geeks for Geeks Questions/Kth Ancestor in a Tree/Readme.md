<h1 align="center"><a href="https://www.linkedin.com/in/antriksh1305/"><img src="https://repository-images.githubusercontent.com/389729275/371ba38b-8a03-4bff-916c-c3fa5396ceda" alt="Geeks for Geeks Solutions" width="300"></a>
</h1>


## Kth Ancestor in a Tree

<h3><img width="100" alt="image" src="https://user-images.githubusercontent.com/100402656/215281956-745bfdd6-2534-44d3-8d9d-02f12cd7dbcc.png"></h3>

<h5>Time Complexity: <b>O(N)</b> <br>Space Complexity: <b>O(N)</b></h5>

Given a binary tree of size  N, a node, and a positive integer k., Your task is to complete the function kthAncestor(), the function should return the kth ancestor of the given node in the binary tree. If there does not exist any such ancestor then return -1.
Note:
1. It is guaranteed that the node exists in the tree.
2. All the nodes of the tree have distinct values.

#### Example 1:
![image](https://github.com/Antriksh1305/Antriksh-DSA/assets/100402656/a4192a73-7760-49e7-a385-78d7f8cbc0e2)
```
Input:
K = 2 Node = 4
Output: 1
Explanation:
Since, K is 2 and node is 4, so we
first need to locate the node and
look k times its ancestors.
Here in this Case node 4 has 1 as his
2nd Ancestor aka the Root of the tree.
```

#### Example 2:
```
Input:
k=1 
node=3
   1
 /   \
2     3

Output:
1
Explanation:
K=1 and node=3 ,Kth ancestor of node 3 is 1.
```

#### Your task:
You are asked to complete the function kthAncestor() which accepts root of the tree, k and node as input parameters, and returns the kth ancestor of Node which contains node as its value.

### Constraints:
- 1 ≤ N ≤ 10<sup>5</sup>
- 1<= K <= 100
- 1 <= Node.data <= N
