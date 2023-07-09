<h1 align="center"><a href="https://www.linkedin.com/in/antriksh1305/"><img src="https://camo.githubusercontent.com/1eca2365da012b44816f2402011dc3ba78cefbe78228b22d60161a898d015b67/68747470733a2f2f6d69726f2e6d656469756d2e636f6d2f6d61782f313230302f312a4c75723972724a49547346526e7549595552596b53672e6a706567" alt="LeeCode Solutions" width="300"></a>
</h1>

<h3>Problem #103 <img width="50" alt="image" src="https://user-images.githubusercontent.com/100402656/214765733-eaaa4daa-f4f9-4224-a800-2e70f8b095f8.png">
</h3>

## Binary Tree Zigzag Level Order Traversal

<h5>Time Complexity: <b>O(N)</b> <br>Space Complexity: <b>O(height of tree) to (N)</b></h5>

Given the ```root``` of a binary tree, return <i>the zigzag level order traversal of its nodes' values</i>. (i.e., from left to right, then right to left for the next level and alternate between).

#### Example 1:
![image](https://github.com/Antriksh1305/Antriksh-DSA/assets/100402656/0ca4b9c5-9415-4ddb-80d9-7317e482c579)
```
Input: root = [3,9,20,null,null,15,7]
Output: [[3],[20,9],[15,7]]
```

#### Example 2:
```
Input: root = [1]
Output: [[1]]
```

#### Example 3:
```
Input: root = []
Output: []
```


### Constraints:
- The number of nodes in the tree is in the range ```[0, 2000]```.
- ```-100 <= Node.val <= 100```
