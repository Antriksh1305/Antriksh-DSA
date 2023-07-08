<h1 align="center"><a href="https://www.linkedin.com/in/antriksh1305/"><img src="https://camo.githubusercontent.com/1eca2365da012b44816f2402011dc3ba78cefbe78228b22d60161a898d015b67/68747470733a2f2f6d69726f2e6d656469756d2e636f6d2f6d61782f313230302f312a4c75723972724a49547346526e7549595552596b53672e6a706567" alt="LeeCode Solutions" width="300"></a>
</h1>

<h3>Problem #129 <img width="50" alt="image" src="https://user-images.githubusercontent.com/100402656/214765733-eaaa4daa-f4f9-4224-a800-2e70f8b095f8.png">
</h3>

## Sum Root to Leaf Numbers

<h5>Time Complexity: <b>O(N)</b> <br>Space Complexity: <b>O(height of tree)</b></h5>

You are given the root of a binary tree containing digits from 0 to 9 only.

Each root-to-leaf path in the tree represents a number.

For example, the root-to-leaf path 1 -> 2 -> 3 represents the number 123.
Return the total sum of all root-to-leaf numbers. Test cases are generated so that the answer will fit in a 32-bit integer.

A leaf node is a node with no children.

#### Example 1:
![image](https://github.com/Antriksh1305/Antriksh-DSA/assets/100402656/0918b45b-03da-4b59-a993-11a6930595db)
```
Input: root = [1,2,3]
Output: 25
Explanation:
The root-to-leaf path 1->2 represents the number 12.
The root-to-leaf path 1->3 represents the number 13.
Therefore, sum = 12 + 13 = 25.
```

#### Example 2:
![image](https://github.com/Antriksh1305/Antriksh-DSA/assets/100402656/a29cf95a-c144-4306-b56a-65cd133bf025)
```
Input: root = [4,9,0,5,1]
Output: 1026
Explanation:
The root-to-leaf path 4->9->5 represents the number 495.
The root-to-leaf path 4->9->1 represents the number 491.
The root-to-leaf path 4->0 represents the number 40.
Therefore, sum = 495 + 491 + 40 = 1026.
```


### Constraints:
- The number of nodes in the tree is in the range ```[1, 1000]```.
- ```0 <= Node.val <= 9```
- The depth of the tree will not exceed ```10```.
