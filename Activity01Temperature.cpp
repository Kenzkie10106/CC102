#include <iostream>

using namespace std;
 int main()
{ 
 int temp;
	  
	 cout << "What is the current temperature?: ";
	 cin >> temp;
	 
	 if(temp < 32 ) {
		cout << "Bring a Heavy Jacket!" << endl;
	 } 
	 else if (temp >= 32 && temp <=50) {
		cout << "Bring a Light Jacket!" << endl;
	 } 
	 else { 
		cout << "not to bring Jacket!"<< endl;
	 }
	 return 0;
}	 
	 