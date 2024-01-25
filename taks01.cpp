////question 01
///*Create a program which have three variables, all type int, should be called day, month, and year.
//Write a program that prompts the user to enter values in day, month, and year. The program then
//stores the data in a variables, and finally prints it out.*/
//#include <iostream>
//using namespace std;
//int main()
//{
//	int day, month, year;
//	//user input
//	do
//	{
//		cout << "Enter the day: \n";
//		cin >> day;
//	} while (day < 0 || day > 31);
//	
//	do {
//		cout << "Enter month: \n";
//		cin >> month;
//	} while (month < 0 || month > 12);
//
//	do {
//		cout << "Enter year: \n";
//		cin >> year;
//	} while (year < 0 || year > 2024);
//	
//	//output
//	cout << "The date you entered is " << day << "-" << month << "-" << year << endl;
//
//	return 0;
//}