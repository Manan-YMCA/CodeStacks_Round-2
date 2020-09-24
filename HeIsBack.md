# He is Back
Look who’s back

It’s time for an another logic buster Baaghi 4. In this aliens take Tiger’s cow so he destroyes their planet and save his cow while making pose. Then in order to take their revenge the aliens decrales a war against him. But tiger is busy milking the cow(as it’s been a long time he did so) so he asks for your help you being Ramgadh’s best hacker cannot let your friend down.


The war will go on for N seconds and for each second you are given a string Str[i] where i is from 1 to N .His strength in the ith second will be equal to the value of the string Str[i].

Take corresponding value of a as 1,b as 2,c as 3.....y as 25,z as 26.
Value of a string s is defined as the summation of its corresponding value at each position.
E.g. s="abce",Value=1+2+3+5=11.
Let X[i] store the value of the string in the ith second,which is also his strength.

Attacking power for the ith second will be as follows :

bitwise xor of X[i] and X[i+1] for 1<=i<N

0 for i = N

So you have to maximize the algaebraic sum of his attacking power for all N seconds by rearranging some of the strings.

## Constraints :

1≤N≤15

1≤|Str[i]|≤1000

## Input

First line contains N .
Next line follows N integers,Str[i]..

## Output

Print the required answer as explained above.

## Note : The war has to be fought for exactly N seconds and each character is in lower case.
