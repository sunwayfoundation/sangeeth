#include<stdio.h>
main()
{
char *p;
p=(char*)malloc(10000);
scanf("%[^\n]s",p);
int i,n;
n=strlen(p);
for(i=n-1;i>=0;i--)
printf("%c",p[i]);
free(p);
}
