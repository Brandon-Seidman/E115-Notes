#include <iostream>

using namespace std;

//FOR THIS ASSIGNMENT WE WILL BE USING CLASSES WHICH ARE VERIABLES THAT CONTAIN OTHER VARIABLES AND FUNCTIONS
//CLASSES CAN GET VERY CONFUSING SO THIS IS ONE I HIGHLY RECCOMEND ASKING QUESITONS IF YOU DON'T UNDERSTAND ANYTHING
class classExample{
  private: //PRIVATE MEMBERS OF CLASSES ARE VARIABLES AND FUNCTIONS THAT CAN ONLY BE ACCESSED AND EDITED BY THE CLASS ITSELF, EVERYTHING BELOW THIS IS PRIVATE
    int member; //THIS INT IS NOW A PRIVATE MEMBER OF THE CLASS

    void subtractMemberPrivate(){ //A PRIVATE FUNCTION THAT SUBTRACTS 1 FROM "member"
      member = member - 1;
    }

  public: //PUBLIC MEMBERS OF CLASSES CAN BE ACCESSED ANYWHERE LIKE THE MAIN FUNCTION, EVERYTHING BELOW THIS IS PUBLIC
    classExample(){ //THIS IS WHERE WE CAN SET UP DATA AT THE STARTING POINT OF OUR CLASS. IT USES THE CLASS NAME AND MUST BE IN PUBLIC
      member = 10;
    }

    void subtracMemberPublic(){ //A PUBLIC FUNCTION THAT SUBTRACTS 1 FROM "member"
      member = member - 1;
    }

    void subtractAndPrintMember(){ //A PUBLIC FUNCTION FOR SUBTRACTING 1 FROM AND PRINTING "member"
      subtractMemberPrivate(); //SINCE THIS FUNCTION IS PART OF THE CLASS YOU CAN CALL THE PRIVATE SUBTRACT FUNCTION
      cout << "member: " << member << endl;
    }

}; //VERY IMPORTANT THAT YOU PUT A SEMI-COLON AT THE END OF CLASSES

int main(){
  classExample myClassExample; //WHEN WE USE A CLASS IN MAIN IT WORKS VERY SIMILARLY TO CALLING ANY OTHER VARIABLE
                               //THE FIRST PART IS THE ACTUAL CLASS NAME AND THE SECOND PART IS THE NAME OF OUR VARIABLE
  int choice;

  while(1){
    cout << "Enter 1 to subtract from member, enter 2 to subtract and print, enter anything else to exit." << endl;
    cin >> choice;
    switch (choice) {
		case 1:
			myClassExample.subtracMemberPublic(); //WE CAN CALL PUBLIC MEMBERS OF THE CLASS IN THE "variable-name.function" FORMAT. THIS ALSO WORKS FOR CALLING OTHER PUBLIC VARIALES SUCH AS INTS
			break;
    case 2:
			myClassExample.subtractAndPrintMember();
			break;
    default:
      return 0;
    }
  }

  //"myClassExample.subtractMemberPrivate" WOULD NOT WORK IN OUR MAIN FUNCTION BECAUSE IT IS A PRIVATE FUNCTION

}
