#include <iostream>														
#include <vector>														
#include <cstdlib>   // for srand and rand
#include <ctime>     // for time													
using namespace std;

class RandomNumberBucket
{
private:
    int my_range;
    bool empty_bucket;
    vector <int> bucket;   
 
public:
    RandomNumberBucket();
    RandomNumberBucket(int range);

    int pop(); // return -1 if empty

    void refill();

    int size(); // Number of elements left

    bool empty(); // whether empty or not
};
 
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

RandomNumberBucket::RandomNumberBucket() //default constructor
{	
	bucket.resize(39);
	my_range=39;
	for (int i = 1; i <= 39; i++)
	{
		bucket[i]=i;
	}	
}

RandomNumberBucket::RandomNumberBucket(int range) //parametrized constructor
{
	bucket.resize(range);
	my_range=range;
	for (int i = 1; i <= range; i++)
	{
		bucket[i]=i;
	}	
}

int RandomNumberBucket :: pop()
{	
	if(bucket.size()){
		int temp;
		srand(time(0));
		int size = bucket.size();
		int r = rand() % size;  // generate a random position
		temp = bucket[r];
		bucket.erase (bucket.begin()+ r);
		return temp;
		}
	else return -1;
}

int RandomNumberBucket :: size()										//return size of bucket
{
	return bucket.size();		
}

bool RandomNumberBucket :: empty()										//return true if bucket size is 0 else false 
{
	empty_bucket= (!bucket.size());
	return empty_bucket;
	
}

void RandomNumberBucket :: refill()
{
	if(empty_bucket)
	{	bucket.resize(my_range);
		for (int i = 1; i <= my_range; i++)		bucket[i] = i;
	}
}
