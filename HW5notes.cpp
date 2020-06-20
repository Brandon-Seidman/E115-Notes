#include <iostream>

using namespace std;

int main(){
  int x;

  //FOR LOOPS ARE MADE UP OF 3 PARTS EACH SEPERATED BY SEMICOLONS
    //PART 1: THE ITERATOR DECLARATION. THIS IS WHERE YOU SET THE VARIABLE THIS LOOP WILL BE BASED OFF OF.
    //        FOR MOST IF NOT ALL CODE IN THIS CLASS IT WILL JUST BE "int i = 0" TO START.
    //PART 2: THE LOOPS END CONDITION. THIS IS HOW YOU SET WHAT DEFINES THE END OF THE LOOP. IN THE EXAMPLE
    //        BELOW IT IS JUST SET TO CONTINUE RUNNING UNTIL "i" IS NO LONGER LESS THAN 3.
    //PART 3: THE ITERATOR. IN THIS CASE WE JUST USE "i++" WHICH IS EQUIVELANT TO SAYING "i=i+1". EVERY TIME
    //        THE LOOP RUNS "i" WILL JUST INCREASE BY 1. "i--" WOULD SUBTRACT 1 EVERY TIME.
  for(int i = 0; i < 3; i++){
    x += i; //THIS IS WHERE THE CODE WILL RUN. "i" IS ACCESSIBLE FROM HERE WHICH IS VERY USEFUL FOR MANY PROGRAMS
            //"x += i" IS ANOTHER WAY OF SAYING "x = x + i"
  }

  bool tf = true; //A BOOL OR "boolean" IS A VARIABLE THAT CAN BE EITHER TRUE OR FALSE.
                  //YOU MAY ALSO SEE TRUE WRITTEN AS "1" AND FALSE WRITTEN AS "0"

  //WHILE LOOPS RUN UNTIL THE STATEMENT IN THE BRACKETS IS NO LONGER TRUE. THIS STATEMENT CAN SIMPLY BE A BOOL
  //VARIABLE AS SHOWN BELOW OR IR COULD BE SOMETHING MORE COMPLEX SUCH AS CHECKING IF AN INT IS LESS THAN A NUMBER.
  //BASICALLY THINK IF IT AS IF YOU CAN PUT IT IN AN "if" SATTEMENT YOU CAN PROBABLY USE IT HERE AS WELL.
  //IF YOU WANT THE LOOP TO RUN INFINITELY OR UNTIL THERE IS A "break;" STATEMENT IN THE CODE, MAKE IT "while(true)" OR "while(1)".
  while (tf){
    tf = false;//THIS LOOP WILL ONLY RUN ONCE BECAUSE IT IS IMMEDIATLEY SETTING "tf" TO FALSE ON THE FIRST LOOP.
  }

  //THIS HAS NOTHING TO DO WITH LOOPS BUT IS IMPORTANT FOR THE SECOND PART OF YOUR ASSIGNMENT.
  //IF YOU SET AN INTEGER EQUAL TO "INT_MIN" IT SETS IT WQUAL TO THE SMALLEST POSSIBLE VALUE AN INTERGER CAN BE. SAME FOR MAX EXCEPT LARGEST.
  int y = INT_MIN;
  int z = INT_MAX;

  return 0;
}