#include <iostream>
#include<time.h>

class LogicMatrix {
public:
	//Конструкторы и деструктор
	LogicMatrix();
	LogicMatrix(int& col, int& rows, bool** MatrixPtr); 
	LogicMatrix(int& col, int& rows); 
	~LogicMatrix();

	//Геттеры Сеттеры
	bool** get_matrix();
	void set_matrix(int& col, int&rows);

	void random_matrix();

	//Перегрузки операторов
	friend std::ostream& operator<< (std::ostream& OurOut, LogicMatrix& OurLogicMatrix);
	friend std::istream& operator>> (std::istream& OurIn, LogicMatrix& OurLogicMatrix);
	friend LogicMatrix& operator|| ( LogicMatrix& Left, LogicMatrix& Right);
	LogicMatrix& operator= (const LogicMatrix& OurMatrix);

private:
	bool** OurLogicMatrix;
	int colums, rows;
};