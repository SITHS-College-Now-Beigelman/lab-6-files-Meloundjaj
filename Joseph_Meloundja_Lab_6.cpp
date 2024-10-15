// MELOUNDJA jOSEPH
// 10/15/2024
// Program for practice of streams 

#include <iostream> 
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;
 
int main ( ) 
{
    ifstream inFile; //input file stream variable
    ofstream outFile; //output file stream variable
    inFile.open("inData.txt"); // Step 3: Open the files
    outFile.open("outData.txt");

    int intA;
    int intB;
    char chary;
    string stringy;

    inFile >> intA >> intB; //Step 5
    outFile << (intA + intB) << endl;

    inFile >> chary;
    outFile <<"char: " << char(chary + 1) << endl;

    inFile >> stringy;
    outFile << stringy << endl;

   

  



  


    // Last step to close the file
    inFile.close();
    outFile.close();

    
 
     return 0; 
}




