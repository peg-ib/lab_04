#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <cmath>
struct point
{
	double x;
	double y;
	point()
	{
		x = 0;
		y = 0;
	}
	point(double x, double y)
	{
		this->x = x;
		this->y = y;
	}
};
void print_weight(std::vector<double>& vec)
{
	std::cout << "------------+--------------------+-------------+----------+" << std::endl;
	std::cout << "| " << "Внешность" << " | " << "Финансовые запросы" << " | " << "Домовитость" << " | " << "Характер" << " |" << std::endl;
	std::cout << "------------+--------------------+-------------+----------+" << std::endl;
	std::cout << "|     " << vec[0] << "     |          " << vec[1] << "         |      " << vec[2] << "      |     " << vec[3] << "    |" << std::endl;
	std::cout << "------------+--------------------+-------------+----------+" << std::endl;
	std::cout << std::fixed;
	std::cout.precision(1);
}
void print_matrix(std::vector<std::vector<double>> A)
{
	std::cout << std::endl;
	std::cout << "+---------------+-----+-----+-----+-----+";
	for (int i = 0; i < 5; i++)
	{
		std::cout << std::endl;
		for (int j = 0; j < 5; j++)
		{
			if (j == 0)
			{
				if (i == 0)
					std::cout << "|   Критерий->  |  ";
				if (i == 1)
				{
					std::cout << "+---------------+-----+-----+-----+-----+" << std::endl;
					std::cout << "|       A       | ";
				}
				if (i == 2)
				{
					std::cout << "+---------------+-----+-----+-----+-----+" << std::endl;
					std::cout << "|       B       | ";
				}
				if (i == 3)
				{
					std::cout << "+---------------+-----+-----+-----+-----+" << std::endl;
					std::cout << "|       C       | ";
				}
				if (i == 4)
				{
					std::cout << "+---------------+-----+-----+-----+-----+" << std::endl;
					std::cout << "|       D       | ";
				}
			}
			else
			{
				if (i == 0)
				{
					std::cout << std::fixed << std::setprecision(0) << j << "  |  ";
				}
				else
					std::cout << std::fixed << std::setprecision(1) << A[i][j] << " | ";
			}
		}
	}
	std::cout << std::endl << "+---------------+-----+-----+-----+-----+";
}
void print_Matrix(std::vector<std::vector<double>> A)
{
	std::cout << std::endl;
	std::cout << "+---------------+-----+-----+-----+-----+-------------------+---------------------------------+";
	for (int i = 0; i < 5; i++)
	{
		std::cout << std::endl;
		for (int j = 0; j < 7; j++)
		{
			if (j == 0)
			{
				if (i == 0)
					std::cout << "|               |  ";
				if (i == 1)
				{
					std::cout << "+---------------+-----+-----+-----+-----+-------------------+---------------------------------+" << std::endl;
					std::cout << "|       A       | ";
				}
				if (i == 2)
				{
					std::cout << "+---------------+-----+-----+-----+-----+-------------------+---------------------------------+" << std::endl;
					std::cout << "|       B       | ";
				}
				if (i == 3)
				{
					std::cout << "+---------------+-----+-----+-----+-----+-------------------+---------------------------------+" << std::endl;
					std::cout << "|       C       | ";
				}
				if (i == 4)
				{
					std::cout << "+---------------+-----+-----+-----+-----+-------------------+---------------------------------+" << std::endl;
					std::cout << "|       D       | ";
				}
			}
			else
			{
				if (i == 0)
				{
					if (j == 1)
						std::cout << std::fixed << std::setprecision(0) << "A" << "  |  ";
					if (j == 2)
						std::cout << std::fixed << std::setprecision(0) << "B" << "  |  ";
					if (j == 3)
						std::cout << std::fixed << std::setprecision(0) << "C" << "  |  ";
					if (j == 4)
						std::cout << std::fixed << std::setprecision(0) << "D" << "  |  ";
					if (j == 5)
						std::cout << std::fixed << std::setprecision(0) << "Сумма по строке" << "  |  ";
					if (j == 6)
						std::cout << std::fixed << std::setprecision(0) << "Нормированная сумма по строке" << "  |  ";
				}
				else
				{
					if (j < 5)
					{
						std::cout << std::fixed << std::setprecision(1) << A[i][j] << " | ";
					}
					if (j == 5)
					{
						std::cout << std::fixed << std::setprecision(3) << std::setw(17) << A[i][j] << " | ";
					}
					if (j == 6)
					{
						std::cout << std::fixed << std::setprecision(3) << std::setw(31) << A[i][j] << " | ";
					}
				}
			}
		}
	}
	std::cout << std::endl << "+---------------+-----+-----+-----+-----+-------------------+---------------------------------+";
}
void print_Matrix_(std::vector<std::vector<double>> A)
{
	std::cout << std::endl;
	std::cout << "+---------------+-----+-----+-----+-----+-------------------+---------------------------------+";
	for (int i = 0; i < 5; i++)
	{
		std::cout << std::endl;
		for (int j = 0; j < 7; j++)
		{
			if (j == 0)
			{
				if (i == 0)
					std::cout << "|               |  ";
				if (i == 1)
				{
					std::cout << "+---------------+-----+-----+-----+-----+-------------------+---------------------------------+" << std::endl;
					std::cout << "|       1       | ";
				}
				if (i == 2)
				{
					std::cout << "+---------------+-----+-----+-----+-----+-------------------+---------------------------------+" << std::endl;
					std::cout << "|       2       | ";
				}
				if (i == 3)
				{
					std::cout << "+---------------+-----+-----+-----+-----+-------------------+---------------------------------+" << std::endl;
					std::cout << "|       3       | ";
				}
				if (i == 4)
				{
					std::cout << "+---------------+-----+-----+-----+-----+-------------------+---------------------------------+" << std::endl;
					std::cout << "|       4       | ";
				}
			}
			else
			{
				if (i == 0)
				{
					if (j == 1)
						std::cout << std::fixed << std::setprecision(0) << "1" << "  |  ";
					if (j == 2)
						std::cout << std::fixed << std::setprecision(0) << "2" << "  |  ";
					if (j == 3)
						std::cout << std::fixed << std::setprecision(0) << "3" << "  |  ";
					if (j == 4)
						std::cout << std::fixed << std::setprecision(0) << "4" << "  |  ";
					if (j == 5)
						std::cout << std::fixed << std::setprecision(0) << "Сумма по строке" << "  |  ";
					if (j == 6)
						std::cout << std::fixed << std::setprecision(0) << "Нормированная сумма по строке" << "  |  ";
				}
				else
				{
					if (j < 5)
					{
						std::cout << std::fixed << std::setprecision(1) << A[i][j] << " | ";
					}
					if (j == 5)
					{
						std::cout << std::fixed << std::setprecision(3) << std::setw(17) << A[i][j] << " | ";
					}
					if (j == 6)
					{
						std::cout << std::fixed << std::setprecision(3) << std::setw(31) << A[i][j] << " | ";
					}
				}
			}
		}
	}
	std::cout << std::endl << "+---------------+-----+-----+-----+-----+-------------------+---------------------------------+";
}
void print_alternative(std::vector<double> Matrix)
{
	double max;
	std::string alternative;
	max = Matrix[0];
	for (int i = 0; i < Matrix.size(); i++)
	{
		if (Matrix[i] > max)
		{
			max = Matrix[i];
			if (i == 0)
				alternative = "A (Татьяна)";
			if (i == 1)
				alternative = "B (Лариса)";
			if (i == 2)
				alternative = "C (Наталья)";
			if (i == 3)
				alternative = "D (Ольга)";
		}
	}
	std::cout << std::endl << "Как видно из полученной интегральной оценки, наиболее приемлемой является альтернатива " << alternative << '.' << std::endl;
}
std::vector<std::vector<double>> matrix_sum(std::vector<std::vector<double>>& Matrix)
{
	double sum = 0;
	for (int i = 1; i < Matrix.size(); i++)
	{
		for (int j = 1; j < Matrix[i].size(); j++)
		{
			if (j < 5)
			{
				Matrix[i][5] += Matrix[i][j];
				sum += Matrix[i][j];
			}
		}
	}
	for (int i = 1; i < Matrix.size(); i++)
	{
		for (int j = 1; j < Matrix[i].size(); j++)
		{
			Matrix[i][6] = Matrix[i][5] / sum;
		}
	}
	return Matrix;
}
std::vector<double> normalize(std::vector<double>& weight)
{
	double s = 0;
	for (auto& pos : weight)
	{
		s += pos;
	}
	std::cout << "Нормализовав получим вектор ";
	std::cout << "( ";
	std::cout << std::fixed;
	std::cout.precision(2);
	for (auto& pos : weight)
	{
		pos = pos / s;
		std::cout << pos << "  ";
	}
	std::cout << ")";
	return weight;
}
std::vector<double> vector_criterion(std::vector<double>& vec, std::vector<double>& criterion)
{
	for (int i = 0; i < criterion.size(); i++)
	{
		for (int j = 0; j < criterion.size(); j++)
		{
			if (i != j)
			{
				if (vec[i] > vec[j])
					criterion[i]++;
				if (vec[i] == vec[j])
					criterion[i] += 0.5;
			}
		}
	}
	return criterion;
}
std::vector<double> rezult(std::vector<std::vector<double>> Matrix)
{
	std::vector<double> rezult(4);
	for (auto& pos : rezult)
		pos = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			rezult[i] += Matrix[i][j] * Matrix[j][4];
		}
	}
	return rezult;
}
double Evklidean_distance(point point1, point point2)
{
	return sqrt(pow((point1.x - point2.x), 2) + pow((point1.y - point2.y), 2));
}
double consistency_relation(std::vector<std::vector<double>> Matrix)
{
	std::vector<double> otn(4);
	for (auto& pos : otn)
		pos = 0;
	double otn_sogl = 0;
	int k = 0;
	for (int j = 1; j < 5; j++)
	{
		for (int i = 1; i < 5; i++)
		{
			otn[k] += Matrix[i][j];
		}
		otn[k] = otn[k] * Matrix[j][6];
		otn_sogl += otn[k];
		k++;
	}
	otn_sogl -= 4;
	otn_sogl = otn_sogl / 3;
	std::cout << std::endl << "Отношение согласованности = " << otn_sogl;
	return otn_sogl;
}
void vec_weight()
{
	std::vector<double> weight{ 6,3,5,8 };
	print_weight(weight);
	normalize(weight);
}
void metod_1()
{
	std::cout << std::endl << std::endl << std::endl << "\n1)Метод замены критериев ограничениями." << std::endl;
	std::vector<std::vector<double>> A(5);
	std::vector<double>vec;
	for (int i = 0; i < 5; i++)
	{
		A[i].resize(5);
		for (int j = 0; j < 5; j++)
		{
			A[i][j] = 0;
		}
	}
	std::cout << std::endl << "Составим матрицу оценок для альтернатив.";
	A[1] = { 0,6,7,3,4 };
	A[2] = { 0,8,3,2,7 };
	A[3] = { 0,4,6,7,5 };
	A[4] = { 0,5,8,6,3 };
	print_matrix(A);
	double Amax1 = 8;
	double Amax2 = 8;
	double Amax3 = 7;
	double Amin, Amax;
	std::cout << std::endl << "\nГлавный критерий - характер.";
	std::cout << std::endl << "Допустимая внешность не менее 0.2 * Amax1.";
	std::cout << std::endl << "Допустимые финансовые запросы не менее 0.5 * Amax2.";
	std::cout << std::endl << "Допустимая домовитость не менее 0.3 * Amax3.";
	//Поиск приемлемых решений
	for (int i = 1; i < 5; i++)
	{
		if (A[i][1] >= (0.2 * Amax1))//Допустимая внешность
		{
			if (A[i][2] >= (0.5 * Amax2))//Допустимые финансовые запросы
			{
				if (A[i][3] >= (0.3 * Amax3))//Допустимая домовитость
				{
					if (i == 1)
						vec.push_back(A[i][4]);
					if (i == 2)
						vec.push_back(A[i][4]);
					if (i == 3)
						vec.push_back(A[i][4]);
					if (i == 4)
						vec.push_back(A[i][4]);
				}
			}
		}
	}
	std::cout << std::endl << "\nПроведем нормировку матрицы.";
	for (int j = 1; j < 4; j++)
	{
		Amin = A[1][j];
		Amax = A[1][j];
		for (int i = 1; i < 5; i++)
		{
			if (A[i][j] <= Amin)
				Amin = A[i][j];
			if (A[i][j] >= Amax)
				Amax = A[i][j];
		}
		for (int i = 1; i < 5; i++)
			A[i][j] = (A[i][j] - Amin) / (Amax - Amin);
	}
	print_matrix(A);

	A[1] = { 0,6,7,3,4 };
	A[2] = { 0,8,3,2,7 };
	A[3] = { 0,4,6,7,5 };
	A[4] = { 0,5,8,6,3 };
	//На случай если выбрано несколько альтернатив
	std::cout << std::endl << "При заданных условиях приемлемыми являются следующие решения:";
	Amax = vec[0];
	for (int i = 0; i < vec.size(); i++)
	{
		if (vec[i] >= Amax)
			Amax = vec[i];
	}
	for (int i = 1; i < 5; i++)
	{
		if (Amax == A[i][4])
		{
			if (i == 1)
				std::cout << std::endl << "A (Татьяна)." << std::endl;
			if (i == 2)
				std::cout << std::endl << "B (Лариса)." << std::endl;
			if (i == 3)
				std::cout << std::endl << "C (Наталья)." << std::endl;
			if (i == 4)
				std::cout << std::endl << "D (Ольга)." << std::endl;
		}
	}
}
void metod_2()
{
	std::cout << std::endl << std::endl << std::endl << "\n2)Формирование и суждение множества Парето." << std::endl;
	//Главные критерии:домовитость по оси x,характер по оси y.
	//3,4
	//Евклидово расстояние 
	std::vector<std::vector<double>> Matrix;
	Matrix.resize(5);
	for (int i = 0; i < Matrix.size(); i++)
	{
		Matrix[i].resize(5);
	}
	std::vector<point> point_xy(4);
	double minx, miny, dist_min;
	Matrix[0] = { 0,0,0,0,0 };
	Matrix[1] = { 0,6,7,3,4 };
	Matrix[2] = { 0,8,3,2,7 };
	Matrix[3] = { 0,4,6,7,5 };
	Matrix[4] = { 0,5,8,6,3 };
	std::cout << std::endl << "Составим матрицу оценок для альтернатив:";
	print_matrix(Matrix);
	int j;
	for (int i = 1; i < Matrix.size(); i++)
	{
		j = i - 1;
		point P(Matrix[i][3], Matrix[i][4]);
		point_xy[j] = P;
	}
	point point_ytopia(10, 10);
	dist_min = Evklidean_distance(point_xy[0], point_ytopia);
	std::string alternative;
	std::vector<double> distance(4);
	for (auto& pos : distance)
		pos = 0;
	for (int i = 0; i < point_xy.size(); i++)
	{
		distance[i] = Evklidean_distance(point_xy[i], point_ytopia);
		if (Evklidean_distance(point_xy[i], point_ytopia) < dist_min)
		{
			if (i == 0)
				alternative = "A (Татьяна)";
			if (i == 1)
				alternative = "B (Лариса)";
			if (i == 2)
				alternative = "C (Наталья)";
			if (i == 3)
				alternative = "D (Ольга)";
			dist_min = Evklidean_distance(point_xy[i], point_ytopia);
		}
	}
	std::cout << std::endl << "\nТочка утопии: " << "(" << point_ytopia.x << ';' << point_ytopia.y << ")";
	std::cout << std::endl << "\nЕвклидово расстояние до точки утопии:";
	for (int i = 0; i < distance.size(); i++)
	{
		if (i == 0)
		{
			std::cout << std::endl << "A (Татьяна): " << distance[i];
		}
		if (i == 1)
		{
			std::cout << std::endl << "B (Лариса):  " << distance[i];
		}
		if (i == 2)
		{
			std::cout << std::endl << "C (Наталья): " << distance[i];
		}
		if (i == 3)
		{
			std::cout << std::endl << "D (Ольга):   " << distance[i];
		}
	}
	std::cout << std::endl << "\nРасстояние до точки утопии минимально для варианта " << alternative << '.' << std::endl;
	std::cout << "Значит альтернатива " << alternative << " оптимальна." << std::endl;
}
void metod_3()
{
	std::cout << std::endl << std::endl << std::endl << "\n3)Взвешивание и объединение критериев." << std::endl;
	std::vector<std::vector<double>> Matrix;
	std::vector<std::vector<double>> Matrix_normal;
	Matrix.resize(5);
	Matrix_normal.resize(5);
	for (int i = 0; i < Matrix.size(); i++)
	{
		Matrix[i].resize(5);
		Matrix_normal[i].resize(5);
		for (int j = 0; j < Matrix_normal.size(); j++)
			Matrix_normal[i][j] = 0;
	}
	Matrix[0] = { 0,0,0,0,0 };
	Matrix[1] = { 0,6,7,3,4 };
	Matrix[2] = { 0,8,3,2,7 };
	Matrix[3] = { 0,4,6,7,5 };
	Matrix[4] = { 0,5,8,6,3 };
	std::cout << std::endl << "Составим матрицу рейтингов альтернатив по критериям:";
	print_matrix(Matrix);
	std::cout << std::endl << "\nНормализуем её:";
	double sum;
	for (int j = 1; j < 5; j++)
	{
		sum = 0;
		for (int i = 1; i < 5; i++)
			sum += Matrix[i][j];
		for (int i = 1; i < 5; i++)
			Matrix_normal[i][j] = Matrix[i][j] / sum;
	}
	print_matrix(Matrix_normal);
	//Вектор весов критериев
	std::vector<double> weight{ 6,3,5,8 };
	std::vector<double> criterion(4);
	for (auto& pos : criterion)
		pos = 0;
	vector_criterion(weight, criterion);
	std::cout << std::endl << "\nСоставим экспертную оценку критериев и получим вектор весов критериев:" << std::endl;;
	for (auto& pos : criterion)
		std::cout << pos << std::endl;
	//Нормализуем его 
	std::cout << std::endl;
	normalize(criterion);
	std::cout << std::endl << "\nУмножим нормализованную матрицу на нормализованный вектор весов критериев и получим значения объединенного критерия для всех альтернатив:";
	std::vector<double> normal(4);
	for (auto& pos : normal)
		pos = 0;
	int k, m;
	m = 0;
	for (int i = 1; i < Matrix_normal.size(); i++)
	{
		k = 0;
		for (int j = 1; j < Matrix_normal[i].size(); j++)
		{
			normal[m] += Matrix_normal[i][j] * criterion[k];
			k++;
		}
		m++;
	}
	std::cout << std::fixed;
	std::cout.precision(3);
	std::cout << std::endl;
	for (int i = 0; i < normal.size(); i++)
	{
		if (i == 0)
			std::cout << "A (Татьяна): " << normal[i] << std::endl;
		if (i == 1)
			std::cout << "B (Лариса):  " << normal[i] << std::endl;
		if (i == 2)
			std::cout << "C (Наталья): " << normal[i] << std::endl;
		if (i == 3)
			std::cout << "D (Ольга):   " << normal[i] << std::endl;
	}
	print_alternative(normal);
}
void metod_4()
{
	std::cout << std::endl << std::endl << std::endl << "\n4)Метод анализа иерархий:" << std::endl;
	std::vector<std::vector<double>> Matrix1(5);
	std::vector<std::vector<double>> Matrix2(5);
	std::vector<std::vector<double>> Matrix3(5);
	std::vector<std::vector<double>> Matrix4(5);
	std::vector<std::vector<double>> Matrix5(5);
	std::vector<std::vector<double>> Matrix6(4);
	for (int i = 0; i < 5; i++)
	{
		Matrix1[i].resize(7);
		Matrix2[i].resize(7);
		Matrix3[i].resize(7);
		Matrix4[i].resize(7);
		Matrix5[i].resize(5);
		if (i != 4)
			Matrix6[i].resize(5);
	}
	//Внешность
	//Лариса Татьяна Ольга Наталья
	std::cout << std::endl << "Внешность:";
	Matrix1[0] = { 0,0,0,0,0,0,0 };
	Matrix1[1] = { 0,1,1. / 3,4,3,0,0 };                 //Татьяна {1  1/4  4  3}
	Matrix1[2] = { 0,3,1,8,4,0,0 };                     //Лариса {3  1  8  4}
	Matrix1[3] = { 0,1. / 4,1. / 8,1,1. / 3,0,0 };     //Наталья {1/4  1/8  1  1/3}
	Matrix1[4] = { 0,1. / 3,1. / 4,3,1,0,0 };         //Ольга {1/3  1/4  3  1}
	print_Matrix(matrix_sum(Matrix1));
	//Отношение согласованности
	consistency_relation(Matrix1);
	//Финансовые запросы
	//Ольга Татьяна Наталья Лариса
	std::cout << std::endl << std::endl << "Финансовые запросы:";
	Matrix2[0] = { 0,0,0,0,0,0,0 };
	Matrix2[1] = { 0,1,5,2,1. / 2,0,0 };               //Татьяна {1  5  2  1/2}   
	Matrix2[2] = { 0,1. / 5,1,1. / 2,1. / 7,0,0 };    //Лариса {1/5  1  1/2  1/7}
	Matrix2[3] = { 0,1. / 2,2,1,1. / 5,0,0 };        //Наталья {1/2  2  1  1/5}
	Matrix2[4] = { 0,2,7,5,1,0,0 };                 //Ольга {2  7  5  1}
	print_Matrix(matrix_sum(Matrix2));
	//Отношение согласованности
	consistency_relation(Matrix2);
	//Домовитость 
	//Наталья Ольга Татьяна Лариса 
	std::cout << std::endl << std::endl << "Домовитость:";
	Matrix3[0] = { 0,0,0,0,0,0,0 };
	Matrix3[1] = { 0,1,3,1. / 4,1. / 3,0,0 };            //Татьяна {1  3  1/4  1/3}
	Matrix3[2] = { 0,1. / 3,1,1. / 8,1. / 4,0,0 };      //Лариса  {1/3  1  1/8  1/4}
	Matrix3[3] = { 0,4,8,1,3,0,0 };                    //Наталья {4  8  1  3}
	Matrix3[4] = { 0,3,4,1. / 3,1,0,0 };              //Ольга  {3 4 1/3 1}
	print_Matrix(matrix_sum(Matrix3));
	//Отношение согласованности
	consistency_relation(Matrix3);
	//Характер 
	//Лариса Наталья Татьяна Ольга 
	std::cout << std::endl << std::endl << "Характер:";
	Matrix4[0] = { 0,0,0,0,0,0,0 };
	Matrix4[1] = { 0,1,1. / 4,1. / 3,3,0,0 };           //Татьяна {1  1/4  1/3  3}
	Matrix4[2] = { 0,4,1,3,8,0,0 };                    //Лариса  {4 1 3 8}
	Matrix4[3] = { 0,3,1. / 3,1,4,0,0 };                 //Наталья {3 1/3 1 4}
	Matrix4[4] = { 0,1. / 3,1. / 8,1. / 4,1,0,0 };   //Ольга  {1/3  1/8  1/4  1}
	print_Matrix(matrix_sum(Matrix4));
	//Отношение согласованности
	consistency_relation(Matrix4);
	//Оценка приоритетов критериев
	//Характер Домовитость Внешность Финансовые_запросы
	std::cout << std::endl << std::endl << "Оценка приоритетов критериев:";
	Matrix5[0] = { 0,0,0,0,0,0,0 };
	Matrix5[1] = { 0,1,3,1. / 3,1. / 4,0,0 };                   //Внешность {1  3  1/3  1/4}
	Matrix5[2] = { 0,1. / 3,1,1. / 4,1. / 8,0,0 };             //Финансовые запросы {1/3 1 1/4 1/8}
	Matrix5[3] = { 0,3,4,1,1. / 3,0,0 };                      //Домовитость{3 4 1 1/3}
	Matrix5[4] = { 0,4,8,3,1,0,0 };                          //Характер   {4  8  3  1}
	print_Matrix_(matrix_sum(Matrix5));
	//Отношение согласованности
	consistency_relation(Matrix5);
	int iter;
	for (int j = 0; j < 5; j++)
	{
		iter = 0;
		for (int i = 0; i < Matrix6.size(); i++)
		{
			iter++;
			if (j == 0)
				Matrix6[i][j] = Matrix1[iter][6];
			if (j == 1)
				Matrix6[i][j] = Matrix2[iter][6];
			if (j == 2)
				Matrix6[i][j] = Matrix3[iter][6];
			if (j == 3)
				Matrix6[i][j] = Matrix4[iter][6];
			if (j == 4)
				Matrix6[i][j] = Matrix5[iter][6];
		}
	}
	std::cout << std::endl << "\nСоставим матрицу(i – альтернатива, j - критерий) и умножим на столбец оценки приоритетов:";
	std::cout << std::endl << "\nМатрица (i – альтернатива, j - критерий):";
	for (int i = 0; i < Matrix6.size(); i++)
	{
		std::cout << std::endl;
		for (int j = 0; j < 4; j++)
			std::cout << Matrix6[i][j] << ' ';
	}
	std::cout << std::endl << "\nCтолбец оценки приоритетов:" << std::endl;
	for (int i = 0; i < Matrix6.size(); i++)
		std::cout << Matrix6[i][4] << ' ' << std::endl;
	std::cout << std::endl << "Результат:" << std::endl;
	for (int i = 0; i < Matrix6.size(); i++)
		std::cout << rezult(Matrix6)[i] << ' ' << std::endl;
	print_alternative(rezult(Matrix6));
}
/*Критерии:
{
1-Внешность
2-Финансовые запросы
3-Домовитость
4-Характер
}*/
int main()
{
	setlocale(LC_ALL, "rus");
	vec_weight();
	metod_1();
	metod_2();
	metod_3();
	metod_4();
	return 0;
}

