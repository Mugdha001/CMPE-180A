#ifndef RANDOMNUMBERBUCKET_H
#define RANDOMNUMBERBUCKET_H
 
class RandomNumberBucket
{
private:
    int m_year;
    int m_month;
    int m_day;
 
public:

    RandomNumberBucket();

    RandomNumberBucket(int range);

    int pop(); // return -1 if empty

    void refill();

    int size(); // Number of elements left

    bool empty(); // whether empty or not
};
 
#endif
