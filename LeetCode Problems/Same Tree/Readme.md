<h1 align="center"><a href="https://www.linkedin.com/in/antriksh1305/"><img src="https://camo.githubusercontent.com/1eca2365da012b44816f2402011dc3ba78cefbe78228b22d60161a898d015b67/68747470733a2f2f6d69726f2e6d656469756d2e636f6d2f6d61782f313230302f312a4c75723972724a49547346526e7549595552596b53672e6a706567" alt="LeeCode Solutions" width="300"></a>
</h1>

<h3>Problem #100 <img width="40" alt="image" src="https://user-images.githubusercontent.com/100402656/215524434-d1db6ad6-5b3f-4bbe-b6cd-42dbf75cf387.png">
</h3>

## Same Tree

<h5>Time Complexity: <b>O(N)</b> <br>Space Complexity: <b>O(N)</b></h5>

Given the roots of two binary trees p and q, write a function to check if they are the same or not.

Two binary trees are considered the same if they are structurally identical, and the nodes have the same value.

#### Example 1:
![image](https://github.com/Antriksh1305/Antriksh-DSA/assets/100402656/fe45b840-57b6-4d7e-9807-cb93fcfb794b)
```
Input: p = [1,2,3], q = [1,2,3]
Output: true
```

#### Example 2:
![image](https://github.com/Antriksh1305/Antriksh-DSA/assets/100402656/cde0d51e-53cc-4fa7-9a36-ccba1ba091a5)
```
Input: p = [1,2], q = [1,null,2]
Output: false
```

#### Example 3:
![image](https://github.com/Antriksh1305/Antriksh-DSA/assets/100402656/5fe2f91e-c759-4091-9878-e365c70977d5)
```
Input: p = [1,2,1], q = [1,1,2]
Output: false
```

### Constraints:
- The number of nodes in both trees is in the range ```[0, 100]```.
- ```-10^4 <= Node.val <= 10^4```
