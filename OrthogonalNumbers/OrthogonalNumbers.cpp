//Max value : n=100,c=15,d=15; 
#include "OrthogonalNumbers.h"
#include <sstream>
#include <iomanip>


RandomNumberSet::RandomNumberSet() //default constructor
{	
	set_range = 39;
}

RandomNumberSet::RandomNumberSet(int range) //parametrized constructor
{
	if(range>100){
		cerr <<"The value of 'N' is " << range << ".\nThe maximum value 'N' can have is 100 .\nPlease input accordingly." << endl;
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
	if(bitvector[i]==0){
		bitvector.set(i);
		return true;
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
         int temp = (this->bitvector & random_obj.bitvector).count();
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
		 for(int i=0;i<101;i++){
			 if(random_obj.bitvector[i]==1){
				 cout << setw(3)<< i;
		 }
		 }	 
 }
 
 OrthogonalNumbers::OrthogonalNumbers():RandomNumberSet() //default constructor
{	
	n = 39;
	c=5;
	d=4;
}

OrthogonalNumbers::OrthogonalNumbers(int range, int set, int dis) : RandomNumberSet(range)//parametrized constructor
{   if(range>100){
		cerr <<"The value of 'N' is " << range << ".\nThe maximum value 'N' can have is 100 .\nPlease input accordingly." << endl;
		exit(1);
	}
	if(set>15){
		cerr <<"The value of 'C' is " << set << ".\nThe maximum value 'C' can have is 15.\nPlease input accordingly." << endl;
		exit(1);
	}
	if(dis>set){
		cerr <<"The value of 'D' is " << dis << ".\nThe maximum value 'D' can have is equal to value of 'C' entered that is "<<set<<" .\nPlease input accordingly." << endl;
		exit(1);
	}
	n=range;
	c=set;
	d=dis;	 
}

bool OrthogonalNumbers::generate(int numbersOfRandomNumberSetsToGenerate){
	srand (time(NULL));
	while(numbersOfRandomNumberSetsToGenerate>0){
		RandomNumberSet dummyobj(n);
		while(dummyobj.size()<c){
			int num_in_set = rand() % n + 1;
			dummyobj.set(num_in_set);
		}
		if(ortho.size()==0){
			ortho.push_back(dummyobj);
			//cout << dummyobj;
			numbersOfRandomNumberSetsToGenerate--;
		}
		else{
			unsigned int countme =0;
			for(unsigned int i =0; i<ortho.size();i++){
				int dif = dummyobj-ortho[i];
				if(dif>=d){
					countme++;
				}
			}
			if(countme==ortho.size()){
				ortho.push_back(dummyobj);
				//cout << dummyobj;
				numbersOfRandomNumberSetsToGenerate--;
			}
		}
	
    }
    cout<<endl;

	return true;
}

bool OrthogonalNumbers::reset(){
	if(ortho.size()){
		ortho.clear();
		return true;
	}
	else{
		return false;
	}
}
