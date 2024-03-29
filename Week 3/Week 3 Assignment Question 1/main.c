#include <stdio.h>
void readInput(int *id, int *noOfHours, int *payRate);
void printOutputs(int id, double grossPay);
double computeSalary1(int noOfHours, int payRate);
void computeSalary2(int noOfHours, int payRate, double *grossPay);

int main()
{
     int id = -1, noOfHours, payRate;
     double grossPay;

     readInput(&id, &noOfHours, &payRate);
     while (id != -1) {
         printf("computeSalary1(): ");
         grossPay = computeSalary1(noOfHours, payRate);
         printOutputs(id, grossPay);
         printf("computeSalary2(): ");
         computeSalary2(noOfHours, payRate, &grossPay);
         printOutputs(id, grossPay);
         readInput(&id, &noOfHours, &payRate);
     }
     return 0;
}
void readInput(int *id, int *noOfHours, int *payRate)
{
    printf("Enter ID (-1 to end):\n");
    scanf("%d",id);
    if (*id != -1) {
        printf("Enter number of hours:\n");
        scanf("%d",noOfHours);
        printf("Enter hourly pay rate:\n");
        scanf("%d",payRate);
    }
}
void printOutputs(int id, double grossPay)
{
    printf("ID %d grossPay %.2lf\n",id,grossPay);
}
double computeSalary1(int noOfHours, int payRate)
{
    double gross_pay;
    if (noOfHours <= 160) {
        gross_pay = noOfHours*payRate;
    }
    else {
        gross_pay = (160*payRate) + ((noOfHours-160)*(payRate*1.5));
    }
    return gross_pay;
}
void computeSalary2(int noOfHours, int payRate, double *grossPay)
{
    if (noOfHours <= 160) {
        *grossPay = (double)noOfHours*payRate;
    }
    else {
        *grossPay = ((double)160*(double)payRate) + (((double)noOfHours-(double)160)*((double)payRate*1.5));
    }
}
