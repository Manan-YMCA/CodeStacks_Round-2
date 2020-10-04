# Problem in Parag's Relationship

Parag is a professional coder and Rudra is his classmate , Rudra loves Parag style and coding skills and they both are in relationship. They both are good programmers as well. They love programming together and they moved in together because if one of them gets stuck on some problems other can help and they love spending time with each other as well. But these days Parag is quite busy as some random girls are trying to approach him. So, Rudra has to tackle the problems alone. While practicing Rudra encounters an interesting problem which he was unable to solve efficiently. So, he asked Parag for help. Problem as stated by Rudra : Given an array of N elements, and Q queries need to be processed over this array. A query can be of any of the following three types:

Type 0: u v

Type 1: u v

Type 2: l r c

# Explanation:

for query Type 0: add v to the uth element of the array

for query Type 1: replace uth element of the array by v

for query Type 2: count the number of numbers which have c distinct digits between l to r, both inclusive.

Parag likes the problem very much and wants to solve it. But being super busy with girls, he has no time to help Rudra . Also, he can’t let Rudra feel helpless with any problem. So can you please help Rudra and save their relationship?

NOTE: Value of an array element never exceeds the range of 64bit integer (10^18).

# INPUT FORMAT:-

First line of the input contains a single integer N denoting the number of elements in the array. Next line of the input contains N space separated integers. Third line contains a single integer Q denoting the number of queries to be processed over the array. Next Q lines of input contain Q queries (one query per line).

# OUTPUT FORMAT:-

For each query of type 2 print the desired answer.

# CONSTRAINTS:-

1≤ Q,N ≤10^5

1≤ A[i] ≤10^15

1≤ v ≤10^15

1≤ u,l,r ≤N
