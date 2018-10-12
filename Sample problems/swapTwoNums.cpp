#include <iostream>
#include <vector>
#include <string>
using namespace std;
template<class T>
void swapTwoNums(T &val1, T &val2);
template<class T>
void display(T &val1, T &val2);
int main(){
	int a=10,b=20;
	display(a,b);
	swapTwoNums(a,b);
	display(a,b);
	string str1="Hi", str2="Bye";
	display(str1, str2);
	swapTwoNums(str1, str2);
	display(str1, str2);
	return 0;
}
template<class T>
void swapTwoNums(T &val1, T &val2){
			T temp = val1;
			val1 = val2;
			val2 = temp;		
}
template<class T>
void display(T &val1, T &val2){
	cout <<"Value 1 " <<  val1 <<endl;
	cout <<"Value 2 " <<  val2 <<endl;
}

