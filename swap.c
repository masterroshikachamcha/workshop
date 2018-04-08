#include<stdio.h>

void add(int a,int b){

    int sum=a+b;
    printf("sum is %d\n",sum);





}

void sub(int c , int d){
    int diff= c-d;
    printf("Difference is %d\n",diff);

}






int main()
{

    int x = 22;
    int y = 78;

    printf("x is %d\n", x);
    printf("y is %d\n", y);

    //swapping code...
    int temp = x;
    x = y;

    y = temp;

    add(12,15);
    sub(23,12);


    printf("x is now %d\n", x);
    printf("y is now %d\n", y);

}