#include<stdio.h>

void sumavg(int a, int b, int *sum, float *avg);

int main (){
    int a, b, sum;
    float avg;
    a = 2;
    b = 3;
    sumavg(a, b, &sum, &avg);
    printf("The value of sum is %d\n",sum);
    printf("The value of avg is %f\n",avg);
    return 0;
}

void sumavg(int a, int b, int *sum, float *avg){
    *sum = a+b;
    *avg = (float)(*sum)/2;
}