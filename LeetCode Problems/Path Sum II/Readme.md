<h1 align="center"><a href="https://www.linkedin.com/in/antriksh1305/"><img src="https://camo.githubusercontent.com/1eca2365da012b44816f2402011dc3ba78cefbe78228b22d60161a898d015b67/68747470733a2f2f6d69726f2e6d656469756d2e636f6d2f6d61782f313230302f312a4c75723972724a49547346526e7549595552596b53672e6a706567" alt="LeeCode Solutions" width="300"></a>
</h1>

<h3>Problem #113 <img width="60" alt="image" src="https://user-images.githubusercontent.com/100402656/214765733-eaaa4daa-f4f9-4224-a800-2e70f8b095f8.png">
</h3>

## Path Sum II

<h5>Time Complexity: <b>O(N)</b> <br>Space Complexity: <b>O(Height of Tree)</b></h5>

Given the root of a binary tree and an integer `targetSum`, return **_all root-to-leaf paths where the sum of the node values in the path equals_** `targetSum`. _Each path should be returned as a list of the node **values**, not node references_.

A **root-to-leaf** path is a path starting from the root and ending at any leaf node. A **leaf** is a node with no children.

#### Example 1:
![image](https://github.com/Antriksh1305/Antriksh-DSA/assets/100402656/f4beeff2-e0b4-44c5-a0ca-66aeca116085)
```
Input: root = [5,4,8,11,null,13,4,7,2,null,null,5,1], targetSum = 22
Output: [[5,4,11,2],[5,8,4,5]]
Explanation: There are two paths whose sum equals targetSum:
5 + 4 + 11 + 2 = 22
5 + 8 + 4 + 5 = 22
```

#### Example 2:
![image](https://github.com/Antriksh1305/Antriksh-DSA/assets/100402656/970962b3-79ef-494c-bb33-b13af14434f0)
```
Input: root = [1,2,3], targetSum = 5
Output: []
```

#### Example 3:
```
Input: root = [1,2], targetSum = 0
Output: []
```


### Constraints:
- The number of nodes in the tree is in the range ```[0, 5000]```.
- ```-1000 <= Node.val <= 1000```
- ```-1000 <= targetSum <= 1000```
