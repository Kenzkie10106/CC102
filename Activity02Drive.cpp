#include <iostream>
 
using namespace std;

int main()
{
    int age;

	cout << "What is your age?:";
	cin >> age;
	
	if(age < 16) {
	cout << "Your to young to drive!" << endl;
	} else if (age == 16) {
	cout << "Better clear the road!" << endl;
	} else{
	cout << "Your Pretty Old!"  << endl;
	}
	 return 0;
 }	 
	