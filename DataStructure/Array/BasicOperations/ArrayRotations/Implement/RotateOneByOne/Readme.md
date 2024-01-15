Here we are considering left rotation. The movements will be just the opposite for right rotation.
---------------------------------------------------------------------------------------------------
Intuition:
At each iteration, shift the elements by one position to the left circularly (i.e., first element becomes the last).
Perform this operation d times to rotate the elements to the left by d position.
---------------------------------------------------------------------------------------------------
Illustration:
* Let us take arr[] = [1, 2, 3, 4, 5, 6], d = 2.
- First Step:
        => Rotate to left by one position.
        => arr[] = {2, 3, 4, 5, 6, 1}
- Second Step:
        => Rotate again to left by one position
        => arr[] = {3, 4, 5, 6, 1, 2}
Rotation is done 2 times.
So the array becomes arr[] = {3, 4, 5, 6, 1, 2}
---------------------------------------------------------------------------------------------------