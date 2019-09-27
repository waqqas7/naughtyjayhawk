Conversations
2.78 GB (2%) of 115 GB used
Manage
Terms · Privacy · Program Policies
Last account activity: 0 minutes ago
Details

#include<stdio.h>
void toh(int n,char source,char tmp,char dest)
{
	if(n==1)
		printf("Move Disk from %c to %c\n",source,dest);
	else
	{
		toh(n-1,source,dest,tmp);
		printf("Move Disk from %c to %c\n",source,dest);
		toh(n-1,tmp,source,dest);
	}
}
void main()
{
	int n;
	printf("Enter a number");
	scanf("%d",&n);
	toh(n,'A','B','C');
}
