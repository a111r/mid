#include "middle.h"

int itc_rev_oct_num(long long number)
{
    int dec = 0;
    int step = 0;
    while(number > 0){
        dec += number % 10 * itc_pow(8, step);
        number /= 10;
        step++;
    }
    return dec;
}

int itc_covert_num(long long number, int ss)
{
    if(ss == 10)
    return number;
    int cov = 0;
    int k = 0;
    while(number > 0){
        cov += number % ss * itc_pow(10, k);
        number /= ss;
        k++;
    }
    return cov;
}

int itc_rev_covert_num(long long number, int ss)
{
    if(ss == 10) return number;
    int sys = 0;
    int step = 0;
    while(number > 0){
        sys += number % 10 * itc_pow(ss, step);
        number /= 10;
        step++;
    }
    return sys;
}

int itc_pow(int n, int i)
{
    int result = 1;
    int chislo = n;
    while (result < i)
    {
        n = n * chislo;
        result = result + 1;
    }
    return n;
}
