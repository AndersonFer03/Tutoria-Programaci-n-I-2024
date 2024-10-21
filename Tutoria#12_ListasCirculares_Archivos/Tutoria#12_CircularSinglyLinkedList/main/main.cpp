
#include <iostream>
#include "List.h"
#include "FileManager.h"
#include <windows.h>
int main()
{
    List list = List();
    cout << "--- CURSOS CUARTO SEMESTRE ---" << endl << endl;
    Course* arquitectura = new Course("Arquitectura", 40, 50444);
    Course* datos = new Course("Estructura de Datos", 35, 50440);
    Course* probabilidad = new Course("Probabilidad", 20, 50453);
    list.insertHeader(arquitectura);
    list.insertHeader(datos);
    list.insertHeader(probabilidad);
    list.print();

    cout << endl << endl;
    cout << "--- Invertir una Lista ---" << endl;
    list.invertList();
    list.print();
    cout << endl << endl;

    // Añadir la carpeta 'files' al path
    string filePath = "Courses.txt";
    FileManager fm;
    fm.save(filePath,list);
    cout << "\n\n--- CURSOS TERCER SEMESTRE ---" << endl << endl;
    List second = List();
    Course* soporte = new Course("Soporte Tecnico", 50, 40563);
    Course* algebra = new Course("Algebra Lineal", 45, 40571);
    Course* programacion = new Course("Programacion II", 32, 40567);
    second.insertHeader(soporte);
    second.insertHeader(algebra);
    second.insertHeader(programacion);
    second.print();
    string path = "Courses.txt";
    fm.addText(path,second);

    List newList = List();
    cout << endl << endl;
    cout << "--- Archivo de texto cargado ---" << endl;
    fm.load(path,newList);
    newList.print();
    cout << endl;
}
