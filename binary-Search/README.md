Binary search is a searching algorithm used to find the position of a target value within a sorted array. It works by repeatedly dividing the array in half until the target value is found or the search space is exhausted.

Here are the steps to perform a binary search:

1- Set two pointers, left and right, to the first and last indices of the array, respectively.

2- Calculate the middle index by averaging the values of left and right, rounded down to the nearest integer. This will be the index of the middle element of the current search space.

3- Compare the target value with the middle element of the array.

4- If the target value matches the middle element, return the index of the middle element.

5- If the target value is less than the middle element, discard the right half of the array by setting right to be the index immediately to the left of the middle element.

6- If the target value is greater than the middle element, discard the left half of the array by setting left to be the index immediately to the right of the middle element.

7- Repeat steps 2-6 until the target value is found or the search space is exhausted (i.e., left is greater than right).
If the target value is not found in the array, the algorithm will return -1 to indicate that the value was not present.

Binary search has a time complexity of $O(log n)$, where n is the size of the array. This is because the search space is halved with each iteration, resulting in a logarithmic time complexity.
