<h1 align="center"><a href="https://www.linkedin.com/in/antriksh1305/"><img src="https://camo.githubusercontent.com/1eca2365da012b44816f2402011dc3ba78cefbe78228b22d60161a898d015b67/68747470733a2f2f6d69726f2e6d656469756d2e636f6d2f6d61782f313230302f312a4c75723972724a49547346526e7549595552596b53672e6a706567" alt="LeeCode Solutions" width="300"></a>
</h1>

<h3>Problem #735 <img width="50" alt="image" src="https://user-images.githubusercontent.com/100402656/214765733-eaaa4daa-f4f9-4224-a800-2e70f8b095f8.png">
</h3>

## Asteroid Collision

<h5>Time Complexity: <b>O(N)</b> <br>Space Complexity: <b>O(N)</b></h5>

We are given an array ```asteroids``` of integers representing asteroids in a row.

For each asteroid, the absolute value represents its size, and the sign represents its direction (positive meaning right, negative meaning left). Each asteroid moves at the same speed.

Find out the state of the asteroids after all collisions. If two asteroids meet, the smaller one will explode. If both are the same size, both will explode. Two asteroids moving in the same direction will never meet.

#### Example 1:
```
Input: asteroids = [5,10,-5]
Output: [5,10]
Explanation: The 10 and -5 collide resulting in 10. The 5 and 10 never collide.
```

#### Example 2:
```
Input: asteroids = [8,-8]
Output: []
Explanation: The 8 and -8 collide exploding each other.
```

#### Example 3:
```
Input: asteroids = [10,2,-5]
Output: [10]
Explanation: The 2 and -5 collide resulting in -5. The 10 and -5 collide resulting in 10.
```


### Constraints:
- 2 <= asteroids.length <= 10^4
- -1000 <= asteroids[i] <= 1000
- asteroids[i] != 0
