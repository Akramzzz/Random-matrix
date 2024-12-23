

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

void SumOfMatrix (short arr[30][30], short row, short colm) {

	int sum = 0;

	for (short i = 0; i < row; i++) {

		for (short j = 0; j < colm; j++) {
		
			sum += arr[i][j];

		}

	}

	cout << "\n\nSum Of All The Numbers In Matrix Is  : " << sum << "\n\n";

}

void IdentityMatrix(short arr[30][30],short row,short colm) {

	cout << "Identity Matrix : \n\n";

	for (short i = 0; i < row; i++) {

		for (short j = 0; j < colm; j++) {

			if (i == j) { arr[i][j] = 1; }

			else { arr[i][j] = 0; }

			cout << setw(3) << arr[i][j] << "    ";

		}

		cout << endl;

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

	cout << endl;

}

void MultiplyMatrixs(short arr[30][30],short arr2[30][30],short row,short colm) {

	short rsltArr[30][30];

	for (short i = 0; i < row; i++) {

		for (short j = 0; j < colm; j++) {

			rsltArr[i][j] = arr[i][j] * arr2[i][j];

			cout << setw(4) << rsltArr[i][j] << "    ";
		}

		cout << endl;

	}

}

void MiddleRowOfMatrix(short arr[30][30],short row,short colm) {

	cout << "\n\nMiddle Row Of Matrix : \n";

	for (short i = 0; i < colm; i++) {

		cout << setw(3) << arr[row / 2][i] << "    ";

	}
}

void MiddleColumnOfMatrix(short arr[30][30], short row, short colm) {

	cout << "\n\nMiddle Column Of Matrix : \n";

	for (short i = 0; i < row; i++) {

		cout << setw(3) << arr[i][colm/2] << "    ";

	}
	cout << "\n\n";
}

bool IsEqual(short arr[30][30], short arr2[30][30], short row, short colm) {

	for (short i = 0; i < row; i++) {

		for (short j = 0; j < colm; j++) {

			if (arr[i][j] != arr2[i][j]) {
						
				return false;

			}
		}
	}

	return true;

}

void CountTheNumberInMatrix(short arr[30][30],short row,short colm,short numberToLookFor) {

	short counter = 0;

	for (short i = 0; i < row; i++) {
		for (short j = 0; j < colm; j++) {
			if (arr[i][j] == numberToLookFor) {
				counter++;
			}
		}
		
	}
	cout << "Number " << numberToLookFor << " Count In Matrix Is : " << counter << "\n\n";
}

void PrintIntersectedNumbers(short arr[30][30], short arr2[30][30], short row, short colm) {

	short Similarities[30];
	short counter = 0;

	for (short i = 0; i < row; i++) {
		for (short j = 0; j < colm; j++) {

			if (arr[i][j] == arr2[i][j]) {
				Similarities[counter] = arr[i][j];
				counter++;
			}

		}
	}
	
	cout << "Intersected Numbers In Matrices : ";
	if (counter == 0) { cout << "Zero"; }
	for (short x = 0; x < counter;x++) {
		cout<<setw(3)<< Similarities[x] << "   ";
	}

	cout << "\n\n";

}

void IsNumberInMatrix(short arr[30][30], short row, short colm, short numberToLookFor) {

	bool avaliable = false;

	for (short i = 0; i < row; i++) {
		for (short j = 0; j < colm; j++) {

			if (arr[i][j] == numberToLookFor) {
				avaliable = true;
				break;
			}

			else{ 
				avaliable = false;
			}
		}

		if (avaliable) { break; }

	}

	if (avaliable) {
		cout << "Number " << numberToLookFor << " Is There :)\n";
	}

	else {
		cout << "Number " << numberToLookFor << " Is Not There :(\n\n";
	}
}

void MinimumNumberInMatrix(short arr[30][30],short row,short colm) {

	short minimum = arr[0][0];

	for (short i = 0; i < row; i++) {
		for (short j = 0; j < colm; j++) {
		
			if (arr[i][j] < minimum) {
				minimum = arr[i][j];
			}
		
		}
	}

	cout << "Minmum Number In Matrix : " << minimum << "\n\n";

}

void MaximumNumberInMatrix(short arr[30][30], short row, short colm) {

	short maximum = arr[0][0];

	for (short i = 0; i < row; i++) {
		for (short j = 0; j < colm; j++) {

			if (arr[i][j] > maximum) {
				maximum = arr[i][j];
			}

		}
	}

	cout << "Maximum Number In Matrix : " << maximum << "\n\n";

}


void Matrix(short arr[30][30],int row, int colm) {

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
	
	cout << "\n\n";

	PrintMatrixColumnSum(ColmSumArr,colm);

	MiddleRowOfMatrix(arr, row, colm);

	MiddleColumnOfMatrix(arr, row, colm);

	MinimumNumberInMatrix(arr, row, colm);

	MaximumNumberInMatrix(arr, row, colm);



}

int main()
{

	srand((unsigned)time(NULL));

	short arr[30][30];
	short arr2[30][30];

	cout << "Enter The Amount Of Rows In The Matrix : "; short row; cin >> row; cout << endl;

	cout << "Enter The Amount Of Columns In The Matrix : "; short colm; cin >> colm; cout << endl;

	cout << "The Following Is A "<<row<<"x"<<colm<< " Random Matrix : \n\n";

	Matrix(arr,row,colm);

	SumOfMatrix(arr, row, colm);

	cout << "Matrix 2 :\n";
	Matrix(arr2, row, colm);
	
	SumOfMatrix(arr2, row, colm);

	PrintIntersectedNumbers(arr, arr2, row, colm);



}

