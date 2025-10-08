#include <stdio.h>

#include "ExampleHeaderFile.h"

static int total_points_store(int op, int value);


int main(){
    for(int i=0;i<2;i++){
        int num=0;
        printf("Enter purchase amount in cents: ");  
        scanf(" %d", &num);

        total_points_store(2,(num/100));//stores user input in points store, and applies the safety gaurd
                                // in case the user mis-inputs a negitive sign.

        printf("Points earned : %d", (num/100) ); 
        printf("\nTotal Points : %d\n\n", total_points_store(0,0)); 
    }

    int input=0;    
    if(total_points_store(0,0)>10){

        printf("\nRedeem 10 points for a free drink?");
        scanf(" %d",  &input);
        if(1==input){//code like yoda, to prevent single = problems
                  total_points_store(2,-10);
                  printf("Reward redeemed! remaining points: %d", total_points_store(0,0));
        }
        else if(0==input)
            printf("Reward not redeemed! remaining points: %d", total_points_store(0,0));
        else
             printf("Error input unrecoginzed: Reward not redeemed! remaining points: %d", total_points_store(0,0));
     }

     printf("\n\nBonus day! multiplier = ");
     scanf(" %d",  &input);
     total_points_store(3,input);
     printf("Total after bonus %d",total_points_store(0,0));

}


//this is verbatium Deniz's code, which was a requirement of this assigment
static int total_points_store(int op, int value){
   static int total = 0; // persists between function calls
   if (op == 0)
      return total;
   else if (op == 1)
      total = 0;
   else if (op == 2)
      total += value;
   else if (op == 3)
      total *= value;
   if (total < 0) total = 0; // safety guard
      return total;

}
