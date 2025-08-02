#include <stdio.h>

// Method - 1 :-

void update(int *a,int *b) {
    // Complete this function
    int temp = *a;
    *a = *a + *b;
    *b = temp - *b;
    
    if(*b < 0)
    {
        *b = -(*b);
    }  
}

// Method - 2 :-

// void update(int *a, int *b) {
//     int sum = *a + *b;
//     int diff = abs(*a - *b);
//     *a = sum;
//     *b = diff;
// }

// Method - 3 :-

// void update(int *a, int *b) {
//     *a = *a + *b;
//     *b = *a - 2 * (*b);
//     if(*b < 0)
//         *b = -(*b);
// }

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}