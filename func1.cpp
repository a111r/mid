#include "middle.h"

void itc_num_print(int number)
{
    cout << number;
}

int itc_len_num(long long number)
{
    int k = 0;
    if(number < 0)
    {
        number=number * (-1);
    }
    if(number == 0)
    {
        return 1;
    }
    while(number > 0)
    {
        k = k + 1;
        number = number / 10;
    }
    return k;
}

int itc_sum_num(long long number)
{
    int sum = 0, ch = 0;
    if(number < 0)
    {
        number = number * (-1);
    }
    int len;
    len=itc_len_num(number);
    for(int i = 0;i < len;i++)
    {
        ch = number % 10;
        sum = sum + ch;
        number = number / 10;

    }
    return(sum);
}

long long itc_multi_num(long long number)
{
    if(number < 0)
    {
        number = number *(-1);
    }
    int pr=1 , ch=0 , len;
    len=itc_len_num(number);
    for(int i = 0;i < len;i++)
    {
        ch = number % 10;
        pr = pr * ch;
        number = number / 10;

    }
    return(pr);
}

int itc_max_num(long long number)
{
    if(number < 0)
        number *= (-1);
    int maxi;
    maxi=number%10;
    int ch;
    int len=itc_len_num(number);
    for(int i = 0;i < len;i++)
    {
        ch=number%10;
        if(ch>maxi)
        {
            maxi=ch;
        }
        number = number / 10;
    }
    return(maxi);
}
