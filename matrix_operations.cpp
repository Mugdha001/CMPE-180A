#include <fstream>														//library for reading and writing input and output streams from files
#include <string>														//library for string operations
#include <iostream>														//library for input output stream operations
#include <vector>														//library for vector operations
#include <algorithm>
#include <sstream>														//library for stringstream operations
using namespace std;

void input_matrix(string input_file, vector<vector< int >> &matrix_vector, unsigned int& col);
void calculate_multiplication(vector<vector< int >> &matrix_vector_1, vector<vector< int >> &matrix_vector_2, unsigned int col1, unsigned int col2);

int main() 
{ 
	vector<vector< int >> matrix1, matrix2;
	unsigned int col1, col2;
	string input_file_name1 = "input_matrix_1.txt", input_file_name2 = "input_matrix_2.txt";
	input_matrix(input_file_name1, matrix1, col1);
	input_matrix(input_file_name2, matrix2, col2);
	
	calculate_multiplication(matrix1, matrix2, col1, col2);
	return 0;
}

void input_matrix(string input_file, vector<vector< int >> &matrix_vector, unsigned int& col){
	ifstream file;														//create a input stream for reading a file
    file.open(input_file);
    string str;
    
    while (getline(file, str))
    {	
		if (!str.empty())
        {
		col=0;	
		vector< int > numbers;
		stringstream ss(str);
        for(int i = 0; ss >> i; ) {
        numbers.push_back(i);
        col++;
        
    }
    matrix_vector.push_back(numbers);
   }
	
    
}
file.close();
}
void calculate_multiplication(vector<vector< int >> &matrix_vector_1, vector<vector< int >> &matrix_vector_2,unsigned int col1, unsigned int col2){

unsigned int row1 = matrix_vector_1.size( );
unsigned int row2 = matrix_vector_2.size( );
int sum = 0;
unsigned int i=0, j = 0;
while(i<row1){
	j=0;
	while(j<col2){
		sum=0;
		for( unsigned int k=0; k<row2 ; k++){
		sum=sum + matrix_vector_1[i][k] * matrix_vector_2[k][j];
		}
		cout<< sum << " ";
		j++;
}
cout<<endl<<endl;
	i++;
}	

}
