# Toys Box

There are N boxes in a row. Each box needs to be filled with some toys. For the ith box( 1 <= i <= N) maximum toys it can hold is A[i] and each box should contain at least one toy.
You have to fill these boxes in such a way that the opulence of the arrangement is maximized.

Opulence of arrangment : - sum of absolute values of two adjacent element i.e for all i ( 2 <= i <= n) sum = sum + abs( a[i] - a[i-1] ).

You have to print the maximum opulence.

## Input Format
The first line consists of an integer T denoting the number of test cases.

The following T lines consist of an integer N denoting the number of boxes.

The next line contains N space-separated integers where A[i] denotes the maximum number of toys ith box can hold.

## Output Format

Print the maximum opulence.

## Constraints

1 <=  T , N <= 5*105.

1 <= A[i] <= 109

The Sum of N over all test cases does not exceed 106.
