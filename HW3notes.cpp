#include <iostream>

using namespace std;

int main(){
  float num = 2.5; //"float" IS A LARGER VARIABLE THAN AN INT ALLOWING IT TO HOLD DECIMAL POINTS
  string str = "Hello"; //"string" IS A VARIABLE THAT CAN HOLD SEQUENCES OF CHARACTERS
  string newString = str + " World!"; //STRINGS CAN ALSO BE ADDED JUST LIKE INTS OR FLOATS
  cout << newString << " and " << num << endl; //BOTH CAN ALSO BE PRINTED WITH "cout"

  return 0;
}
