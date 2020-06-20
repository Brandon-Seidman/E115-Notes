#include <iostream>
#include <cmath>  //<cmath> INCLUDES FUNCTIONS SUCH AS "pow(x,y)" THAT WILL BE USEFUL FOR THE CHECK+
                  //YOU WON'T NEED THIS FOR THE BASE ASSIGNMENT THOUGH

using namespace std;

int main(){
  int x; //THIS IS HOW YOU DECLARE AN INTEGER WHICH IS A NUMBER WITH NO DECIMAL POINTS
  int y = 1; //YOU CAN ALSO SET THE INT TO HAVE A VALUE RIGHT AWAY
  y = 2; //OR YOU CAN INPUT IT LATER LIKE THIS (THIS WILL REPLACE THE LAST VALUE ENTERED)

  cout << "Enter first number: ";
  cin >> x; //"cin" TAKES A USER INPUT FROM THE CONSOLE AND ENTERS IT INTO A VARIABLE
            //JUST USE ">> VAR_NAME" TO PICK WHAT YOU WANT TO "cin" INTO

  //THERE ARE 2 METHODS YOU CAN USE TO PRINT OUT THE MATH EXPRESSIONS

  //METHOD 1:
  cout << "Sum (Method 1): " << x+y << endl; //YOU CAN ADD THE NUMBERS RIGHT IN THE "cout" STATEMENT

  //METHOD 2:
  int z = x+y;  //YOU CAN ALSO CREATE ANOTHER VARIABLE THAT JUST EQUALS THE SUM
                //THIS IS USEFUL ESPECIALLY IF YOU WILL BE USING THE SUM FOR OTHER FUNCTIONS
  cout << "Sum (Method 2): " << z << endl;

  return 0;
}
