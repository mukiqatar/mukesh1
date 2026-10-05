#include<stdio.h>
int main(){
    FILE *fp;
    char ch;
    fp = fopen("funarray.c","r");
    while(1)
    {
        ch =fgetc(fp);
        if (ch!=EOF)
            printf("%c",ch);
        else
            break;    
    }
}