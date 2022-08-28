
## 11. Container With Most Water






### Medium

You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the containe


## Example 1 :

![App Screenshot](https://camo.githubusercontent.com/801d4b8f840ce2e3bfa1e2ca19d7ffc7ac8fe78c8a115dab8c7301311332e180/68747470733a2f2f73332d6c632d75706c6f61642e73332e616d617a6f6e6177732e636f6d2f75706c6f6164732f323031382f30372f31372f7175657374696f6e5f31312e6a7067)





```
Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.
```

### Example 2:

```
Input: height = [1,1]
Output: 1
```

### Constraints:




- n == height.length

- 2 <= n <= 105

- 0 <= height[i] <= 104

