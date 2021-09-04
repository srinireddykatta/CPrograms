#include <stdio.h>
#include <math.h>

int bin_to_dec(long binarynum);
int power(int x, int n);

int main()
{
    long binarynum;
    int result;
    printf("Enter a binary number: ");
    scanf("%ld", &binarynum);
    if(binarynum <0)
    result = -1;
    else
    result = bin_to_dec(binarynum);
    printf("Equivalent decimal number is: %d", result);
    return 0;
}


int bin_to_dec(long binarynum)
{
    int decimalnum = 0, temp = 0, remainder;
    while (binarynum!=0)
    {
        remainder = binarynum % 10;
        binarynum = binarynum / 10;
        decimalnum = decimalnum + remainder*power(2,temp);
        temp++;
    }
    return decimalnum;
}

int power(int x, int y) {
 return pow(x,y);
}