<h1 align="center"><a href="https://www.linkedin.com/in/antriksh1305/"><img src="https://repository-images.githubusercontent.com/389729275/371ba38b-8a03-4bff-916c-c3fa5396ceda" alt="Geeks for Geeks Solutions" width="300"></a>
</h1>


## Maximum sum of Non-adjacent nodes

<h3><img width="100" alt="image" src="https://user-images.githubusercontent.com/100402656/215281956-745bfdd6-2534-44d3-8d9d-02f12cd7dbcc.png"></h3>

<h5>Time Complexity: <b>O(N)</b> <br>Space Complexity: <b>O(Height of Tree)</b></h5>

Given a binary tree with a value associated with each node, we need to choose a subset of these nodes such that sum of chosen nodes is maximum under a constraint that no two chosen node in subset should be directly connected that is, if we have taken a node in our sum then we can’t take its any children or parents in consideration and vice versa.

![image](https://github.com/Antriksh1305/Antriksh-DSA/assets/100402656/69c682f2-15ec-49d5-989a-8943077ca215)

#### Example 1:
```
Input:
     11
    /  \
   1    2
Output: 11
Explanation: The maximum sum is sum of
node 11.
```

#### Example 2:
```
Input:
        1
      /   \
     2     3
    /     /  \
   4     5    6
Output: 16
Explanation: The maximum sum is sum of
nodes 1 4 5 6 , i.e 16. These nodes are
non adjacent. 
```

#### Your task:
You don't need to read input or print anything. You just have to complete function getMaxSum() which accepts root node of the tree as parameter and returns the maximum sum as described.

### Constraints:
- 1 ≤ Number of nodes in the tree ≤ 10000
- 1 ≤ Value of each node ≤ 100000

