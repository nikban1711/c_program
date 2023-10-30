#include <stdio.h>
int main()
{
    int score;
    printf("enter your score (0-100)\n");
    scanf("%d",&score);
    if(score>100){
        printf("INVALID\n");
    }
    else{
    switch (score / 10)
    {
    case 10:
    printf("you got A+ grade and full marks\n");
    break;
        
    case 9:
        printf("you got a grade\n");
        break;
    case 8:
        printf("you got b grade\n");
        break;
    case 7:
        printf("you got c grade\n");
        break;
    case 6:
        printf("you got d grade\n");
        break;
    case 5:
        printf("you got e grade\n");
        break;
    case 4:
        printf("you got e- grade\n");
        break;
    default:
        printf("you failed\n");
        break;
    }
    }
    return 0;
}