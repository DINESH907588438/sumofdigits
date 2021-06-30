#include <stdio.h>

int main()
{
    int num=0;
    printf("Enter any number: ");
    scanf("%d",&num);
    int result=sumofdigits(num);
    printf("Sum of digits in %d is %d\n",num,result);
    return 0;
}
int sumofdigits(int n)
{
    if (n== 0)
        return 0;
    return(n % 10+ sumofdigits(n / 10));
}
