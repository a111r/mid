#include "middle.h"

int itc_min_num(long long number)
{
    if(number < 0)
    {
        number = number * (-1);
    }
    long long mini;
    mini = number % 10;
    long long ch;
    int len;
    len=itc_len_num(number);
    for(int i = 0;i < len;i++)
    {
        ch = number % 10;
        if(ch < mini)
        {
            mini = ch;
        }
        number = number / 10;
    }
    return(int(mini));
}

int itc_rev_num(long long number)
{
    if(number == 0)
    {
        return 1;
    }
    int k = number % 10;
    while( k == 0)
    {
        number = number / 10;
        k = number % 10;

    }
    return(itc_len_num(number));
}

int itc_null_count(long long number)
{
    int k = 0, b, len;
    len=itc_len_num(number);
    for(int i = 0; i < len;i++)
    {
        b = number % 10;
        if(b == 0){
            k = k + 1;
        }
        number = number/10;
    }
    return k;
}

bool itc_mirror_num(long long number)
{
    bool otv=false;
    int b, k=0;
    long long p;
    p = number;
    int len;
    len=itc_len_num(number);
    for(int i = 0; i < len;i++)
    {
        b = number % 10;
        k = k * 10 + b;
        number = number / 10;
    }
    if(k == p)
    {
        otv=true;
    }
    return otv;
}
int itc_mirror_count(long long number)
{
    int k = 0;
    for(long long i = 1;i < number + 1;i++)
    {
        if(itc_mirror_num(i) == true)
        {
            k++;
        }
    }
    return k;
}
