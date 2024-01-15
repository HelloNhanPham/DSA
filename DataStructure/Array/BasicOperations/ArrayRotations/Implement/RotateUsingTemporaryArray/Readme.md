---------------------------------------------------------------------------------------------------
Here we are considering the left rotation. The movements will be just the opposite for right rotations.
---------------------------------------------------------------------------------------------------
Intuition:
- In this technique, create a temporary array of size n, where n is the length of the original array. If we rotate the array by d positions to right, the last d elements will be in the front.
- So, copy the last d elements of the original array into the first d positions of the temporary array and copy the remaining elements in the remaining positions. Finally, copy the elements of the temporary array back into the original array starting at position 0.
---------------------------------------------------------------------------------------------------
Illustration:
- Initialize an empty temp array, to store the final rotated state of the original array.
- Copy all elements from (n-d) to the end of the original to the front of the temp array.
- Now copy the rest elements from the front to the back of the temp[].
---------------------------------------------------------------------------------------------------