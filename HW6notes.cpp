//BRANDON SEIDMAN - 2020
//E115

#include <iostream>

using namespace std;

int main(){
  int x = 1;
  //THIS PROJECT CAN BE DONE 1 OF 2 WAYS: IF-ELSE STATEMENTS OR SWITCH STATEMENTS

  /* IF ELSE */
  if(x == 1){ //IF STATEMENTS CHECK FOR CERTAIN CONDITIONS AND RUN CODE IF THEY ARE MET
    cout << "x is 1" << endl;
  }
  else if(x == 2){ //IF THE STATEMENT IS NOT MET IN THE IF STATEMENT IT WILL CHECK ANY ELSE IF STATEMENTS
    cout << "x is 2" << endl;
  }
  else if(x == 3){
    cout << "x is 3" << endl;
  }
  else{ //IF NONE OF THE CONDITIONS ARE MET THE ELSE CODE WILL RUN NO MATTER WHAT
    cout << "x is not 1, 2, or 3" << endl;
  }

  /*
  A COUPLE OF INPORTANT POINTS ON IF ELSE STATEMENTS:
  -WE USE == INSTEAD OF = BECAUSE == CHECKS IF SOMETHING IS = WHILE = SETS SOMETHING EQUAL TO
    -IF YOU ACCIDENTLY USE = INSTEAD THE STATEMENT WILL ALWAYS BE TRUE
  -GREATER THAN: >   LESS THAN: <
  -GREATER THAN OR EQUAL TO: >=   LESS THAN OR EQUAL TO: <=
  -NOT EQUAL: !=
  -IF YOU NEED 2 CONDITIONS TO BE MET YOU CAN PUT && (AND) BETWEEN THEM
    -EX: if(x > 1 && x < 2)
  -IF THE CODE IN AN IF STATEMENT IS ONLY 1 LINE YOU DO NOT NEED {}
    -THIS LINE OF CODE AFTER YOUR 1 LINE WILL RUN NO MATTER WHAT!!!!!
    -EX: if(y == x)
           cout << "equal" << endl;
  */

  /* SWITCH */
  switch(x){ //IN THE () OF THE SWITCH STATEMENT YOU PUT THE VARIABLE IT SHOULD CHECK
    case 1: cout << "x is 1" << endl; //IT WILL RUN THE CASE THE VARIABLE MEETS LIKE 1 IN THIS CASE
    break; //AFTER EACH STATEMENT YOU NEED A BREAK SO IT EXITS THE SWITCH

    case 2 ... 4: cout << "x is between 2 and 4" << endl; //YOU CAN HAVE SWITCH CASES THAT USE RANGES
    break;                                                //YOU MUST HAVE SPACES BETWEEN THE "..."

    default: cout << "x is not 1, 2, or 3" << endl; //DEFAULT SERVES THE SAME PURPOSE AS AN ELSE STATEMENT
  }

  return 0;
}
