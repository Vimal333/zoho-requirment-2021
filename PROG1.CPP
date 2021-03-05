#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>



void print(char *str,int st,int en)
{
while(st<en) { cout<<str[st++]; } }

void main()
{
clrscr();
char str[30];
cout<<"Enter the string : ";
cin>>str;
int n = strlen(str);
int mid = n/2;

// Print middle to end...
int i=mid;
while(str[i]!='\0')
{
print(str, mid,i+1);
i++;
cout<<"\n";
}

// pring middle to end and first end end...
for(i=0;i<mid;i++){
print(str,mid,n);
print(str,0,i+1);
cout<<"\n";
}

getch();
}