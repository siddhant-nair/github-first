#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<math.h>

void main()
{
    system("CLS");
    
    int d1, d2, d3;
    int sum = 0;
    int a = 1;
    char ans[1];
    
    do
    {
        int sumold = sum;
        d1 = (rand()%6 + 1);
        d2 = (rand()%6 + 1);
        d3 = (rand()%6 + 1);
        sum = d1 + d2 + d3;

        if(a==1)
        {
            printf("Sum of the results of the die are %d \n", sum);
        }

        a++;
        if (a==2)
        {
            continue;
        }
        
        printf("Enter 'H' or 'L' \n");
        gets(ans);
        
        printf("Sum of the results of the die are %d \n", sum);

        if((ans[0]=='h' && sumold<sum) || (ans[0]=='l' && sumold>sum))
        {
            printf("GREAT JOB BOIIIIIIIIII \n");
        }else
        {
            printf("YOU LOST BOIIIIIIII \n");
        }
        
        }while(a>0);
    
    
}