#include<stdio.h>
int main()
{
    int hour,min;
    printf("Enter the time format \"HH:MM\"");
    scanf("%d:%d",&hour,&min);
    printf("\"%d hour and %d minute\"",hour,min);
    return 0;

}