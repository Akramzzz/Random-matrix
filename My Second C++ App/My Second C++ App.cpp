

#include <iostream>
#include <vector>
#include <cctype>
#include <fstream>
#include<string>
#include <iomanip>
#include "myFuncs.h"

using namespace std;

void FillMatrix(short arr[30][30],short row,short colm) {

	for (short x = 0; x < row; x++) {
		for (short y = 0; y < colm; y++) {
			arr[x][y] = gnr::RandomNumber(1, 100);
		}
	}


}

void FillColumnSumArray(short arr[30][30],short sumArr[],short row,short colm) {

	for (short i = 0; i < colm; i++) {

		short colmSum = 0;

		for (short j = 0; j < row; j++) {

			
			colmSum +=arr[j][i];

		}
	
			sumArr[i] = colmSum;
		
	}

}

void PrintMatrixRowSum(short sumArr[30], short counter) {

	for (short i = 0; i < counter; i++) {

		cout << "Sum Of Row " << i + 1 << " : " << sumArr[i] << endl;

	}

}

void PrintMatrixColumnSum(short sumArr[30], short counter){

	for (short i = 0; i < counter; i++) {

		cout << "Sum Of Cloumn " << i + 1 << " : " << sumArr[i] << endl;

	}


}

void Matrix(int row, int colm) {

	short arr[30][30];
	short RowSumArr[30];
	short ColmSumArr[30];
	
	FillMatrix(arr, row, colm);
	
	for (short i = 0; i < row; i++) {

		short RowSum = 0;
		short ColmSum = 0;

		for (short j = 0; j < colm; j++) {

			RowSum +=arr[i][j];

			cout << setw(3)<<arr[i][j] << "    ";


		}

		RowSumArr[i] = RowSum;


		cout << endl;
	}

	FillColumnSumArray(arr, ColmSumArr, row, colm);

	cout << "\n\n";

	PrintMatrixRowSum(RowSumArr, row);
	
	cout << endl << endl;

	PrintMatrixColumnSum(ColmSumArr,colm);

}


int main()
{

	srand((unsigned)time(NULL));

	cout << "Enter The Amount Of Rows In The Matrix : "; short row; cin >> row; cout << endl;

	cout << "Enter The Amount Of Columns In The Matrix : "; short colm; cin >> colm; cout << endl;

	cout << "The Following Is A "<<row<<"x"<<colm<< " Random Matrix : \n\n";

	Matrix(row,colm);

}

