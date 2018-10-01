														
#include <cstdlib>   // for srand and rand
#include <ctime>     // for time		
#include "RandomNumberBucket.cpp"											


 
int main(){
	RandomNumberBucket bucket_obj(1);
	//RandomNumberBucket bucket2(50);
	//int popped_number = bucket_obj.pop();	
	//int current_size = bucket_obj.size();
	//bool emp = bucket_obj.empty();
	bucket_obj.pop();
	bucket_obj.size();
	bucket_obj.empty();
	bucket_obj.refill();
	return 0;
}

