#include<stdio.h>
void main()
{
    int a;
    printf("\nenter a number(1-7):");
    scanf("%d",&a);

    switch (a)
    {
    case 1:
        printf("\nsunday");
        break;
    case 2:
        printf("\nmonday");
        break;
    case 3:
        printf("\ntuesday");
        break;
    case 4:
        printf("\nwednesday");
        break;
    case 5:
        printf("\nthursday");
        break;
    case 6:
        printf("\nfriday");
        break;
    case 7:
        printf("\nsaturday");
        break;
    default:
        printf("\nERROR wrong input(1-7)");
        break;
    }
}