#ifndef RANDOMNUMBERBUCKET_H
#define RANDOMNUMBERBUCKET_H
#include <vector>
#include <iostream>
using namespace std;
class RandomNumberBucket
{
private:
    int my_range;
    bool empty_bucket;
    vector< int > bucket;   
 
public:
    RandomNumberBucket();
    RandomNumberBucket(int range);

    int pop(); // return -1 if empty

    void refill();

    int size(); // Number of elements left

    bool empty(); // whether empty or not
};
 
#endif
