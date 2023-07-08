<h1 align="center"><a href="https://www.linkedin.com/in/antriksh1305/"><img src="https://camo.githubusercontent.com/1eca2365da012b44816f2402011dc3ba78cefbe78228b22d60161a898d015b67/68747470733a2f2f6d69726f2e6d656469756d2e636f6d2f6d61782f313230302f312a4c75723972724a49547346526e7549595552596b53672e6a706567" alt="LeeCode Solutions" width="300"></a>
</h1>

<h3>Problem #112 <img width="40" alt="image" src="https://user-images.githubusercontent.com/100402656/215524434-d1db6ad6-5b3f-4bbe-b6cd-42dbf75cf387.png">
</h3>

## Path Sum

<h5>Time Complexity: <b>O(N)</b> <br>Space Complexity: <b>O(height of tree)</b></h5>

Given the root of a binary tree and an integer targetSum, return true if the tree has a root-to-leaf path such that adding up all the values along the path equals targetSum.

A leaf is a node with no children.

#### Example 1:
![image](https://github.com/Antriksh1305/Antriksh-DSA/assets/100402656/96ca8fec-6460-46d6-a26c-9a723694fd3d)
```
Input: root = [5,4,8,11,null,13,4,7,2,null,null,null,1], targetSum = 22
Output: true
Explanation: The root-to-leaf path with the target sum is shown.
```

#### Example 2:
![image](https://github.com/Antriksh1305/Antriksh-DSA/assets/100402656/622169af-9081-4b83-a1ea-444a968bbf71)
```
Input: root = [1,2,3], targetSum = 5
Output: false
Explanation: There two root-to-leaf paths in the tree:
(1 --> 2): The sum is 3.
(1 --> 3): The sum is 4.
There is no root-to-leaf path with sum = 5.
```

#### Example 3:
```
Input: root = [], targetSum = 0
Output: false
Explanation: Since the tree is empty, there are no root-to-leaf paths.
```

### Constraints:
- The number of nodes in the tree is in the range ```[0, 5000]```.
- ```-1000 <= Node.val <= 1000```
- ```-1000 <= targetSum <= 1000```
