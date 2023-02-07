<h1 align="center"><a href="https://www.linkedin.com/in/antriksh1305/"><img src="https://camo.githubusercontent.com/1eca2365da012b44816f2402011dc3ba78cefbe78228b22d60161a898d015b67/68747470733a2f2f6d69726f2e6d656469756d2e636f6d2f6d61782f313230302f312a4c75723972724a49547346526e7549595552596b53672e6a706567" alt="LeeCode Solutions" width="300"></a>
</h1>

<h3>Problem #904 <img width="50" alt="image" src="https://user-images.githubusercontent.com/100402656/214765733-eaaa4daa-f4f9-4224-a800-2e70f8b095f8.png">
</h3>

## Fruit Into Baskets

<h5>Time Complexity: <b>O(N)</b> <br>Space Complexity: <b>O(1)</b></h5>

You are visiting a farm that has a single row of fruit trees arranged from left to right. The trees are represented by an integer array ```fruits``` where ```fruits[i]``` is the <b>type</b> of fruit the ```ith``` tree produces.

You want to collect as much fruit as possible. However, the owner has some strict rules that you must follow:

-You only have <b>two</b> baskets, and each basket can only hold a <b>single type</b> of fruit. There is no limit on the amount of fruit each basket can hold.
Starting from any tree of your choice, you must pick <b>exactly one fruit</b> from <b>every</b> tree (including the start tree) while moving to the right. The picked fruits must fit in one of your baskets.
Once you reach a tree with fruit that cannot fit in your baskets, you must stop.
Given the integer array ```fruits```, return the <b>maximum</b> number of fruits you can pick.

#### Example 1:
```
Input: fruits = [1,2,1]
Output: 3
Explanation: We can pick from all 3 trees.
```

#### Example 2:
```
Input: fruits = [0,1,2,2]
Output: 3
Explanation: We can pick from trees [1,2,2].
If we had started at the first tree, we would only pick from trees [0,1].
```

#### Example 3:
```
Input: fruits = [1,2,3,2,2]
Output: 4
Explanation: We can pick from trees [2,3,2,2].
If we had started at the first tree, we would only pick from trees [1,2].
```


### Constraints:
- 1 <= fruits.length <= 10^5
- 0 <= fruits[i] < fruits.length
