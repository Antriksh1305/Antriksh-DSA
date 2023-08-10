<h1 align="center"><a href="https://www.linkedin.com/in/antriksh1305/"><img src="https://repository-images.githubusercontent.com/389729275/371ba38b-8a03-4bff-916c-c3fa5396ceda" alt="Geeks for Geeks Solutions" width="300"></a>
</h1>


## K Sum Paths

<h3><img width="100" alt="image" src="https://user-images.githubusercontent.com/100402656/215281956-745bfdd6-2534-44d3-8d9d-02f12cd7dbcc.png"></h3>

<h5>Time Complexity: <b>O(N)</b> <br>Space Complexity: <b>O(Height of Tree)</b></h5>

Given a binary tree and an integer K. Find the number of paths in the tree which have their sum equal to K.
A path may start from any node and end at any node in the downward direction.

#### Example 1:
```
Input:      
Tree = 
          1                               
        /   \                          
       2     3
K = 3
Output: 2
Explanation:
Path 1 : 1 + 2 = 3
Path 2 : only leaf node 3
```

#### Example 2:
```
Input: 
Tree = 
           1
        /     \
      3        -1
    /   \     /   \
   2     1   4     5                        
        /   / \     \                    
       1   1   2     6    
K = 5                    
Output: 8
Explanation:
The following paths sum to K.  
3 2 
3 1 1 
1 3 1 
4 1 
1 -1 4 1 
-1 4 2 
5 
1 -1 5 
```

#### Your task:
You don't need to read input or print anything. Complete the function sumK() which takes root node and integer K as input parameters and returns the number of paths that have sum K. Since the answer may be very large, compute it modulo 10<sup>9</sup>+7.

### Constraints:
- 1 ≤ N ≤ 10<sup>5</sup>
- -10<sup>5</sup> ≤ Node Value ≤ 10<sup>5</sup>
- -10<sup>9</sup> ≤ k ≤ 10<sup>9</sup>
