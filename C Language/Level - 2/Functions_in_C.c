#include <stdio.h>
/*
Add int max_of_four(int a, int b, int c, int d) here.
*/

// Method - 1 :-

int max_of_four(int a, int b, int c, int d)
{
    if(a > b)
    {
        if(a > c)
        {
            if(a > d)
            {
                return a;
            }
            else
            {
                return d;
            }
        }
        else if(c > d)
        {
            return c;
        }
        else
        {
            return d;
        }
    }
    else
    {
        if(b > c)
        {
            if(b > d)
            {
                return b;
            }
            else
            {
                return d;
            }
        }
        else if(c > d)
        {
            return c;
        }
        else
        {
            return d;
        }
    }
}

// Method - 2 :-

// int max_of_four(int a, int b, int c, int d) {
//     int max = a;

//     if(b > max) max = b;
//     if(c > max) max = c;
//     if(d > max) max = d;

//     return max;
// }

// Method - 3 :-

// int max_of_four(int a, int b, int c, int d) {
//     int max_ab = (a > b) ? a : b;
//     int max_cd = (c > d) ? c : d;
//     return (max_ab > max_cd) ? max_ab : max_cd;
// }

// Method - 4 :-

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}