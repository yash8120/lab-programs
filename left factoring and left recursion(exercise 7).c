#include<stdio.h>
#include<string.h>
void left_factoring();
void left_recursion();
int main()
{
	left_factoring();
	left_recursion();
	return 0;
}
void left_factoring()
{
	char gram[15],s1[10],s2[10],n[20],n1[20],n2[20];
	int k=0,i,j,l;
	printf("aaaaa\n\n\n");
	printf("Enter production for eliminating left factoring:A->");
	gets(gram);
	for(i=0;i<strlen(gram);i++)
	{
		if(gram[i]!='l')
		 s1[i]=gram[i];
		else 
		{
			s1[i]='\0';
			i++;
			break;
		}
	}
	for(j=i;j<strlen(gram);j++)
	{
		s2[k]=gram[j];
		k++;
	}
	i=0;j=0;
	while(i<strlen(s1)&&j<strlen(s2))
	{
		if(s1[i]==s2[j])
		{
			n[i]=s1[i];
		}
		else 
		{
			n[i]='X';
			break;
		}
		i++;j++;
	}
	k=l=0;
	while(j<strlen(s2))
	{
		n2[k]=s1[i];
		l++;
		j++;
	}
	n2[j]=='\0';
	printf("\nA->%s",n);
	printf("\nX->%s|%s",n1,n2);
}
void left_recursion()
{
	char g[20],production[10],s1[10]="";
	char s[10]="";
	int i;
	printf("\nEnter production like E->E-A for left recursion :");
	scanf("%s",production);
	int index=3;
	if(production[0]!=production[index])
	{
		printf("\nNo left recursion");
	}
	else 
	{
		i=0;
		index++;
		while(production[index]!='l')
		{
			s[i]=production[index];
			index++;
			i++;
		}
		index++;
		i=0;
		while(production[index]!='\0')
		{
			s1[i]=production[index];
			index++;
			i++;
		}
		printf("%c-> %s%c",production[0],s1,production[0]);
		printf("\n%c' ->%s%c'|#",production[0],s,production[0]);
	}
}