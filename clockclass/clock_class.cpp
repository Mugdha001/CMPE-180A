#include <iostream>
using namespace std;

class clockType
{
public:
void setTime(int hours, int minutes, int seconds);
//Function to set the time
//The time is set according to the parameters
//Postcondition: hr = hours; min = minutes; sec = seconds
// The function checks whether the values of hours,
// minutes, and seconds are valid. If a value is invalid,
// the default value 0 is assigned.

void getTime(int& hours, int& minutes, int& seconds) const;
//Function to return the time
//Postcondition: hours = hr; minutes = min; seconds = sec

clockType(int hours, int minutes, int seconds);
//Constructor with parameters
//The time is set according to the parameters.
//Postconditions: hr = hours; min = minutes; sec = seconds
// The constructor checks whether the values of hours,
// minutes, and seconds are valid. If a value is invalid,
// the default value 0 is assigned.

clockType();
//Default constructor with parameters
//The time is set to 00:00:00.
//Postcondition: hr = 0; min = 0; sec = 0

void printTime() const;
//Function to print the time
//Postcondition: Time is printed in the form hh:mm:ss.

void incrementMinutes();
//Function to increment the time by one minute
//Postcondition: The time is incremented by one minute.
// If the before-increment time is 23:59:53, the time
// is reset to 00:00:53.

void incrementSeconds();
//Function to increment the time by one second
//Postcondition: The time is incremented by one second.
// If the before-increment time is 23:59:59, the time
// is reset to 00:00:00.

void incrementHours();
//Function to increment the time by one hour
//Postcondition: The time is incremented by one hour.
// If the before-increment time is 23:45:53,   the time
// is reset to 00:45:53.

bool equalTime(const clockType& otherClock) const;
//Function to compare the two times
//Postcondition: Returns true if this time is equal to
// otherClock; otherwise, returns false

private:
int hr; //variable to store the hours
int min; //variable to store the minutes
int sec; //variable to store the seconds
};

int main() { 
    
   int hours;
   int minutes;
   int seconds;
    //first object
    clockType clock1(2, 59, 59);										// clockType parametrized constructor
    cout<< "Original clock1 time: ";
    clock1.printTime();													// print original clock1 time
    clock1.incrementHours();
    clock1.incrementMinutes();
    clock1.incrementSeconds();
    cout<< "Incremented time for clock1: " ;
    clock1.printTime();
    cout<<endl;
    
    //using getTime method() on clock1
    clock1.getTime(hours, minutes, seconds);
    cout << "After using get function, clock1 time is: ";
    clock1.printTime();
    cout << endl;
    
    //second object
    clockType clock2(5, 40, 15);										// clockType parametrized constructor
    cout<< "Original clock2 time: ";
    clock2.printTime(); 												// print original clock2 time
    clock2.incrementHours();
    clock2.incrementMinutes();
    clock2.incrementSeconds();
    cout<< "Incremented time for clock2: " ;
    clock2.printTime();
    cout << endl;
    
    //using getTime method() on clock2
    clock2.getTime(hours, minutes, seconds);
    cout << "After using get function, clock2 time is: ";
    clock2.printTime();
    cout << endl;
    
    if ( clock1.equalTime ( clock2 ) )
    {
		cout << "Both clock1 and clock2 times are equal." << endl ;
	}
	else
	{
		cout << "clock1 and clock2 times are not equal." << endl ;
	}
    return 0; 
} 
void clockType::setTime(int hours, int minutes, int seconds)
{
	if (0 <= hours && hours < 24)
		hr = hours;
	else
		hr = 0;
	if (0 <= minutes && minutes < 60)
		min = minutes;
	else
		min = 0;
	if (0 <= seconds && seconds < 60)
		sec = seconds;
	else
		sec = 0;
}

void clockType::getTime(int& hours, int& minutes, int& seconds) const
{
   hours = hr;
   minutes = min;
   seconds = sec;
}

void clockType::printTime() const
{
   if (hr < 10)
   {
	cout << "0";
   }
   cout << hr << " : ";

   if (min < 10)
   {
	   cout << "0";
   }
   cout << min << " : ";

   if (sec < 10)
   {
	   cout << "0";
   }
   cout << sec << endl;
   
}
clockType::clockType(int hours, int minutes, int seconds)
{
setTime(hours, minutes , seconds);
   if (0 <= hours && hours < 24)
   {
	   hr = hours;
   }
   else
   {
	   hr = 0;
   }
	      

	if (0 <= minutes && minutes < 60)
	{
		min = minutes;
	}
	else
	{
		min = 0;
	}

	if (0 <= seconds && seconds < 60)
	{
		sec = seconds;
	}
	else
	{
		sec = 0;
	}
}

clockType::clockType() //default constructor
{
hr = 0;
min = 0;
sec = 0;
}

void clockType::incrementHours()
{
   hr=hr+1;
   if(hr > 23)
   {
    hr = 0;
   }
}


void clockType::incrementMinutes()
{
   min=min+1;
   if (min > 59)
   {
   min = 0;
   incrementHours();
   }
}

void clockType::incrementSeconds()
{
   sec=sec+1;
   if (sec > 59)
   {
   sec = 0;
   incrementMinutes();
   }
}

bool clockType::equalTime(const clockType& otherClock) const
{
   return (hr == otherClock.hr && min == otherClock.min && sec == otherClock.sec);
}
