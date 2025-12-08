#include<stdio.h>
void reverse_string(char *s,int len)
{
 int i=0;
 int j=len-1;
 while(i<j)
 {
	 char t=s[i];
	 s[i]=s[j];
	 s[j]=t;
	 i++;
	 j--;
  }
	printf("The reversed string is %s\n",s);
}
int main()
{
	char s[50];
	int l;
	printf("enter a string \n");
	scanf(" %s",s);
	for(l=0;s[l];l++);
	reverse_string(s,l);
}
