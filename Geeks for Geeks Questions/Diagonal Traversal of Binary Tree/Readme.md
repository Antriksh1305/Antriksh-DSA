<h1 align="center"><a href="https://www.linkedin.com/in/antriksh1305/"><img src="https://repository-images.githubusercontent.com/389729275/371ba38b-8a03-4bff-916c-c3fa5396ceda" alt="Geeks for Geeks Solutions" width="300"></a>
</h1>


## Diagonal Traversal of Binary Tree

<h3><img width="100" alt="image" src="https://user-images.githubusercontent.com/100402656/215281956-745bfdd6-2534-44d3-8d9d-02f12cd7dbcc.png"></h3>

<h5>Time Complexity: <b>O(N)</b> <br>Space Complexity: <b>O(N)</b></h5>

Given a Binary Tree, print the diagonal traversal of the binary tree.

Consider lines of slope -1 passing between nodes. Given a Binary Tree, print all diagonal elements in a binary tree belonging to same line.
If the diagonal element are present in two different subtress then left subtree diagonal element should be taken first and then right subtree. 

#### Example 1:
```
Input :
            8
         /     \
        3      10
      /   \      \
     1     6     14
         /   \   /
        4     7 13
Output : 8 10 14 3 6 7 13 1 4
Explanation:
```
<img width="297" alt="image" src="https://github.com/Antriksh1305/Antriksh-DSA/assets/100402656/6cea444f-bf22-4818-904f-71ba9611214b">

```
Diagonal Traversal of binary tree : 
 8 10 14 3 6 7 13 1 4
```

#### Your task:
You don't need to read input or print anything. The task is to complete the function diagonal() that takes the root node as input argumets and returns the diagonal traversal of the given tree.

### Constraints:
- 1 <= Number of nodes<= 10^5
- 1 <= Data of a node<= 10^5
