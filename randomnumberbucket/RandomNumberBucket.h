#ifndef RANDOMNUMBERBUCKET_H
#define RANDOMNUMBERBUCKET_H
#include <vector>
#include <iostream>
using namespace std;
class RandomNumberBucket
{
private:
    int my_range;
    vector< int > bucket;   
    vector< int > popped_items; 
 
public:
    RandomNumberBucket();
    RandomNumberBucket(int range);
    void initialize();

    int pop(); // return -1 if empty
    
    int popWithRefill(); //popwithrefill method that always pops

    void refill(); // refill elements

    int size(); // Number of elements left

    bool empty(); // whether empty or not
};
 
#endif
