#include<stdio.h>
int main()
{ 
    int day, month,year;
    printf(" Enter the date \"DD/MM/YYYY\"");
    scanf("%d/%d/%d",&day,&month,&year);
    printf("\"Day-%d , month-%d , year-%d\"",day,month,year);
    return 0;
}