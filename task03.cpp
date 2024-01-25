//task03
/*Make a menu of the following operations using two dimensional array of size m x n. You
should use user-defined functions which accept 2-D array A, and its size m and n as
arguments. The options are:
 To input elements into matrix of size m x n
 To display elements of matrix of size m x n
 Sum of all elements of matrix of size m x n
 To display row-wise sum of matrix of size m x n
 To display column-wise sum of matrix of size m x n
 To create transpose of matrix of size n x m*/
#include <iostream>
using namespace std;
int main()
{
	int m, n;
	//2d pointer
	cout << "Enter the size of rows (m) of the matrix: ";
	cin >> m;
	cout << "Enter the size of columns(n) of the matrix: ";
	cin >> n;
	//dynamically allocating the memory
	int** p = new int*[m];
	for (int i = 0; i < m; i++)
	{
		p[i] = new int[n];
	}
	//MENU
	int choice;
	int sum = 0;
	int* colSum = new int[n]();
	int* rowSum = new int[m]();
	

	do {
		cout << "-----------MENU-------------\n";
		cout << "Select one of the following(1-7): \n";
		cout << "[1]To input elements into matrix of size m x n\n";
		cout << "[2]To display elements of matrix of size m x n\n";
		cout << "[3]Sum of all elements of matrix of size m x n\n";
		cout << "[4]To display row-wise sum of matrix of size m x n\n";
		cout << "[5]To display column-wise sum of matrix of size m x n\n";
		cout << "[6]To create transpose of matrix of size n x m\n";
		cout << "[7]Quit\n";
		cin >> choice;
		switch (choice)
		{
		case 1:
			//taking input
			cout << "Enter the values of your " << m << "x" << n << " matrix: ";
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					cin >> p[i][j];
				}
			}
			break;
		case 2:
			//displaying output
			cout << "Your matrix is: \n";
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					cout << p[i][j] << " ";
				}
				cout << endl;
			}
			break;
		case 3:
			//sum of all the elements
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					sum += p[i][j];
				}
			}
			cout << "Sum of the elements of the matrix is: " << sum << endl;
			break;
		case 4:
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					rowSum[i] += p[i][j];
				}
			}
			//prinitng
			cout << "Row wise sum is: ";
			for (int i = 0; i < m; i++)
			{
				cout << rowSum[i] << " " ;
			}
			break;
		case 5:
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					colSum[i] += p[j][i];
				}
			}
			//prinitng
			cout << "Column wise sum is: ";
			for (int i = 0; i < m; i++)
			{
				cout << colSum[i] << " " ;
			}
			break;
		case 6:
			cout << "The transpose of the matrix is: \n";
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < m; j++)
				{
					cout << p[j][i] << " ";
				}
				cout << endl;
			}
			break;
		}
	} while (choice != 7);
	

	//deallocaation of memeory
	for (int i = 0; i < m; i++)
	{
		delete[] p[i];
	}
	delete[]p;
	delete[]colSum;
	delete[]rowSum;
	return 0;
}