
#include <iostream>
#include <cstdlib>
using namespace std;

static int const COLUMNS = 5;
static int const ROWS = 5;
int matrix[ROWS][COLUMNS];

//1.1 Matriz Frame
void initializeFrame() {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            if (i==0||j==0||i==ROWS-1||j==COLUMNS-1) {
                matrix[i][j] = 1;
                continue;
            }
            matrix[i][j] = 0;
        }
    }
}

void print() {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLUMNS; j++) {
			cout << " | " << matrix[i][j] << "\t";
		}
		cout << " | \n";
	}
}
void initializeWithRandoms() {
	srand(time(0));
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
		{
			matrix[i][j] = rand() % 20;
		}
	}
}
//1.2 Ordenamiento Burbuja
void swap(int& i, int& j) {

	int temp = i;
	i = j;
	j = temp;
}
void swapRow(int firstRow[COLUMNS], int secondRow[COLUMNS]) {
	for (int i = 0; i < COLUMNS; i++) {
		swap(firstRow[i], secondRow[i]);
	}
}
void bubbleSort(int key1, int key2) {
	for (int j = ROWS - 1; j > 0; j--) {
		for (int i = 0; i < j; i++) {
			if ((matrix[i][key1] > matrix[i + 1][key1]) || ((matrix[i][key1] == matrix[i + 1][key1]) 
				&& (matrix[i][key2] > matrix[i + 1][key2]))) {

				swapRow(matrix[i], matrix[i + 1]);
			}
		}
	}
}

//1.4 Ordenamiento de columnas por suma
void swapColumns(int col1, int col2) {
	for (int i = 0; i < ROWS;i++) {
		swap(matrix[i][col1], matrix[i][col2]);
	}
}
void arrayLoad(int sumColumns[]) {
	int add = 0;
	for (int j = 0; j < COLUMNS; j++) {
		for (int i = 0; i < ROWS; i++) {
			add += matrix[i][j];
		}
		sumColumns[j]=add;
		add = 0;
	}
}
void printVector(int sumColumns[]) {
	cout << "\n -- Vector de sumas de columnas --\n";
	for (int j = 0; j < COLUMNS; j++) {
		cout << " | " << sumColumns[j] << "\t";
	}
	cout << " | \n\n";
}
void  additionSort() {
	int sumColumns[ROWS];
	arrayLoad(sumColumns);
	printVector(sumColumns);
	for (int j = ROWS - 1; j > 0; j--) {
		for (int i = 0; i < j;i++) {
			if (sumColumns[i] > sumColumns[i + 1]) {
				swapColumns(i, i + 1);
				swap(sumColumns[i], sumColumns[i + 1]);
			}
		}
	}

}
//1.5 Sudoku valido
static int const COLUMNS_SUDOKU = 9;
static int const ROWS_SUDOKU = 9;
int sudoku[ROWS_SUDOKU][COLUMNS_SUDOKU];

void initializeSudokuWithRandoms() {
    srand(time(0));
    for (int i = 0; i < COLUMNS_SUDOKU; i++)
    {
        for (int j = 0; j < ROWS_SUDOKU; j++)
        {
            sudoku[i][j] = rand() % 20;
        }
    }
}

