//BRANDON SEIDMAN - 2020
//E115

#include <iostream>
#include<fstream> //NEEDED FOR IFSTREAM/OFSTREAM

using namespace std;

//FILE READING AND WRITING WITH IFSTREAM/OFSTREAM IS VERY COMPLICATED. BELOW GOES OVER ALL THE NECESSARY PARTS

int main(){
  ofstream writer; //OFSTREAM AND IFSTREAM ARE VARIABLES AND IT IS GOOW TO WRITE THEM AS READER AND WRITER TO REMEMBER WHICH IS WHICH
	ifstream reader;
  string substring, line;
  bool isFound = false;
  string variable = "Hello";

  writer.open("example.txt", ios::app); //THIS IS HOW WE FIRST OPEN A FILE AND IF WE OPEN IT IN WRITING MODE FOR THE FIRST TIME IT WILL BE CREATED
                                        //"ios::app" ALLOWS US TO WRITE TO THE END OF A FILE

  writer << "Hello World!" << endl; //WRITING TO A FILE IS SIMILAR TO COUT BUT WE USE THE OFSTREAM VARIABLE NAME IN PLACE OF COUT

  writer.close(); //ONCE WE'VE WRITTEN TO A FILE WE MUST CLOSE IT

  reader.open("EXAMPLE.txt"); // THE READER IS HOW WE WILL SEARCH FOR ITEMS IN THE FILE

  //BELOW IS THE CODE WE USE TO CHECK IF SOMETHING EXISTS WITHIN A FILE, READ HOW IT WORKS AND MAKE MINOR ALTERATIONS FOR IT TO WORK IN HW9
  if (reader.is_open()) { //CHECKS IF THE READER IS OPEN AND HAS FOUND THE FILE
      while (getline(reader, line)) { //CYCLES THROUGH EVERY LINE OF THE FILE WITH LINE BEING STRING OF THE LINE
      substring = line.substr(0, line.find(" ")); //THIS GIVES WORD 0 OF THE STRING. IF WE HAD THE STRING "I am Brandon" then "I" WOULD BE 0 "am" WOULD BE 1...
      if (variable == substring) { //VARIABLE IS WHAT WE ARE CHECKING FOR SUCH AS THE NAME IN A CONTACT BOOK
        cout << "Item found: " << line << endl;
        isFound = true;
      }
    }
    if (!isFound) {
      cout << "Contact not found" << endl;
    }
  }
  else { //THIS IS WHEN READER DOESN'T OPEN
    cout << "File not found" << endl;
  }

  reader.close(); // WE MUST ALSO CLOSE THE READER


  return 0;
}
