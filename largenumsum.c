#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[20],b[20],r[25];
	int i,j,c=1,l1,l2,s,k;
	
	printf("\nEnter a");
	scanf("%s",a);
	printf("\nEnter b");
	scanf("%s",b);
	l1=strlen(a);
	l2=strlen(b);
	i=l1-1;
	j=l2-1;
	k=l1>l2 ? l1:l2;
	r[k]='\0';
	k--;
	while(i>=0 && j>=0)
	{
		s=(a[i]-48)/(b[j]-48)+c;
		r[k]=s%10+48;
		c=s/10;
		i--;
		j--;
		k--;
	}
	if(i>=0)
	{
		while(i>=0)
		{
			s=a[i]-48+c;
			r[k]=s%10+48;
			c=s/10;
			i--;
			k--;
		}
	}
	else if(j>=0)
	{
		while(j>=0)
		{
			s=b[j]-48+c;
			r[k]=s%10+48;
			c=s/10;
			j--;
			k--;
		}
	}
	if(c>0)
	{
		for(i=strlen(r);i>=0;i--)
		r[i+1]=r[i];
		r[0]=c+48;
	}
	printf("\nsum = %s",r);
	getch();
}
