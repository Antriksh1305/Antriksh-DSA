<h1 align="center"><a href="https://www.linkedin.com/in/antriksh1305/"><img src="https://camo.githubusercontent.com/1eca2365da012b44816f2402011dc3ba78cefbe78228b22d60161a898d015b67/68747470733a2f2f6d69726f2e6d656469756d2e636f6d2f6d61782f313230302f312a4c75723972724a49547346526e7549595552596b53672e6a706567" alt="LeeCode Solutions" width="300"></a>
</h1>

<h3>Problem #2306 <img width="50" alt="image" src="https://user-images.githubusercontent.com/100402656/215006615-924bd0d5-e47e-4070-b7a5-57a5fed6be0d.png">
</h3>

## Naming a Company

<h5>Time Complexity: <b>O(N*26^2)</b> <br>Space Complexity: <b>O(N*26)</b></h5>

You are given an array of strings ```ideas``` that represents a list of names to be used in the process of naming a company. The process of naming a company is as follows:

Choose 2 <b>distinct</b> names from ```ideas```, call them ```ideaA``` and ```ideaB```.
Swap the first letters of ```ideaA``` and ```ideaB``` with each other.
If <b>both</b> of the new names are not found in the original ```ideas```, then the name ```ideaA ideaB``` (the <b>concatenation</b> of ```ideaA``` and ```ideaB```, separated by a space) is a valid company name.
Otherwise, it is not a valid name.
Return the <i>number of <b>distinct</b> valid names for the company.</i>

#### Example 1:
```
Input: ideas = ["coffee","donuts","time","toffee"]
Output: 6
Explanation: The following selections are valid:
- ("coffee", "donuts"): The company name created is "doffee conuts".
- ("donuts", "coffee"): The company name created is "conuts doffee".
- ("donuts", "time"): The company name created is "tonuts dime".
- ("donuts", "toffee"): The company name created is "tonuts doffee".
- ("time", "donuts"): The company name created is "dime tonuts".
- ("toffee", "donuts"): The company name created is "doffee tonuts".
Therefore, there are a total of 6 distinct company names.

The following are some examples of invalid selections:
- ("coffee", "time"): The name "toffee" formed after swapping already exists in the original array.
- ("time", "toffee"): Both names are still the same after swapping and exist in the original array.
- ("coffee", "toffee"): Both names formed after swapping already exist in the original array.
```

#### Example 2:
```
Input: ideas = ["lack","back"]
Output: 0
Explanation: There are no valid selections. Therefore, 0 is returned.
```


### Constraints:
- 2 <= ideas.length <= 5 * 10^4
- 1 <= ideas[i].length <= 10
- ideas[i] consists of lowercase English letters.
- All the strings in ideas are unique.
