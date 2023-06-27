#include<stdio.h>
#include<string.h>

int main(){
 char* s = NULL;
 char* p=NULL;
 //char str[100];
 s=(char*)malloc(10*sizeof(char));
 p=(char*)malloc(10*sizeof(char));
 gets(s);
 int x=strlen(s);
 printf("%d\n",x);
 p=s;
 for(int i=0;i<x;i++)
    printf("%c ",*(p+i));
 printf(s);
 free(s);
}

