<h1 align="center"><a href="https://www.linkedin.com/in/antriksh1305/"><img src="https://camo.githubusercontent.com/1eca2365da012b44816f2402011dc3ba78cefbe78228b22d60161a898d015b67/68747470733a2f2f6d69726f2e6d656469756d2e636f6d2f6d61782f313230302f312a4c75723972724a49547346526e7549595552596b53672e6a706567" alt="LeeCode Solutions" width="300"></a>
</h1>

<h3>Problem #523 <img width="50" alt="image" src="https://user-images.githubusercontent.com/100402656/214765733-eaaa4daa-f4f9-4224-a800-2e70f8b095f8.png">
</h3>

## Continuous Subarray Sum

<h5>Time Complexity: <b>O(NlogN)</b> <br>Space Complexity: <b>O(N)</b></h5>

Given an integer array nums and an integer k, return true if nums has a <b>good subarray</b> or false otherwise.

A <b>good subarray</b> is a subarray where:

its length is <b>at least two</b>, and
the sum of the elements of the subarray is a multiple of k.<br>

<b>Note</b> that:
A <b>subarray</b> is a contiguous part of the array.
An integer x is a multiple of k if there exists an integer n such that x = n * k. 0 is <b>always</b> a multiple of k.

#### Example 1:
```
Input: nums = [23,2,4,6,7], k = 6
Output: true
Explanation: [2, 4] is a continuous subarray of size 2 whose elements sum up to 6.
```

#### Example 2:
```
Input: nums = [23,2,6,4,7], k = 6
Output: true
Explanation: [23, 2, 6, 4, 7] is an continuous subarray of size 5 whose elements sum up to 42.
42 is a multiple of 6 because 42 = 7 * 6 and 7 is an integer.
```

#### Example 3:
```
Input: nums = [23,2,6,4,7], k = 13
Output: false
```


### Constraints:
- 1 <= nums.length <= 10^5
- 0 <= nums[i] <= 10^9
- 0 <= sum(nums[i]) <= 2^31 - 1
- 1 <= k <= 2^31 - 1
