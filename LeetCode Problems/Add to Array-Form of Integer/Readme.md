<h1 align="center"><a href="https://www.linkedin.com/in/antriksh1305/"><img src="https://camo.githubusercontent.com/1eca2365da012b44816f2402011dc3ba78cefbe78228b22d60161a898d015b67/68747470733a2f2f6d69726f2e6d656469756d2e636f6d2f6d61782f313230302f312a4c75723972724a49547346526e7549595552596b53672e6a706567" alt="LeeCode Solutions" width="300"></a>
</h1>

<h3>Problem #989 <img width="40" alt="image" src="https://user-images.githubusercontent.com/100402656/215524434-d1db6ad6-5b3f-4bbe-b6cd-42dbf75cf387.png">
</h3>

## Add to Array-Form of Integer

<h5>Time Complexity: <b>O(N)</b> <br>Space Complexity: <b>O(1)</b></h5>

The <b>array-form</b> of an integer ```num``` is an array representing its digits in left to right order.

- For example, for ```num = 1321```, the array form is ```[1,3,2,1]```.

Given ```num```, the <b>array-form</b> of an integer, and an integer ```k```, return <i>the <b>array-form</b> of the integer</i> ```num + k```.

#### Example 1:
```
Input: num = [1,2,0,0], k = 34
Output: [1,2,3,4]
Explanation: 1200 + 34 = 1234
```

#### Example 2:
```
Input: num = [2,7,4], k = 181
Output: [4,5,5]
Explanation: 274 + 181 = 455
```
#### Example 3:
```
Input: num = [2,1,5], k = 806
Output: [1,0,2,1]
Explanation: 215 + 806 = 1021
```

### Constraints:
- 1 <= num.length <= 10^4
- 0 <= num[i] <= 9
- num does not contain any leading zeros except for the zero itself.
- 1 <= k <= 10^4
