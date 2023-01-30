<h1 align="center"><a href="https://www.linkedin.com/in/antriksh1305/"><img src="https://camo.githubusercontent.com/1eca2365da012b44816f2402011dc3ba78cefbe78228b22d60161a898d015b67/68747470733a2f2f6d69726f2e6d656469756d2e636f6d2f6d61782f313230302f312a4c75723972724a49547346526e7549595552596b53672e6a706567" alt="LeeCode Solutions" width="300"></a>
</h1>

<h3>Problem #303 <img width="40" alt="image" src="https://user-images.githubusercontent.com/100402656/215524434-d1db6ad6-5b3f-4bbe-b6cd-42dbf75cf387.png">
</h3>

## Range Sum Query - Immutable

<h5>Time Complexity: <b>O(N)</b> <br>Space Complexity: <b>O(1)</b></h5>

Given an integer array nums, handle multiple queries of the following type:

Calculate the sum of the elements of nums between indices left and right inclusive where left <= right.
Implement the NumArray class:

NumArray(int[] nums) Initializes the object with the integer array nums.
int sumRange(int left, int right) Returns the sum of the elements of nums between indices left and right inclusive (i.e. nums[left] + nums[left + 1] + ... + nums[right]).

#### Example 1:
```
Input
["NumArray", "sumRange", "sumRange", "sumRange"]
[[[-2, 0, 3, -5, 2, -1]], [0, 2], [2, 5], [0, 5]]
Output
[null, 1, -1, -3]

Explanation
NumArray numArray = new NumArray([-2, 0, 3, -5, 2, -1]);
numArray.sumRange(0, 2); // return (-2) + 0 + 3 = 1
numArray.sumRange(2, 5); // return 3 + (-5) + 2 + (-1) = -1
numArray.sumRange(0, 5); // return (-2) + 0 + 3 + (-5) + 2 + (-1) = -3
```


### Constraints:
- 1 <= nums.length <= 10^4
- -10^5 <= nums[i] <= 10^5
- 0 <= left <= right < nums.length
- At most 10^4 calls will be made to sumRange.
