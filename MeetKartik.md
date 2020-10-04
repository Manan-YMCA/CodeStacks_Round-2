# Meet Kartik

Kartik is a B.Tech student who has two girlfriends Prashansa and Shirley and he wants to date both of them. He can date his girlfriends only when they are available and he will not  date one girl on any two consecutive days as he gets bored.
He got himself a vacation for N days where ith  day is denoted by an integer A[i]  ( 1 <= i <= N ) , representing the schedule of Prasansha and Shirley of ith day, as follows :

* A[i] = 0 if Prashansa and Shirley both are busy.
* A[i] = 1 if Prashansa is available but Shirley is busy.
* A[i] = 2 if Prashansa is busy but Shirley is available.
* A[i] = 3 if Prashansa and Shirley both are available.

Since Kartik can't date both of his girlfriends together on the same day, each day he can do one of the following 3 things :
i) Take Prashansa out on a date, if she's available on that day.
ii) Take Shirley out on a date, if she's available on that day.
iii) Spend all day alone at home.

Kartik wants to know the number of days that he would have to spend alone during his vacation if he plans all dates with his girlfriends optimally. Help Kartik!

# Input :
* First line of input contains a single integer T  ( 1 <= T <= 3 ), denoting number of test cases.
* Second line of each test case contains a single integer N ( 1 <= N <= 100 ), denoting the number of days in the vacation.
* Third line of each test case conatins N integers A[i] ( 0 <= A[i] <= 3 ), denoting the schedule of the girls of the ith day.
    
# Output :
* Print the minimum number of days that kartik would have to spend alone if he plans his dates optimally, for each test case in a new line.

   
