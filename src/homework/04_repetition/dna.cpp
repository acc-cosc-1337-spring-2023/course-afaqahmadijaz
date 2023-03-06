#include "dna.h"

int factorial(int num)  {
    int result = 1;
    while (num > 0) {
        result *= num;
        num--;
    }
    return result;
}

int gcd(int num1, int num2) {
    while (num1 != num2)    {
        if (num1 < num2)    {
            int temp = num1;
            num1 = num2;
            num2 = temp;
        }
        num1 -= num2;
    }
    return num1;
}