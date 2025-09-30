#include <stdio.h>

int main(void)
{
    int i=1;
    while(i<50){
        if(i%3==0) 
            printf(" Fizz");
        if(i%5==0) 
            printf(" Buzz");
        else if(i%3!=0) 
            printf(" %d", i);
        printf(",");
        i++;
    }
    if(50%5==0)
        printf(" Buzz");
    if(50%3==0)
            printf(" Fizz");
    return 0;
}
