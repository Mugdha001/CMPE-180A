#include <fstream>														//library for reading and writing input and output streams from files
#include <string>														//library for string operations
#include <iostream>														//library for input output stream operations
#include <vector>														//library for vector operations
#include <algorithm>
#include <sstream>														//library for stringstream operations
using namespace std;

void input_matrix(string input_file, vector<vector< int >> &matrix, int& row);
void matrix_multiplication(vector<vector< int >> matrix1, vector<vector< int >> matrix2, int row1, int row2);

int main() 
{ 
	vector<vector< int >> matrix_1, matrix_2;
	int row1, row2;
	string input_file_name1 = "input_matrix_1.txt", input_file_name2 = "input_matrix_2.txt";
	input_matrix(input_file_name1, matrix_1, row1);
	input_matrix(input_file_name2, matrix_2, row2);
	matrix_multiplication(matrix_1, matrix_2, row1, row2);
	return 0;
}

void input_matrix(string input_file, vector<vector< int >> &matrix, int& row){
	ifstream file;														//create a input stream for reading a file
    file.open(input_file);
    string str;
    
    while (getline(file, str))
    {
		row=0;
		vector< int > numbers;
		stringstream ss(str);
        for(int i = 0; ss >> i; ) {
        numbers.push_back(i);
        row++;
        }
    matrix.push_back(numbers);
   }
   for (unsigned int i = 0; i <matrix.size( ); i++){	   
	   for(int j =0; j<row; j++){  
		  cout << matrix[i][j];
	  }
}
     file.close();
     
}

void matrix_multiplication(vector<vector< int >> matrix1, vector<vector< int >> matrix2, int row1, int row2){
	
	for (unsigned int i = 0; i <matrix1.size( ); i++){	   
	   for(int j =0; j<3; j++){  
		  cout << matrix1[i][j];
	  }
}
	
			
	
		/*for (unsigned int i=0; i<matrix1.size();i++){
			cout << matrix1.pop_back;
			
		}
		int num1,num2,sum;
		   for (unsigned int i = 0; i <matrix_vector.size( ); i++){	   
	   for(unsigned int j =0; j<q; j++){  
		//cout << matrix_vector[i][j];
}
//cout<<endl;

		for (unsigned int i = 0; i < matrix1.size( ); i++){	   
			for(int j =0; j < row1; j++){  
				num1 = matrix1[i][j];
				
				}
			}
		for (unsigned int i = 0; i < matrix2.size( ); i++){	   
			for(int j =0; j < row2; j++){  
				num2 = matrix2[i][j];
				
				}
			}*/
				
		
}
