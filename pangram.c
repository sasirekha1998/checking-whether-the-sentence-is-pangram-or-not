#include<stdio.h>
#include<string.h>
int main()
{
char str[30];
char str1[30]={0};
int count=0;
int i=0;
printf("enter the string \n");
gets(str);
for(i=0;i<str[i]!='\0';i++)
{
if(str[i]>=65&&str[i]<=90)
{
str[i]+=32;
}
str1[str[i]-'a']++;
}
for(i=0;i<26;i++)
{
if(str1[i]>=1)
{
count++;
}
else
{
printf("string is not pangram");
}
}
if(count>=26)
{
printf("string is pangram");
}
}

