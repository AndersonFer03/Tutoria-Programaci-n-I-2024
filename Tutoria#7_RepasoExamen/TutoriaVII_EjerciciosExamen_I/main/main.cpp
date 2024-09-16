
#include <iostream>
#include "professor.h"
#include "course.h"
#include "grade.h"
#include "academicHistory.h"
#include "career.h"
int main()
{
    Professor carlos = Professor("Carranza", "110918273", "Maestria");

    Course* discretas = new Course("Discretas", 50133,"EIF204", 2, carlos);
    Course* calculo = new Course("Calculo I", 50130, "MAT202", 1, carlos);
    Course* programacion = new Course("Programacion I", 50131, "EIF201", 1, carlos);
    Course* soporte = new Course("Soporte Tecnico", 50135, "EIF206", 2, carlos);

    Grade grade1(85.5, true, 1, discretas);
    Grade grade2(90.0, true, 2, calculo);
    Grade grade3(75.0, false, 2, programacion);
    Grade grade4(88.0, true, 2, soporte);

    AcademicHistory student;
    student.registerGrade(grade1);
    student.registerGrade(grade2);
    student.registerGrade(grade3);
    student.registerGrade(grade4);

    student.showCourses(1, 2);

    string* subjects = new string[16];
    subjects[0] = "Discretas";
    subjects[1] = "2";
    subjects[2] = "Calculo I";
    subjects[3] = "1";
    subjects[4] = "Programacion I";
    subjects[5] = "1";
    subjects[6] = "Redes";
    subjects[7] = "3";
    subjects[8] = "Ingenieria III";
    subjects[9] = "4";
    subjects[10] = "Operativos";
    subjects[11] = "3";
    subjects[12] = "Soporte";
    subjects[13] = "2";
    subjects[14] = "Aplicaciones moviles";
    subjects[15] = "4";

    Career* Sistemas= new Career();
    string** level=Sistemas->showCoursesXLevel(subjects, 16);
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            cout << level[i][j] << "\t";
        }
        cout << endl;
    }



}
