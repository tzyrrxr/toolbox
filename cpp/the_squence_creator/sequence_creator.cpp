#include <iostream>
#include <stdlib.h> // for random
#include <time.h> // time(NULL) -> 1970-1-1
using namespace std;
int main(){
	int n;
	cout << "The sequence creator." << endl;
	cout << "Input a number to determine length of sequence: ";
	cin>>n;
	srand(time(NULL));
	cout << "Result -> " << n << "*" << n << "+1";
	n = n*n +1;
	cout << " = " << n << " terms."<< endl;
	cout << endl;
	cout << "{ ";
	for(int i=0; i<n;i++){
		if(n-1==i)
			cout << rand();
		else
			cout << rand() << ", ";
	}
	cout << " }";
	cout << endl;
	cout << endl;

	return 0;
}
