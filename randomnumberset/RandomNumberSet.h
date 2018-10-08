#ifndef RANDOMNUMBERSET_H
#define RANDOMNUMBERSET_H
#define INTBIT 32 // 1 byte i.e. 8*4=32 bits per integer
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class RandomNumberSet
{
private:
    int set_num;
    int set_range;
    //bitset<INTBIT> b_int;
    vector<bitset<INTBIT> > bitlist;
 
public:
    RandomNumberSet();
    RandomNumberSet(int range);
    void initialize();

    void reset(); // reset elements

    int size(); // Number of elements left

    bool set(int i); // whether empty or not
};
 
#endif
