
#include "ListaPisos.h"
#include <iostream>

int main()
{
	ListaVentas* ventas = new ListaVentas();
	ListaEmpleados* empleados = new ListaEmpleados();
	ListaPisos* piso = new ListaPisos();
	ventas->InsertarOrdeEmp(200);
	ventas->InsertarOrdeEmp(100);
	ventas->InsertarOrdeEmp(50);
	empleados->InsertarOrdeEmp(ventas, "Carlos");
	ListaVentas* ventas2 = new ListaVentas();
	ventas2->InsertarOrdeEmp(500);
	ventas2->InsertarOrdeEmp(300);
	empleados->InsertarOrdeEmp(ventas2,"Karla");
	piso->Insertar(empleados);

	ListaEmpleados* empleadosSeg = new ListaEmpleados();
	ListaVentas* ventasSeg = new ListaVentas(NULL);
	empleadosSeg->InsertarOrdeEmp(ventasSeg, "Mario");
	piso->Insertar(empleadosSeg);

	ListaEmpleados* empleadosTerc = new ListaEmpleados();
	ListaVentas* ventas3 = new ListaVentas();
	ventas3->InsertarOrdeEmp(200);
	ventas3->InsertarOrdeEmp(100);
	empleadosTerc->InsertarOrdeEmp(ventas3, "Ana");
	ListaVentas* ventas4 = new ListaVentas();
	ventas4->InsertarOrdeEmp(500);
	empleadosTerc->InsertarOrdeEmp(ventas4, "Jose");
	ListaVentas* ventas5 = new ListaVentas(NULL);
	empleadosTerc->InsertarOrdeEmp(ventas5, "Sonia");
	piso->Insertar(empleadosTerc);

	ListaEmpleados* empleadosCuarto = new ListaEmpleados();
	ListaVentas* ventas6 = new ListaVentas();
	ventas6->InsertarOrdeEmp(1000);
	ventas6->InsertarOrdeEmp(100);
	ventas6->InsertarOrdeEmp(500);
	empleadosCuarto->InsertarOrdeEmp(ventas6, "Pedro");
	piso->Insertar(empleadosCuarto);

	piso->MostrarPiso();

	cout << "----- PISO MODIFICADO -----" << endl << endl;
	piso->CambiarPiso(3);
	piso->MostrarPiso();
	

}
