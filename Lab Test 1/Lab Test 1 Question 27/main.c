#include <stdio.h>
void rReverseDigits(int num, int *result);
int main()
{
 int result=0, number;

 printf("Enter a number: \n");
 scanf("%d", &number);
 rReverseDigits(number, &result);
 printf("rReverseDigits(): %d\n", result);
 return 0;
}
void rReverseDigits(int num, int *result)
{
    int i;
    i = num%10;
    if (num<10) {
        *result += num;
    }
    else {
        *result += i;
        *result *= 10;
        rReverseDigits(num/10, result);
    }
}
