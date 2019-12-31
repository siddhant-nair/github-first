#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<math.h>

void main()
{
    system("CLS");
    
    int d1, d2, d3;
    int sum;
    int a = 1;
    int b = 0;
    char ans[1];
    
    while(a==1)
    {
        int sumold = sum;
        for(int i=0; i<8; i++)
    {
        d1 = (rand()%6 + 1);
        d2 = (rand()%6 + 1);
        d3 = (rand()%6 + 1);
        sum = d1 + d2 + d3;

        printf("Sum of the results of the die are %d \n", sum);
        printf("Enter 'H' or 'L' \n");
        gets(ans);
        b++;
        break;
    }
        if (b==1)
        {
            continue;
        }

        if((ans=="h" && sumold<sum) || (ans=="l" && sumold>sum))
        {
            printf("GREAT JOB BOIIIIIIIIII \n");
        }else
        {
            printf("YOU LOST BOIIIIIIII \n");
        }
        }
    
    
}