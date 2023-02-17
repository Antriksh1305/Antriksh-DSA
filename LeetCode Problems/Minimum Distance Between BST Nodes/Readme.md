<h1 align="center"><a href="https://www.linkedin.com/in/antriksh1305/"><img src="https://camo.githubusercontent.com/1eca2365da012b44816f2402011dc3ba78cefbe78228b22d60161a898d015b67/68747470733a2f2f6d69726f2e6d656469756d2e636f6d2f6d61782f313230302f312a4c75723972724a49547346526e7549595552596b53672e6a706567" alt="LeeCode Solutions" width="300"></a>
</h1>

<h3>Problem #1137 <img width="40" alt="image" src="https://user-images.githubusercontent.com/100402656/215524434-d1db6ad6-5b3f-4bbe-b6cd-42dbf75cf387.png">
</h3>

## Minimum Distance Between BST Nodes

<h5>Time Complexity: <b>O(N)</b> <br>Space Complexity: <b>O(H)</b> <br> where N is the number of nodes, H is the height of the tree.</h5>

Given the root of a Binary Search Tree (BST), return the minimum difference between the values of any two different nodes in the tree.

#### Example 1:
![image](https://user-images.githubusercontent.com/100402656/219714909-ce04e2f7-da56-4e6f-bb6c-ff95bab36e4f.png)
```
Input: root = [4,2,6,1,3]
Output: 1
```

#### Example 2:
![image](https://user-images.githubusercontent.com/100402656/219714950-71f63a77-fd7a-4b95-879c-ae9e2f76c269.png)
```
Input: root = [1,0,48,null,null,12,49]
Output: 1
```

### Constraints:
- The number of nodes in the tree is in the range ```[2, 100]```.
- ```0 <= Node.val <= 10^5```
