#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int importeVenta, sucursal, sucursalAct, nroVendedor, diaVenta;
	char tipoCliente, editorial; 
	int max = 0, diaMax, sucursalMax, vtaMayor, vendedorMax;
	int comisiones, contEditorialA, contEditorialB, contEditorialP; 
	cout << "Ingrese importe de la venta, sucursal, nro de vendedor, dia:" << endl;
	cin >> importeVenta;
	cin >> sucursal;
	cin >> nroVendedor;
	cin >> diaVenta;
	cout << "Tipo de cliente y editorial:" << endl;
	cin >> tipoCliente;
	cin >> editorial;
	
	while (importeVenta!=0) {
		
		sucursalAct = sucursal;
		comisiones = 0;
		contEditorialA = 0;
		contEditorialB = 0;
		contEditorialP = 0;
		
		while (sucursalAct==sucursal) {
			
			switch (editorial) {
			case 'A':
				comisiones+= (importeVenta*0.10);
				contEditorialA++;
				break;
			case 'B': 
				comisiones+= (importeVenta*0.12);
				contEditorialB++;
				break;
			case 'P': 
				comisiones+= (importeVenta*0.15);
				contEditorialP++;
				break;
			}
			
			if (max==0) {
				vtaMayor = importeVenta;
				max = 1;
				sucursalMax= sucursalAct;
				diaMax = diaVenta;
				vendedorMax = nroVendedor;
			} else if (importeVenta>vtaMayor) {
				vtaMayor= importeVenta;
				sucursalMax = sucursalAct;
				diaMax = diaVenta;
				vendedorMax = nroVendedor;
			}
			cout << "Ingrese sucursal, nro de vendedor, dia e importe de la venta" << endl;
			cin >> sucursal;
			cin >> nroVendedor;
			cin >> diaVenta;
			cin >> importeVenta;
			cout << "Tipo cliente y editorial:" << endl;
			cin >> tipoCliente;
			cin >> editorial;
			
		}
		
		cout << "Comisiones totales pagadas por sucursal " << sucursalAct << ": " << endl;
		cout << "$" << comisiones << endl;
		cout << "Cantidad de libros vendidos por editorial: " << endl;
		cout << "Editorial Alvarez: " << contEditorialA << endl;
		cout << "Editorial Benitez: " << contEditorialB << endl;
		cout << "Editorial Perez: " << contEditorialP << endl;
	}
	
	cout << "Vendedor que realizo la venta individual de mayor importe: " << vendedorMax << endl;
	cout << "Sucursal: "  << sucursalMax << endl;
	cout << "Dia de la venta: " << diaMax << endl;
	
	return 0;
}

