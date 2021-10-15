#include "middle.h"

int itc_second_max_num(long long number)
{
    if(number < 0)
    {
        number = number * (-1);
    }
    if(itc_len_num(number)==1)
        {return(-1);}
    int maxi = 0 , maxim = 0 , b = 0;
    int len;
    len=itc_len_num(number);
    for(int i = 0;i < len;i++)
    {
        b = number % 10;
        if(b > maxi)
        {
            maxim = maxi;
            maxi = b;

        }
        else if(b > maxim)
        {
            maxim=b;
        }
        number = number / 10;
    }
    return maxim;
}

int itc_second_simple_max_num(long long number)
{
    if(number < 0)
    {
         number = number * (-1);
    }
    if(itc_len_num(number)==1)
        {return(-1);}
    int maxi = 0, maxim = 0 , b = 0;
    int len=itc_len_num(number);
    for(int i=0;i<len;i++)
    {
        b = number % 10;
        if(b > maxi)
        {
            maxim = maxi;
            maxi = b;
        }
        else if(b > maxim)
        {
            maxim = b;
        }
        number = number / 10;
    }
    if(maxi == maxim)
    {
        return(-1);
    }
    return maxim;
}

long long itc_bin_num(long long number)
{
    long long k, otv, b;
    k = 1;
    otv = 0;
    while(number > 0)
    {
        b = number % 2;
        otv = otv + b * k;
        number = number / 2;
        k = k * 10;
    }
    return(otv);
}


long long itc_oct_num(long long number)
{
    int bin = 0;
    int k = 0;
    while(number > 0){
        bin += number % 8  * itc_pow(10, k);
        number /= 8;
        k++;
    }
    return bin;
}

int itc_rev_bin_num(long long number)
{
    int k, b, otv;
    k = 1;
    otv = 0;
    int len;
    len=itc_len_num(number);
    for(int i = 0;i < len;i++)
    {
        b = number % 10;
        otv = otv + b * k;
        k = k * 2;
        number = number / 10;
    }
    return otv;
}
