

#include <iostream>
#include <vector>
#include <cctype>
#include <fstream>
#include<string>
#include <iomanip>
#include "myFuncs.h"

using namespace std;


void PrintMatrixSum(short sumArr[30], short counter) {

	for (short i = 0; i < counter; i++) {

		cout << "Sum Of Row " << i + 1 << " : " << sumArr[i] << endl;

	}

}

void Matrix(int row, int colm) {

	short arr[30][30];
	short sumArr[30];
	short counter = 0;

	for (short i = 0; i < row; i++) {

		short sum = 0;

		for (short j = 0; j < colm; j++) {
			arr[i][j] = gnr::RandomNumber(1, 100);
			sum +=arr[i][j];
			cout << setw(3)<<arr[i][j] << "    ";
			
		}
		sumArr[counter] = sum;
		counter++;
		cout << endl;
	}
	cout << "\n\n";
	PrintMatrixSum(sumArr, counter);
}




int main()
{

	srand((unsigned)time(NULL));

	cout << "Enter The Amount Of Rows In The Matrix : "; short row; cin >> row; cout << endl;

	cout << "Enter The Amount Of Columns In The Matrix : "; short colm; cin >> colm; cout << endl;

	cout << "The Following Is A "<<row<<"x"<<colm<< " Random Matrix : \n\n";

	Matrix(row,colm);



}

