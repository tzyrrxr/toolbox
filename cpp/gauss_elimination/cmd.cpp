#include <iostream>
#include <stdlib.h>

using namespace std;
int main(){

	// print setting
	std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	std::cout.precision(2);

	int row, column;
	std::cout << "Input rows and columns>" << std::endl;
	cin >> row >> column; 


	float matrix[row][column];
	//float reset_matrix[row][column];
	for(int i=0;i<row;i++){
		std::cout << "Row " << i << "-> ";
		for(int j=0;j<column;j++){
			cin >> matrix[i][j];
			//reset_matrix[i][j] = matrix[i][j];
		}
	}

	std::cout << "========" << std::endl;
	std::cout << "=Result=" << std::endl;
	std::cout << "========" << std::endl;


	/*
	 * i -> create pivot rows
	 * j -> create ratio
	 * k -> eliminate other columns
	 *
	 */
	for(int i=0; i<column; i++){
		for(int j=i+1; j<row; j++){
			float ratio = matrix[j][i]/matrix[i][i];
			for(int k=i;k<column; k++){
				matrix[j][k]=matrix[j][k]-ratio*matrix[i][k];
			}
		}
	}

	// show contain
	for(int i=0;i<row;i++){
		for(int j=0; j<column;j++){
			if(matrix[i][j]>=0)
				std::cout <<" "<< matrix[i][j] << " ";
			else
				std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
	system("pause");
	return 0;
}
