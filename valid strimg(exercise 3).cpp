#include<stdio.h>
#include<ctype.h>
int is_delimiter(char ch)
{
	if(ch==' '||ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch==','||ch==';'||ch=='>'||ch=='<'||ch=='='||ch=='('||ch==')'||ch==')'||ch=='['||ch==']'||ch=='{'||ch=='}')
	return 1;
 return 0;
}
void main()
{
	int i,count=0,length=0,start=0;
	char A[100];
	printf("Enter string");
	scanf("%[^\n]s",A);
	for(i=0;A[i]!='\0';i++)
	{
		if(A[i]=="")
		{
			if(start==0)start=1;
			else
			{
			    start=0;count++;
		    }
		}
		if(is_delimiter(A[i])||isalpha(A[i])||isdigit(A[i])||start==1)
		{
			count++;
		}
		length++;
	}
	if(length==count)
	{
		printf("Valid string",A);
	}
	else printf("Invalid string",A);
}