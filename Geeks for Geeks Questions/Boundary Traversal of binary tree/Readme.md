<h1 align="center"><a href="https://www.linkedin.com/in/antriksh1305/"><img src="https://repository-images.githubusercontent.com/389729275/371ba38b-8a03-4bff-916c-c3fa5396ceda" alt="Geeks for Geeks Solutions" width="300"></a>
</h1>


## Boundary Traversal of binary tree

<h3><img width="100" alt="image" src="https://user-images.githubusercontent.com/100402656/215281956-745bfdd6-2534-44d3-8d9d-02f12cd7dbcc.png"></h3>

<h5>Time Complexity: <b>O(N)</b> <br>Space Complexity: <b>O(Height of Tree)</b></h5>

Given a Binary Tree, find its Boundary Traversal. The traversal should be in the following order: 

1. <b>Left boundary nodes:</b> defined as the path from the root to the left-most node ie- the leaf node you could reach when you always travel preferring the left subtree over the right subtree. 
2. <b>Leaf nodes:</b> All the leaf nodes except for the ones that are part of left or right boundary.
3. <b>Reverse right boundary nodes:</b> defined as the path from the right-most node to the root. The right-most node is the leaf node you could reach when you always travel preferring the right subtree over the left subtree. Exclude the root from this as it was already included in the traversal of left boundary nodes.

<b>Note:</b> If the root doesn't have a left subtree or right subtree, then the root itself is the left or right boundary. 

#### Example 1:
```
Input:
        1 
      /   \
     2     3  
    / \   / \ 
   4   5 6   7
      / \
     8   9
   
Output: 1 2 4 8 9 6 7 3
Explanation:
```
<img src="https://media.geeksforgeeks.org/wp-content/uploads/20211103204119/graph4-300x300.png" alt="example1">

#### Example 2:
```
Input:
            1
           /
          2
        /  \
       4    9
     /  \    \
    6    5    3
             /  \
            7     8

Output: 1 2 4 6 5 7 8
Explanation:
```
![image](https://github.com/Antriksh1305/Antriksh-DSA/assets/100402656/830826b7-51c3-4391-b4c3-706843189146)

#### Your task:
This is a function problem. You don't have to take input. Just complete the function boundary() that takes the root node as input and returns an array containing the boundary values in anti-clockwise.


### Constraints:
- 1 ≤ Number of nodes ≤ 10^5
- 1 ≤ Data of a node ≤ 10^5

