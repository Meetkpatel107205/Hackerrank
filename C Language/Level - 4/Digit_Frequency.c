#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    char str[1000];
    char digits[10] = "0123456789";
    
    int count[10] = {0};
    
    scanf("%[^\n]", str);
    
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            count[str[i] - '0']++;
        }
    }
    
    for(int i = 0; i < 10; i++)
    {
        printf("%d ", count[i]);
    }
     
    return 0;
}
