#include <fstream>														//library for reading and writing input and output streams from files
#include <string>														//library for string operations
#include <iostream>														//library for input output stream operations
#include <vector>														//library for vector operations
#include <algorithm>
#include <sstream>														//library for stringstream operations
using namespace std;
int main() 
{ 
    ifstream file;														//create a input stream for reading a file
    file.open("input_matrix_1.txt");
    string str;
    //int found;
    int row = 0;
    vector<vector<int> > matrix1;
    while (getline(file, str))											//run the while loop as long as seperate line/s of text is/are found in the input file.
    {
		stringstream ss(str);
        //vector<int> numbers;
        for(int i = 0; ss >> i; ) {
			matrix1[row].push_back(i);
         //numbers.push_back(i);
         cout << i << " ";
       }
	row++;
		
   }
    //cout<< "no of lines" << lines_in_1;
    
    file.close();
    return 0;
}
