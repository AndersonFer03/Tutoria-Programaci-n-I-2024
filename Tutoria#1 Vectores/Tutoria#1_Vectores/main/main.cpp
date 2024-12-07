
#include <iostream>
using namespace std;
void print(int vector[], int size) {
	for (int i = 0;i < size; i++) {
		cout << " | " << vector[i] << " | ";
	}
}
//1.1 Invertir Vector
void reverse(int vector[], int size) {
	int aux = 0;
	int j = size - 1;
	for (int i = 0; i < j; i++,j--) {
		aux = vector[j];
		vector[j] = vector[i];
		vector[i] = aux;
	}
	print(vector,size);
}

//1.2 Análisis de notas
int getAverage(int grades[], int size) {
	int amount = 0;
	for (int i = 0; i < size;i++) {
		amount += grades[i];
	}
	amount = amount / size;
	return amount;
}
int getHigherGrade(int grades[], int size) {
	int grade = 0;
	for (int i = 0;i < size;i++) {
		if (grade < grades[i]) {
			grade = grades[i];
		}
	}
	return grade;
}
int getLowerGrade(int grades[], int size) {
	int grade = grades[0];
	for (int i = 1;i < size;i++) {
		if (grade > grades[i]) {
			grade = grades[i];
		}
	}
	return grade;
}

//1.4 Corrimiento circular hacia la izquierda
void swap(int& i, int& j) {
	int aux = j;
	j = i;
	i = aux;
}
void slipping(int vector[], int size, int numberTimes) {
	for (int a = 0; a < numberTimes;a++) {
		for (int i = 0; i < size-1;i++) {
			swap(vector[i], vector[i+1]);
		}
	}
	print(vector,size);
}

int main()
{
	int const size = 7;
	int first[size] = {8,7,1,5,4,6,2};
	print(first,size);
	cout << endl << endl;
	cout << "--- Invertido ---" << endl;
	reverse(first,size);
	cout << endl << endl;
	
	cout << "--- Analisis de notas ---" << endl;
	cout << "Notas obtenidas por un alumno \n\n";
	int const amountGrades = 5;
	int grades[amountGrades];
	for (int i = 0; i < amountGrades;i++) {
		cout << "Digite la nota obtenida " << i+1 << " :";
		cin >> grades[i];
	}
	cout << endl << endl;
	print(grades, amountGrades);
	cout << endl << endl;
	cout << "Promedio de notas obtenido: " << getAverage(grades, amountGrades) <<endl;
	cout << "Calificacion mas alta obtenida: " << getHigherGrade(grades, amountGrades) << endl;
	cout << "Calificacion mas baja obtenida: " << getLowerGrade(grades, amountGrades) << endl;

	cout << endl << endl;
	int numberTimes = 0;
	cout << "--- Corrimiento ---" << endl;
	cout << "Vector:" << endl;
	print(first, size);
	cout << "\nVeces que desea correr el vector" << endl;
	cin >>numberTimes ;
	cout << endl;
	slipping(first,size, numberTimes);
}

