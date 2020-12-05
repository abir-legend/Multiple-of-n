# Multiple-of-n
I still don't know how git works  but here is a more fast way to calculate all possible multiples of a no **N** without any repetation but is sort of unsorted way
this was a fun challenge assigned by my friend //remind me to tag him here


<h1>how it works</h1>
in each loop we check wether n is a multiple of the input or not and then check if n < (input/n) *so it does not work for -tive numbers* but it doesnt go over 50% of numbers read below

lets say 50 is our input
we know 1 and 50 will always be multiple of 50
now 2 is a multiple of 50 now heres the faster part 50/2 or 25 is also a multiple
and 3,4 wont work but 5 it is another multiple and 50/5 10 is also another multiple
now after 6,7,8 and 9 we get 10 but here n > input/n so we would return and cut down a drastic amount of computation time (probably)
so we can sort it by storing it in a array as 1,50,2,25,5,10 and then read all even places left to right and odd places right to left

<h1>how efficient is this?</h1>
for 0 and input<0 it won't work 
but in a simpile and basic for loop check it will be linear curve as you will check 1 to input and time will linearly increase

**But here our time compleccity will be..**

heres a graph from 1 to 100 for no of itterations checked its 30 for 1000 and 46339 checks for int positive max i.e. 2147483647

![graph](https://i.imgur.com/WVSlsRl.png)
