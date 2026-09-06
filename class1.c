#include<stdio.h>
struct A
{
    int x;
     int y;
    /* data */
};
union point 
{
    int x;
    double y;

};

int main(){
    struct  A a;
    union  point b;
    printf("size if structure A = %ld \n",sizeof(a));
    printf("sizeof  union B = %ld",sizeof(b));
    
    
   
}