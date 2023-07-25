<h1 align="center"><a href="https://www.linkedin.com/in/antriksh1305/"><img src="https://repository-images.githubusercontent.com/389729275/371ba38b-8a03-4bff-916c-c3fa5396ceda" alt="Geeks for Geeks Solutions" width="300"></a>
</h1>


## Top View of Binary Tree

<h3><img width="100" alt="image" src="https://user-images.githubusercontent.com/100402656/215281956-745bfdd6-2534-44d3-8d9d-02f12cd7dbcc.png"></h3>

<h5>Time Complexity: <b>O(N*logN)</b> <br>Space Complexity: <b>O(N)</b></h5>

The task is to print the top view of binary tree. Top view of a binary tree is the set of nodes visible when the tree is viewed from the top. 

<b>Note:</b> Return nodes from leftmost node to rightmost node. Also if 2 nodes are outside the shadow of the tree and are at same position then consider the extreme ones only(i.e. leftmost and rightmost). 

For ex - 1 2 3 N 4 5 N 6 N 7 N 8 N 9 N N N N N will give 8 2 1 3 as answer. Here 8 and 9 are on the same position but 9 will get shadowed.

#### Example 1:
```
Input:
      1
   /    \
  2      3
Output: 2 1 3 
```

#### Example 2:
```
Input:
       10
    /      \
  20        30
 /   \    /    \
40   60  90    100
Output: 40 20 10 30 100
```

#### Your task:
Since this is a function problem. You don't have to take input. Just complete the function topView() that takes root node as parameter and returns a list of nodes visible from the top view from left to right.

### Constraints:
- 1 ≤ N ≤ 10^5
- 1 ≤ Node Data ≤ 10^5