void initializeSudoku() {
    sudoku[0][0] = 5;
    sudoku[0][1] = 3;
    sudoku[0][2] = 0;
    sudoku[0][3] = 0;
    sudoku[0][4] = 7;
    sudoku[0][5] = 0;
    sudoku[0][6] = 0;
    sudoku[0][7] = 0;
    sudoku[0][8] = 0;

    sudoku[1][0] = 6;
    sudoku[1][1] = 0;
    sudoku[1][2] = 0;
    sudoku[1][3] = 1;
    sudoku[1][4] = 9;
    sudoku[1][5] = 5;
    sudoku[1][6] = 0;
    sudoku[1][7] = 0;
    sudoku[1][8] = 0;

    sudoku[2][0] = 0;
    sudoku[2][1] = 9;
    sudoku[2][2] = 8;
    sudoku[2][3] = 0;
    sudoku[2][4] = 0;
    sudoku[2][5] = 0;
    sudoku[2][6] = 0;
    sudoku[2][7] = 6;
    sudoku[2][8] = 0;

    sudoku[3][0] = 8;
    sudoku[3][1] = 0;
    sudoku[3][2] = 0;
    sudoku[3][3] = 0;
    sudoku[3][4] = 6;
    sudoku[3][5] = 0;
    sudoku[3][6] = 0;
    sudoku[3][7] = 0;
    sudoku[3][8] = 3;

    sudoku[4][0] = 4;
    sudoku[4][1] = 0;
    sudoku[4][2] = 0;
    sudoku[4][3] = 8;
    sudoku[4][4] = 0;
    sudoku[4][5] = 3;
    sudoku[4][6] = 0;
    sudoku[4][7] = 0;
    sudoku[4][8] = 1;

    sudoku[5][0] = 7;
    sudoku[5][1] = 0;
    sudoku[5][2] = 0;
    sudoku[5][3] = 0;
    sudoku[5][4] = 2;
    sudoku[5][5] = 0;
    sudoku[5][6] = 0;
    sudoku[5][7] = 0;
    sudoku[5][8] = 6;

    sudoku[6][0] = 0;
    sudoku[6][1] = 6;
    sudoku[6][2] = 0;
    sudoku[6][3] = 0;
    sudoku[6][4] = 0;
    sudoku[6][5] = 0;
    sudoku[6][6] = 2;
    sudoku[6][7] = 8;
    sudoku[6][8] = 0;

    sudoku[7][0] = 0;
    sudoku[7][1] = 0;
    sudoku[7][2] = 0;
    sudoku[7][3] = 4;
    sudoku[7][4] = 1;
    sudoku[7][5] = 9;
    sudoku[7][6] = 0;
    sudoku[7][7] = 0;
    sudoku[7][8] = 5;

    sudoku[8][0] = 0;
    sudoku[8][1] = 0;
    sudoku[8][2] = 0;
    sudoku[8][3] = 0;
    sudoku[8][4] = 8;
    sudoku[8][5] = 0;
    sudoku[8][6] = 0;
    sudoku[8][7] = 7;
    sudoku[8][8] = 9;
}

void printBoard() {
    for (int i = 0; i < ROWS_SUDOKU; i++) {
        for (int j = 0; j < COLUMNS_SUDOKU; j++) {
            cout << " | " << sudoku[i][j] << "\t";
        }
        cout << " | \n";
    }
}

bool checkRows() {
    for (int i = 0; i < ROWS_SUDOKU; i++) {
        for (int j = 0; j < COLUMNS_SUDOKU-1; j++) {
            for (int z = j+1; z < COLUMNS_SUDOKU; z++) {
                if (sudoku[i][j]==sudoku[i][z] && sudoku[i][j]!=0) {
                    return false;
                }
            }
        }
    }
    return true;
}

bool checkColumns() {
    for (int j = 0; j < COLUMNS_SUDOKU; j++) {
        for (int i = 0; i < ROWS_SUDOKU-1; i++) {
            for (int z = i + 1; z < ROWS_SUDOKU; z++) {
                if (sudoku[i][j] == sudoku[z][j] && sudoku[i][j] != 0) {
                    return false;
                }
            }
        }
    }
    return true;
}
bool checkBoard() {
    if (checkColumns() && checkRows()) {
        return true;
    }
    return false;
}

int main()
{
    initializeFrame();
    cout << "--- Matriz Frame ---\n";
    print();
    cout << "\n\n --- Matriz Numeros Random ---\n\n";
	initializeWithRandoms();
	print();
	cout << "--- Ordenamiento Burbuja ---\n";
	bubbleSort(0, 1);
	print();


	cout << "\n\n--- Ordenamiento por Suma ---" << endl;
	print();
	cout << endl << " Orden: " << endl;
	additionSort();
	print();

	cout << "\n\n--- Sudoku ---" << endl;
	initializeSudoku();
	printBoard();
    cout << endl;
    if (checkBoard()) {
        cout << "RESPUESTA: El tablero de Sudoku es valido.\n" << endl;
    }
    else {
        cout << "RESPUESTA: El tablero de Sudoku NO es valido.\n" << endl;
    }

}

