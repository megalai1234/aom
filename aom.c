#include <stdio.h>
#include<conio.h>
void main()
{
    int number, oNumber, remainder, result = 0;
    printf("Enter a three digit integer: ");
    scanf("%d", &number);
    oNumber = number;
    while (oNumber != 0)
    {
        remainder = oNumber%10;
        result += remainder*remainder*remainder;
        originalNumber /= 10;
    }

    if(result == number)
        printf("%d is an Armstrong number.",number);
    else
        printf("%d is not an Armstrong number.",number);

    getch();
}
