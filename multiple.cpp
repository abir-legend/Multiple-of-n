#include<stdio.h>
int n; 
void loop(int i)
{
	if(i==1)
	{
		printf("multiples of no 1 is:\n1");
		return ;
	}
	printf("multiples of no %d are: \n1\n%d\n",i,i);
	n=2; //starting from 2 since 
	do
	{
		if(i%n==0)
		{
			if(n == i/n)
			{
				printf("%d\n",n); //print if root of i is i is perfect square
				//here (read line 25)
				return ;
			}
			if(n<i/n)
			{
				printf("%d\n%d\n",n,i/n); //print both n and i/n so 2 multiples in 1 line by only checking 1
				//we can creat a global array of size 46339-1 and sort through  it use it here and in the line 19 
			}
		}
		else
		{
			//used to check efficiency
		}
		n++;
	}
	while(n <= (i/n)); //prevents the code from checking and printing repetation
	//printf("\n\n"); 
	//un comment the line above if useing loop function multiple times
	return;
}
main()
{
	int j=50; //j is set to 50 as default and works with any no within 1 to 2147483647 al though the upper limit is prime no so try -1 of it
	//for(j=1;j<2147483647;j++) //uncomment if you want it to loop
	{
		loop(j);
	}
}	
