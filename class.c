#include<stdio.h>
#include<string.h>
int main(){
    char a[10];
    char b[10];
    int sum,i;
    printf("Ener the string :");
    scanf("%s",&a);
    // lengh of the string fuction
    printf("string lenght :\nlenght of given string  =%d \n",strlen(a));
    //string copy
    strcpy(b,a);
    printf("the string is =b %s",b);
    //string compare ;compare two string based on ascii value
    char c = 's';
    printf("c = %d" ,c);
    for(i =0;a[i]!='\0';i++)
        sum =sum +a[i];
        printf("sum of ASCII ;%d\n",sum);
        float x=3.5;
        printf("%f\n",ceil(x));
        printf("%f\n",floor(x));
//this is 

}
