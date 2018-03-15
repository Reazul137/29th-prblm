#include<stdio.h>
int main()
{
    int j, number[5], total=0;

    printf("Input the first number : ");
    scanf("%d",&number[0]);
    printf("Input the second number : ");
    scanf("%d",&number[1]);
    printf("Input the third number : ");
    scanf("%d",&number[2]);
    printf("Input the fourth number : ");
    scanf("%d",&number[3]);
    printf("Input the fifth number : ");
    scanf("%d",&number[4]);

    for(j=0; j<5; j++)
    {
        if((number[j]%2)!=0)
        {
            total += number[j];
        }
    }
    printf("\n Sum of all odd values : %d", total);


    return 0;
}
