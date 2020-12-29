// Origin: 1/22/2020

#include <iostream>

using namespace std ;

int main() {
	int num ;
  string direction1 ;
  string direction2 ;
	string AuxOrPrim ;
	int serving ;
	// declaration of variables

	cout << "Enter an interstate number: ";
  cin >> num ;
	cout << '\n' ;
	// this block asks for integers.

	if ( !cin ) {
		cerr << "Invalid integer value specified. \n" ;
		return 1 ;
		// invalid integer error
		}
	else {
		if ( (1 > num) && (num > 999 ) ) {
			cerr << num << " is not a valid interstate number. \n" ;
			return 2 ;
       // not a real interstate error
		}

    else {
			if ( (num % 2) == 0 ) {
				direction1 = "east" ;
				direction2 = "west" ;
			}
			else {
				direction1 = "north" ;
				direction2 = "south" ;
				// assigns a label to the variables direction 1 and 2
			}
		
			if ( ( (num % 100) == 0) || ( num <= 0) ) {
				cerr << num << " is not a valid interstate number. \n" ;
				return 3 ;
			}
			else {
				if ( num >= 101 && num <= 999 )  {
					AuxOrPrim = "an auxiliary highway, " ;
					serving = ( num % 100 ) ;
					cout << "I-" << num << " is " << AuxOrPrim << "serving I-" << serving;
					cout << ", going " << direction1 << "/" << direction2 << ". \n" ;
				}
				else {
					if ( num >= 1 && num <= 99 )
					AuxOrPrim = "a primary interstate" ;
					cout << "I-" << num << " is " << AuxOrPrim << ", going " ;
					cout << direction1 << "/" << direction2 << ". \n" ;
				}
				// assigns a label to the variable "AuxOrPrim"
		}
	}

}
return 0 ;
//no error
}




