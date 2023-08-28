#include<stdio.h>
#include<conio.h>
int main()
{
    float num;
    int tempCheck, roundNum, tempNum;
    printf("Enter the number: ");
    scanf("%f", &num);
    if(num>0)
    {
        tempNum = num*10;
        tempCheck = tempNum%10;
        if(tempCheck>=5)
        {
            roundNum = num;
            roundNum++;
        }
        else
        {
            roundNum = num;
        }
        printf("\nWhole number after rounding off the given real number = %d", roundNum);
    }
    else if(num<0)
    {
        num = -(num);
        tempNum = num*10;
        tempCheck = tempNum%10;
        if(tempCheck>=5)
        {
            roundNum = num;
            roundNum--;
        }
        else
        {
            roundNum = num;
        }
        printf("\nWhole number after rounding off the given real number = -%d", roundNum);
    }
    else
    {
        printf("\nThe given number is 0");
    }
    getch();
    return 0;
}
