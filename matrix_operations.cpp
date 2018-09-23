#include <fstream>														//library for reading and writing input and output streams from files
#include <string>														//library for string operations
#include <iostream>														//library for input output stream operations
#include <vector>														//library for vector operations
#include <algorithm>
#include <sstream>														//library for stringstream operations
using namespace std;

void input_matrix(string input_file, vector<vector< int >> &matrix_vector);
void calculate_multiplication();

int main() 
{ 
	vector<vector< int >> matrix1, matrix2;
	string input_file_name1 = "input_matrix_1.txt", input_file_name2 = "input_matrix_2.txt";
	input_matrix(input_file_name1, matrix1);
	input_matrix(input_file_name2, matrix2);
	return 0;
}

void input_matrix(string input_file, vector<vector< int >> &matrix_vector){
	ifstream file;														//create a input stream for reading a file
    file.open(input_file);
    string str;
    unsigned int q=0;
    while (getline(file, str))
    {
		q=0;
		vector< int > numbers;
		stringstream ss(str);
        for(int i = 0; ss >> i; ) {
        numbers.push_back(i);
        //cout << i << " ";
        q++;
        
    }
    matrix_vector.push_back(numbers);
   }
 
   for (unsigned int i = 0; i <matrix_vector.size( ); i++){	   
	   for(unsigned int j =0; j<q; j++){  
		//cout << matrix_vector[i][j];
}
cout<<endl;
}
    file.close();
}
