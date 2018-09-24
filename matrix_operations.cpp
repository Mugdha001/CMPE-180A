#include <fstream>														
#include <string>														
#include <iostream>														
#include <vector>														
#include <sstream>														
using namespace std;

void input_matrix(string input_file, vector<vector< int >> &matrix_vector, unsigned int& col);		
//Functionality: read input from file and convert it into a vector.
//Precondition : string input_file should have the complete file name.
//Postcondition: input matrix is transferred in a 2d vector and number of columns of the matrix is stored through reference.

void calculate_multiplication(vector<vector< int >> &matrix_vector_1, vector<vector< int >> &matrix_vector_2, unsigned int col1, unsigned int col2);
//Functionality: matrix multiplication of the two input matrices
//Precondition : two 2d vectors should be obtained from the input_matrix function.
//Postcondition: matrix multiplication is printed on screen
int main() 
{ 
	vector<vector< int >> matrix1, matrix2;								// two matrices
	unsigned int col1, col2;											// number of columns of the two matrices
	string input_file_name1 = "input_matrix_1.txt", input_file_name2 = "input_matrix_2.txt";  // input files
	
	//function call
	input_matrix(input_file_name1, matrix1, col1);
	input_matrix(input_file_name2, matrix2, col2);	
	calculate_multiplication(matrix1, matrix2, col1, col2);
	return 0;
}

void input_matrix(string input_file, vector<vector< int >> &matrix_vector, unsigned int& col){
	ifstream file;														//create a input stream for reading a file and then open it
    file.open(input_file);
    string str;
    
    while (getline(file, str))											//assuming each row of matrix is saved to different row in input file
    {	
		if (!str.empty())												//incase the matrix rows are seperated by multiple blank lines
        {
		col=0;	
		vector< int > numbers;											//inner part of 2d vector
		stringstream ss(str);											//stringstream is easier for string manipulations and works like cin
        for(int i = 0; ss >> i; ) {										//works for integer, ignores characters and whitespaces
        numbers.push_back(i);											
        col++;
        
    }
    matrix_vector.push_back(numbers);
   }
	
    
}
file.close();
}
void calculate_multiplication(vector<vector< int >> &matrix_vector_1, vector<vector< int >> &matrix_vector_2,unsigned int col1, unsigned int col2){
//matrix multiplication required the number of columns of 1st matrix and the number of rows of second matrix to be equal.
//it is assumed that this condition holds true for the input files
unsigned int row1 = matrix_vector_1.size( );							//number of rows in matrix1 of input file 1
unsigned int row2 = matrix_vector_2.size( );							//number of rows in matrix2 of input file 2
int sum = 0;															//sum of products in each iterations
unsigned int i=0, j = 0;												//iterators for row1 and col2 
while(i<row1){
	j=0;
	while(j<col2){
		sum=0;
		for( unsigned int k=0; k<row2 ; k++){							
		sum=sum + matrix_vector_1[i][k] * matrix_vector_2[k][j];		//matrix multiplication and summing
		}
		cout<< sum << " ";
		j++;
}
cout<<endl<<endl;
	i++;
}	

}
