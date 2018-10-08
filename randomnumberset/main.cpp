#include <cstdlib>   // for srand and rand
#include <ctime>     // for time		
#include "RandomNumberSet.cpp"											
 
int main(){
	RandomNumberSet random_obj(6);
	//RandomNumberBucket bucket2(50);
	cout << "after reset " << endl;
	//random_obj.reset();
	int a =1,b=20;
	
	cout << "size " << random_obj.size() << endl;
	cout << "set bit " <<random_obj.set(a) <<endl;
	cout << "set bit " <<random_obj.set(b) <<endl;
	cout << "size " << random_obj.size() <<endl;
	return 0;
}

