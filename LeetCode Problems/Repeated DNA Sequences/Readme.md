<h1 align="center"><a href="https://www.linkedin.com/in/antriksh1305/"><img src="https://camo.githubusercontent.com/1eca2365da012b44816f2402011dc3ba78cefbe78228b22d60161a898d015b67/68747470733a2f2f6d69726f2e6d656469756d2e636f6d2f6d61782f313230302f312a4c75723972724a49547346526e7549595552596b53672e6a706567" alt="LeeCode Solutions" width="300"></a>
</h1>

<h3>Problem #187 <img width="50" alt="image" src="https://user-images.githubusercontent.com/100402656/214765733-eaaa4daa-f4f9-4224-a800-2e70f8b095f8.png">
</h3>

## Maximum Subarray

<h5>Time Complexity: <b>O(N)</b> <br>Space Complexity: <b>O(N)</b></h5>

The DNA sequence is composed of a series of nucleotides abbreviated as 'A', 'C', 'G', and 'T'.

For example, "ACGAATTCCG" is a DNA sequence.
When studying DNA, it is useful to identify repeated sequences within the DNA.

Given a string s that represents a DNA sequence, return all the 10-letter-long sequences (substrings) that occur more than once in a DNA molecule. You may return the answer in any order.

#### Example 1:
```
Input: s = "AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT"
Output: ["AAAAACCCCC","CCCCCAAAAA"]
```

#### Example 2:
```
Input: s = "AAAAAAAAAAAAA"
Output: ["AAAAAAAAAA"]
```


### Constraints:
- 1 <= s.length <= 10^5
- s[i] is either 'A', 'C', 'G', or 'T'.
