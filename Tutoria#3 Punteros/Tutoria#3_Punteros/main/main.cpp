#include <iostream>
using namespace std;

void showVector(int* vector, int size) {

    cout << "\n Vector: \n\n";
    for (int i = 0; i < size;i++) {
        printf("| %d |\t", vector[i]);
    }
}
void showMatrix(int** matrix, int& size) {
    cout << "\n Matrix: \n\n";
    for (int i = 0; i < size;i++) {
        for (int j = 0; j < size;j++) {
            printf("| %d |\t", matrix[i][j]);
        }
        printf("\n");
    }
}
//1.1. Buscar caracter
int searchCharacter(char* phrase, char character) {
    int i = 0;
    while (phrase[i]!=NULL) {
        if (phrase[i]==character) {
            return i;
        }
        i++;
    }
    return -1;
}
//1.2. Vector con multiplos de un valor
int* loadVector(int number, int size) {
    int* vector = new int[size];
    vector[0] = number;
    for (int i = 1;i < size;i++) {
        vector[i] = (vector[i - 1]) + number;
    }
    return vector;

}

//1.3. Descarte de elementos
bool searchNumber(int* vector, int size, int element) {

    for (int i = 0;i < size;i++) {
        if (vector[i] == element) {
            return true;
        }
    }
    return false;
}
void discardElements(int* elements, int size) {
    int newSize = 1;
    int* newVector=new int[newSize];
    newVector[0] = elements[0];
    int* auxVector;
    for (int i = 1; i < size;i++) {
        if (!searchNumber(newVector,newSize,elements[i])) {
            auxVector = newVector;
            newSize++;
            newVector = new int[newSize];
            newVector = auxVector;
            newVector[newSize - 1] = elements[i];
        }
    }
    showVector(newVector, newSize);
}
//1.4. Numeros primos
int countDivisors(int number) {
    int counter = 0;
    for (int i = 1;i <= number;i++) {
        if (number % i == 0) {
            counter++;
        }
    }
    return counter;
}
void loadNumbersVector(int* firstVector, int* secondVector, int sizeSecondVector) {
    for (int i = 0; i < sizeSecondVector; i++) {
        firstVector[i] = *(secondVector + i);
    }
}
void loadPrimeNumbers() {
    int size = 0;
    int* primeNumbers = new int[0];
    int* auxNumbers;
    for (int i = 2; i <= 100; i++ ) {
        if (countDivisors(i)==2) {
            auxNumbers = primeNumbers;
            size++;
            primeNumbers = new int[size];
            loadNumbersVector(primeNumbers, auxNumbers, size-1);
            primeNumbers[size - 1] = i;
        }
    }
    showVector(primeNumbers, size);
}



//1.5. Matriz dinamica con valores triples
int** loadTripleMatrix(int* vector, int& size) {
    int** matrix = new int* [size];

    for (int i = 0;i < size;i++) {
        matrix[i] = new int[size];
        matrix[i][0] = vector[i];
        for (int j = 1;j < size;j++) {
            matrix[i][j] = matrix[i][j - 1] * 3;
        }
    }
    return matrix;
}
int main()
{
    int size = 0, number = 0;
    int* vector; int** matrix;

    printf("\n ---- 1.1. BUSCAR CARACTER ----\n");
    char* phrase=new char[100];
    char character=' ';
    printf("Digite una palabra: ");
    cin>>phrase;
    printf("Caracter a buscar: ");
    cin >> character;
    printf("La posicion del caracter es: %d", searchCharacter(phrase,character));
    cout << endl;

    printf("\n ---- 1.2 VECTOR CON MULTIPLOS DE UN VALOR ----\n\n");
    printf(" ---- Creacion Vector ----\n");
    printf("Digite el tamanno\n");
    scanf_s("%d",&size);
    printf("\n Digite un numero: ");
    scanf_s("%d", &number);
    vector = loadVector(number, size);
    showVector(vector, size);

    printf("\n\n ---- 1.3. DESCARTE DE ELEMENTOS ----\n");
    const int nSize = 7;
    int auxVector[nSize] = { 1,2,3,2,2,3,6 };
    int* elements=new int[nSize];
    elements = auxVector;
    discardElements(elements, nSize);

    printf("\n\n ---- 1.4. NUMEROS PRIMOS ----\n");
    loadPrimeNumbers();

    printf("\n\n ---- 1.5 MATRIZ DINAMICA CON VALORES TRIPLES ----\n");
    matrix = loadTripleMatrix(vector, size);
    showMatrix(matrix, size);


    printf("\n\n--- Prueba Punteros ---\n");
    int* pointer;
    pointer = vector;

    printf("Posicion 0: %d \n", *pointer);
    printf("Posicion 2: %d \n", *(pointer + 2));
}

