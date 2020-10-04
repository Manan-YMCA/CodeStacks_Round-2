# Captain Cool
Everyone knows the Captain Cool, Mahendra Singh  Dhoni, and his cricket records are fabulous. One day, Parag tried to make a list of his (MSD) runs, he scored in each match he played.
Parag was getting calls from his girlfriends so he decided to determine whether the runs scored by MSD in a particular range are in AP (Arithmetic Progression) or not. Parag also makes mistakes in his list as you know he was thinking about his girlfriends. So He will also update the list frequently.

## Input
First-line contains ‘n’ total no of matches. The next line contains n space-separated integers the runs scored by MSD in these matches (F[i]). Then the next line contains an integer ‘Q’, the no of ranges, Parag wishes to determine about.
Then Q lines proceed to contain three A, B, C integers if, A is 1, then B and C describe the range (1 based ). if A is 0 then B represents the match number for which Parag wishes to update runs for (1 based) and C represents the value to which the runs of match B are changed to.

## Output
For each query of type 1, print ‘’1” if the range is in AP if the range is not in AP then 0. Print your answer per line for each query of type 1.

## Constraints
* 1<= n <=100000
* 1<= Q <=100000
* 0<= F[i] <= 10^9
* 0<= A <=1
* 1<= B <= n
* If , A=1 , 1<= C <= n , B <= C
* If, A=0 , 1<= C <= 20000


