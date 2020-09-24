# Cemented String
Umesh is a construction worker who does mathematics for increasing his efficiency. He is working on a site and has N buckets of cement-lined up with different characters ( a - z ) marked upon them. He has a strict command from senior that he cannot change the order of the buckets.

Before starting his work, he has been given a string S of length N in which the character at position i ( 1 <= i <= N ) gives us the mark on the ith bucket.

He can only carry one bucket at a time and bring it back to the base site. In each round, he has a criterion on which bucket to pick up.

He will take the bucket with the smallest character marked upon it ( a < b < z ) and if there are multiple buckets with the smallest character, then he will take the one closest to the base.

The cost of picking up a bucket B is the number of buckets he passes through while walking from the site to get B . (Bucket which he picks is also included)
In every round, the cost accumulates. Find the final cost incurred by Umesh while completing his job.



## Input Format
The first line consists of an integer T denoting the number of test cases.

The following T lines consist of an integer N denoting the number of baskets.

The next line contains a string S of length N where S[i] ( 1 <= i <= N ) denotes the mark on the ith bucket.

## Output Format

Print the accumulation cost for each test case, separated by a new line.

## Constraints

1 <=  T , N <= 105.

The Sum of N over all test cases does not exceed 107.

