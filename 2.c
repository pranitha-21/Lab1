#include<stdio.h>
void main()
{
    int subject1,subject2,subject3,subject4,subject5,sum;
    printf("enter the values of a,b,c,d,e");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    printf("marks scored=%d",sum);
    float percentage;
    int totalmarks=500;
    int scored=sum;
    percentage=(scored/totalmarks)*100;
    printf("percentage=%f",percentage);
}
