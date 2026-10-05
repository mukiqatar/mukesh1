#include<stdio.h>
int fuction(int a[],int n){
    int i ;
    printf(" the stored elements:");
    for (i=0;i<n;i++)
     printf("%d\t ",a[i]);
}
int main(){
    int a[5],i;
    printf("enter the elements : ");
     for (i=0;i<5;i++)
      scanf("%d" ,&a[i]);
      fuction(a,5);
}