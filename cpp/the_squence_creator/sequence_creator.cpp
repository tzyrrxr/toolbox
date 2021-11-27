#include <iostream>
#include <stdlib.h> // for random
#include <time.h> // time(NULL) -> 1970-1-1
using namespace std;
int main(){
	int n, input;
	int find=0;
	cout << "The sequence creator." << endl;
	cout << "Input a number to determine length of sequence: ";
	cin>>n;
	srand(time(NULL));
	cout << "Result -> " << n << "*" << n << "+1";
	input = n+1;
	int input_guess[input] = {};
	n = n*n +1;
	cout << " = " << n << " terms."<< endl;
	cout << endl;
	cout << "{ ";
	int number;
	int sequence[n]={};
	int temp_seq[n]={};
	for(int i=0; i<n;i++){
		number = rand()%1000+1;
		// check duplicate
		for(int j=0; j<n;j++){
			while(sequence[j]==number)
				number = rand()%1000+1;
		}
		sequence[i]=number;
		temp_seq[i]=number;
		cout << number;
		if(n-1!=i)
			cout <<  ", ";
	}

	cout << " }";
	cout << endl;
	cout << endl;

	/* sequence check
	for(auto i : sequence)
		std::cout << i << std::endl;
	*/

	// find strictly increasing
	cout << "Find strictly increasing" << endl;
	for(int i=0; i<n; i++){
		int counter;
		do{
			counter = 1;
			int temp = temp_seq[i];
			cout << temp << ", ";
			int the_last = i+1;
			for(int j=i+1; j<n; j++){
				if(temp_seq[j]>temp){
					counter++;
					the_last = j;
					temp = temp_seq[j];
					cout << temp;
					if(n-1!=j) cout << ", ";
				}
			}
			if(counter==input){
			       	cout << " <-- " << counter << "term(s)" <<" <-- **Find**" << endl;
				find++;
			}
			else if(counter>input){
			       	cout << " <-- " << counter << "term(s)" << " <-- **More**" << endl;
				find++;
			}
			if(counter!=input){
				cout << endl;
			       	temp_seq[the_last] = 0;
			}
			if(temp_seq[n-1]==0 || temp_seq[i+1]==0){
			       	break;
			}
		}while(counter!=input && temp_seq[n-1]!=0);
		// reset
		for(int i=0; i<n; i++) temp_seq[i]=sequence[i];

	}
	cout << endl;
	cout << endl;
	// find strictly decreasing
	cout << "Find strictly decreasing" << endl;
	for(int i=0; i<n; i++){
		int counter;
		do{
			counter = 1;
			int temp = temp_seq[i];
			cout << temp << ", ";
			int the_last = i+1;
			for(int j=i+1; j<n; j++){
				if(temp_seq[j]<temp){
					counter++;
					the_last = j;
					temp = temp_seq[j];
					cout << temp;
					if(n-1!=j) cout << ", ";
				}
			}
			if(counter==input){
			       	cout << " <-- " << counter << "term(s)" <<" <-- **Find**" << endl;
				find++;
			}
			else if(counter>input){
			       	cout << " <-- " << counter << "term(s)" << " <-- **More**" << endl;
				find++;
			}
			if(counter!=input){
				cout << endl;
			       	temp_seq[the_last] = 9999;
			}
			if(temp_seq[n-1]==9999 || temp_seq[i+1]==9999){
			       	break;
			}
		}while(counter!=input && temp_seq[n-1]!=9999);
		// reset
		for(int i=0; i<n; i++) temp_seq[i]=sequence[i];

	}

	cout << endl;
	if(find){
		std::cout << "Find!!" << std::endl;
	}
	else{
		std::cout << "No Find!!" << std::endl;
	}


	system("pause");

	return 0;
}
