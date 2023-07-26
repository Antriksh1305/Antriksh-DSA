<h1 align="center"><a href="https://www.linkedin.com/in/antriksh1305/"><img src="https://repository-images.githubusercontent.com/389729275/371ba38b-8a03-4bff-916c-c3fa5396ceda" alt="Geeks for Geeks Solutions" width="300"></a>
</h1>


## Left View of Binary Tree

<h3><img width="50" alt="image" src="https://github.com/Antriksh1305/Antriksh-DSA/assets/100402656/37ef0d08-d323-40dc-8b2b-f23edfd58b1d"></h3>

<h5>Time Complexity: <b>O(N)</b> <br>Space Complexity: <b>O(N)</b></h5>

Given a Binary Tree, return Left view of it. Left view of a Binary Tree is set of nodes visible when tree is visited from Left side. The task is to complete the function <b>leftView()</b>, which accepts root of the tree as argument.

Left view of following tree is 1 2 4 8.

            1
         /     \
       2        3
     /   \    /   \
    4     5  6     7
     \
      8   
     
#### Example 1:
```
Input:
   1
 /  \
3    2
Output: 1 3
```

#### Example 2:
```
Input:
Output: 10 20 40
```
![image](https://github.com/Antriksh1305/Antriksh-DSA/assets/100402656/3e4de569-1e61-489c-ac0d-a0774652f2b8)

#### Your task:
You just have to <b>complete</b> the function <b>leftView()</b> that returns an array containing the nodes that are in the left view. The newline is automatically appended by the driver code.

### Constraints:
- 0 <= Number of nodes <= 100
- 1 <= Data of a node <= 1000
