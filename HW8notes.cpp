//BRANDON SEIDMAN - 2020
//E115

#include <iostream>

using namespace std;

//THESE NOTES ONLY GO OVER USE OF THE "mod" OPERATOR WHICH WILL BE IMPORTANT FOR THIS ASSIGNMENT
//EVERYTHING ELSE YOU NEED FOR THIS ASSIGNMENT CAN BE FOUND IN THE HW7 NOTES

/*
MOD OPERATOR: %
THE MOD OPERATOR IS FOR TESTING IF A NUMBER IS DIVISIBLE BY ANOTHER NUMBER
ALL IT DOES IS RETURN THE REMAINDER ATER DIVIDING 2 NUMBERS
  -EXAMPLE: 8 % 2 == 0, 3 % 2 == 1, 2 % 100 == 2
IF THE RESULT IS 0 WE KNOW THAT THE NUMBER IS DIVISIBLE EVENLY
BELOW IS CODE TO SHOW HOW TO FIND IF A NUMBER IS EVEN OR ODD AS AN EXAMPLE OF ITS USE
*/

int main(){
  int num;
  cout << "Enter a number." << endl;
  cin >> num;

  if(num % 2 == 0){
    cout << "Your number is even" << endl;
  }
  else if (num % 2 != 0){
    cout << "Your number is odd" << endl;
  }

  return 0;
}
