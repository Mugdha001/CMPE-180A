#include "RandomNumberSet.h"
#include <sstream>
#include <iomanip>


RandomNumberSet::RandomNumberSet() //default constructor
{	
	set_range = 39;
}

RandomNumberSet::RandomNumberSet(int range) //parametrized constructor
{
	if(range<5){
		cerr <<"The value of 'N' is " << range << ".\nIt is required to be atleast 5 (for 5 unique numbers).\nPlease input accordingly." << endl;
		exit(1);
	}
	if(range>500){
		cerr <<"The value of 'N' is " << range << ".\nThe maximum value N can have is 500 (max size of bitset as set by programmer).\nPlease input accordingly." << endl;
		exit(1);
	}
	 set_range=range;
	 
}

void RandomNumberSet :: reset()
{
	bitvector.reset();
}
bool RandomNumberSet :: set(int i)
{ 
    if(i==0 || i>set_range){
	cerr << "The RandomNumberSet can store numbers between 1 to " << set_range<<" in the RandomNumberSet bitvector.\nPlease input accordingly." << endl;
	exit(1);
	}
	if(bitvector[i]==0 && bitvector.count()<5 ){
		//cout << "in set function bitvector.count() "<<i << " " << bitvector.count() <<endl;
		bitvector.set(i);
		return true;
	}
	else if(bitvector[i]==0 && bitvector.count()>=5){
		cerr << "Cannot set number " <<i <<" in the bitset as it is full to it's capacity of 5 numbers.\nPlease reset it if more numbers to be added." <<endl;
		exit(1);
	}
	else{
		return false;
	}
	
}

int RandomNumberSet :: size()
{
	return bitvector.count();
}

int RandomNumberSet:: operator-(const RandomNumberSet& random_obj) const{         
         //cout << "this->bitvector.size()" << this->bitvector.count() << endl;
        // int difference = (this->bitvector).count() + random_obj.bitvector.count()-2*(this->bitvector & random_obj.bitvector).count();
         
         int temp = (this->bitvector & random_obj.bitvector).count();
         //cout << "temp" << temp;
         if((this->bitvector).count() > random_obj.bitvector.count()){
			 return (this->bitvector).count()-temp;
		 }
		 else if((this->bitvector).count() < random_obj.bitvector.count()){
			 return random_obj.bitvector.count()-temp;
		 }
		 else{
			 return random_obj.bitvector.count()-temp;
		 }
			 
      }
void operator<<(ostream& os, const RandomNumberSet& random_obj){
		 cout<<endl;
		 for(int i=0;i<501;i++){
			 if(random_obj.bitvector[i]==1){
				 cout << setw(3)<< i;
		 }
		 }
		 
		 
      }
