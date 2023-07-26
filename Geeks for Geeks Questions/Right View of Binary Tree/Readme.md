<h1 align="center"><a href="https://www.linkedin.com/in/antriksh1305/"><img src="https://repository-images.githubusercontent.com/389729275/371ba38b-8a03-4bff-916c-c3fa5396ceda" alt="Geeks for Geeks Solutions" width="300"></a>
</h1>


## Right View of Binary Tree

<h3><img width="50" alt="image" src="https://github.com/Antriksh1305/Antriksh-DSA/assets/100402656/37ef0d08-d323-40dc-8b2b-f23edfd58b1d"></h3>

<h5>Time Complexity: <b>O(N)</b> <br>Space Complexity: <b>O(N)</b></h5>

Given a Binary Tree, find Right view of it. Right view of a Binary Tree is set of nodes visible when tree is viewed from right side.

Right view of following tree is 1 3 7 8.

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
    /    \
   3      2
Output: 1 2
```

#### Example 2:
```
Input:
     10
    /   \
  20     30
 /   \
40  60 
Output: 10 30 60
```

#### Your task:
Just complete the <b>function rightView()</b> that takes <b>node</b> as <b>parameter</b> and returns the right view as a list. 

### Constraints:
- 1 ≤ Number of nodes ≤ 10^5
- 0 ≤ Data of a node ≤ 10^5
