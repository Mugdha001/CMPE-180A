#include <cstdlib>   // for srand and rand
#include <ctime>     // for time		
#include "m1.cpp"											


 
int main(){
	RandomNumberBucket bucket_obj(3);
	//RandomNumberBucket bucket2(50);
	for (int i=0; i<8;i++){
	cout << "popped item " << bucket_obj.pop()<< endl;
	cout << "bucket size " << bucket_obj.size() << endl;
	cout << "empty " << bucket_obj.empty() <<endl;
}
	//bucket_obj.pop();
	//bucket_obj.size();
	//bucket_obj.empty();
	bucket_obj.refill();
	bucket_obj.refill();
	for( int j=0;j<8;j++){
	cout << endl << "popwithrefill " << bucket_obj.popWithRefill()<< endl;
	cout << "bucket size " << bucket_obj.size() << endl;
	cout << "empty " << bucket_obj.empty() <<endl;
}	
	
	return 0;
}

