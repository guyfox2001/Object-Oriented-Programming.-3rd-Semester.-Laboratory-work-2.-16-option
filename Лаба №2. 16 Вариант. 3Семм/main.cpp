#include <iostream>
#include <time.h>
#include "LogicMatrix.h"
using namespace std;

int main() {
	int colums, rows;
	cout << "Input Rows: ";
	cin >> rows;
	cout << "Input Colums: ";
	cin >> colums;
	static LogicMatrix A(colums, rows), B(colums, rows), C;

	//Рандомный ввод матриц 
	srand(time(NULL));
	A.random_matrix(); B.random_matrix();
	cout << A << endl;
	cout << B << endl;
	C = A || B;
	cout << C << endl;
	//C.~LogicMatrix();
	/*Ручной ввод матриц*/
	cin >> A >> B;
	cout << A << endl;
	cout << B << endl;
	C = A || B;
	cout << C << endl;
	

	return 0;
}