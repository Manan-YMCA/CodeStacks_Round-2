# Commander Ridham

You're given an array with n integers. The initial order of elements in the array is given. Elements in the array keep on shifting on Ridham's commands. If he says right 3 then all elements shift to the right with 3 positions and the rightmost elements which went out of the array go to the left of the array. Which changes with every query.

There are 2 types of queries -

Type 1 query example - a b c (a = type 1, b = left/right, c = position delta).
Type 2 query example - a b (a = type 2, b = index).
## INPUT FORMAT

The first-line contain 1 integer value T (total number of test cases).
Next line in every test case contains N (number of elements in the array).
Next line in every test case contains N spaced integers (elements of the array).
Next line in every test case contains Q (number of queries).
Next Q lines in every contain queries.

## OUTPUT FORMAT

For each query of type 2 print 1 integer
## CONSTRAINTS

1 <= N, Q <= 105
1 <= elements of array <= 105
