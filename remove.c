#include <stdio.h>

int main()
{
    int n;                            //local variable to store the integer
    scanf("%d", &n);                  //scanning the integer from the user
    int s[34] = {0};                  //initialising an array that stores the digits of the integer if it is not repeated
    int g[10] = {0};                  //this stores weather the digit traversing is repeating or not
    int i = 0, count = 0, counte = 0; //i stores the idx traversing, count stores the total digits, counte stores the total number of non repeating digits

    while (n != 0) //loop continues till n becomes 0
    {
        if (g[n % 10] == 0) //checking for non repeating digits
        {
            s[i] = n % 10; //non repeating digits are stored in array s
            g[n % 10]++;   //checked the frequency table so thet it is not encountered twice
            i++;           //idx of s increased
            counte++;      //counte variable increased
        }
        count++; //total count of digits increased
        n /= 10; //n is divided by 10 to check the next digits
    }

    for (int j = 0; j < count; j++) //loop in range 0 to number of digits in n(as were earlier before becoming 0)
    {
        n = n * 10 + s[counte - j - 1];
    }

    printf("%d", n);
    return 0;
}