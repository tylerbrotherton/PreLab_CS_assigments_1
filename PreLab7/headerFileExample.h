#ifndef HEADEREXAMPLE_H_ //function guard
#define HEADEREXAMPLE_H_

int reset_day(void);
int record_purchase(int cents);
int compute_points(int cents);
int get_total_points(void);
int redeem_reward(void);

int points;//global variable, unfortantely
            // it would make a lot of logical
            //sense to have a global variable
            //but the instructor doesn't want 
            //it

            //the code will not compile without
            //it so it's still here

int bouns_points_day(int multiplier)

#endif //HEADEREXAMPLE_H_

//RESETS POINTS
int reset_day(void){
      points=0;//sorry, you get your point wiped
}

//RETURNS 1 IF SUCCESSFUL, -1 IF NOT SUCCESSFUL(which means negitive cents value)
//and 5 when it cents is 0 because thats undefined behavior
int record_purchase(int cents){
      if(cents < 0)
          return -1;
      else{ //else is unnessacry but gives helps stability/debuging help for mass deployment
          points+=cents
          return 1;
      }
      return 5;
}
int compute_points(int cents){
      return (cents / 100);
}
int get_total_points(void){
      return points;
}

//RETURNS 1 IF THE CUSTMORE HAS ENOUGH POINTS, 0 IF OTHERWISE AND SUBTRACTS
// THE POINTS_NEEDED FROM POINTS IF THE INTIAL OUTPUT IS 1
//returns 5 for error
//if points_needed is negitive, the function will hurt the firm, but can't be changed now.
int redeem_reward(int points_needed){
    if(points_needed <= points){
          points-= points_needed;
          return 1;
    }
     else
          return 0;
      return 5;
}

int bouns_points_day(int multiplier){
    points *= multiplier;
    return points;
}

