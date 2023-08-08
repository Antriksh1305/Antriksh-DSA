<h1 align="center"><a href="https://www.linkedin.com/in/antriksh1305/"><img src="https://camo.githubusercontent.com/1eca2365da012b44816f2402011dc3ba78cefbe78228b22d60161a898d015b67/68747470733a2f2f6d69726f2e6d656469756d2e636f6d2f6d61782f313230302f312a4c75723972724a49547346526e7549595552596b53672e6a706567" alt="LeeCode Solutions" width="300"></a>
</h1>

<h3>Problem #236 <img width="60" alt="image" src="https://user-images.githubusercontent.com/100402656/214765733-eaaa4daa-f4f9-4224-a800-2e70f8b095f8.png">
</h3>

## Lowest Common Ancestor of a Binary Tree

<h5>Time Complexity: <b>O(N)</b> <br>Space Complexity: <b>O(Height of Tree)</b></h5>

Given a binary tree, find the lowest common ancestor (LCA) of two given nodes in the tree.

According to the definition of LCA on Wikipedia: “The lowest common ancestor is defined between two nodes ```p```and ```q``` as the lowest node in ```T``` that has both ```p``` and ```q``` as descendants (where we allow **a node to be a descendant of itself**).”

#### Example 1:
![image](https://github.com/Antriksh1305/Antriksh-DSA/assets/100402656/7005f21e-4bcb-469a-ad3c-98b05aedb5c9)
```
Input: root = [3,5,1,6,2,0,8,null,null,7,4], p = 5, q = 1
Output: 3
Explanation: The LCA of nodes 5 and 1 is 3.
```

#### Example 2:
![image](https://github.com/Antriksh1305/Antriksh-DSA/assets/100402656/ea6a7c7a-0752-4e39-b5cf-53640b134b4b)
```
Input: root = [3,5,1,6,2,0,8,null,null,7,4], p = 5, q = 4
Output: 5
Explanation: The LCA of nodes 5 and 4 is 5, since a node can be a descendant of
itself according to the LCA definition.
```

#### Example 3:
```
Input: root = [1,2], p = 1, q = 2
Output: 1
```


### Constraints:
- The number of nodes in the tree is in the range [2, 10<sup>5</sup>].
- -10<sup>9</sup> <= Node.val <= 10<sup>9</sup>
- All Node.val are **unique**.
- p != q
- p and q will exist in the tree.
