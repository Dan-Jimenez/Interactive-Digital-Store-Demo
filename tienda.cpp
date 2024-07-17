#include <iostream>
#include <fstream>
#include <sstream>
#include "tienda.h"
#include "inventario.h"
using namespace std;

void Tienda::proceso(){
    Carrito c;
    Producto p;
    Inventario i;
    int p1, c1, opcion;

    menu_i:
    cout << endl;
    menu_principal();
    cout << "\e[1mSeleccionar opcion: \e[0m";
    cin >> opcion;
    if (opcion == 1) {
        cout << "\nSeleccionar Producto" << endl;
        mostrar_catalogo();
        cout << "\e[1mIngrese el numero del Producto (-1 para cancelar): \e[0m";
        cin >> p1;
        if (p1 == -1)
        {
            goto menu_i;
        }
        insuficiencia:
        cout << "\e[1mIngrese la cantidad a comprar (-1 para cancelar): \e[0m";
        cin >> c1;
        cout << endl;
        if (c1 == -1)
        {
            goto menu_i;
        }
        if (c1 > i.obtener_producto(p1).get_disponibilidad() || c1 < 0) 
        {
            cout << "Fuera de stock (Seleccione una cantidad válida)\n";
            goto insuficiencia;
        }
        Producto p_a = i.obtener_producto(p1);
        p_a.set_disponibilidad(c1);
        c.agregarProductoCarrito(p_a);
        reducir_disponibilidad(p1,c1);
        goto menu_i;
    }

    else if (opcion == 2) {
        cout <<"\nCarrito de Compras\n";
        c.mostrar_carrito();
        cout << "\n";
        goto menu_i;
    }

    else if (opcion == 3){
        cout << "El total de tu compra es: $" << c.suma_total() << endl;
        cout << "Gracias por comprar en JULDAN Store!" << endl;
    }

    else if(opcion == 4){
        salir();
    }
}

void Tienda::menu_principal(){
    cout << "-- Bienvenido a JULDAN Store --" << endl;
    cout << "----- Menu Principal -----" << endl;
    cout << "1) Seleccionar Producto\n2) Ver Carrito de Compras\n3) Terminar Compra\n4) Salir" << endl;
}

Producto Tienda::producto_carrito(int pos){
    return catalogo.obtener_producto(pos);
}

void Tienda::reducir_disponibilidad(int pos, int cant){
    catalogo.reducir_disponibilidad(pos,cant);
}

void Tienda::mostrar_catalogo(){
    catalogo.mostrar_inventario();
}

void Tienda::salir(){
    exit(0);
}


