/******************************************************************************

                            prakash pandey
                            cochin university 

*******************************************************************************/

#include <stdio.h>


// Write your code here
main()
{
	char s[20];
	int i,j,count=0,count1=0;
	char p[0]={"z"};
	for(i=0;s[i]!='\0';i++)
	{
		scanf("%s",s[i]);
	}
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==p[0])
		count++;
		else
		count1++;
	}
	if(count!=2*count1+1)
	printf("No");
	else
	printf("Yes");
}

