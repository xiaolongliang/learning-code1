#include <stdio.h>
#include <stdlib.h>
int main()
{
int i;int j;
double a[100000],b[100000],c[100000];


for(i=0;i<100000;i++)
a[i]=rand()%1000000/1000.0; //产生各个随机数 

for(j=0;j<100000;j++)
b[j]=rand()%1000000/1000.0; //产生各个随机数 　
#pragma acc parallel
for(i=0;i<100000;i++)
{
c[i] = a[i]*b[i];
}
}
