#include <iostream>
#include <math.h>

using namespace std;

void show_values_table();
int get_band();
int get_band1();
void calculate_resistance(int, int, int, int*);

int main (){
    
    show_values_table();
    int band1, band2, band3, resistance = 0;
    int* pResistance = &resistance;
    cout << "Ingrese el numero correspondiente al color de la 1a banda: "; 
    band1 = get_band1();
    cout << "Ingrese el numero correspondiente al color de la 2a banda: ";
    band2 = get_band();
    cout << "Ingrese el numero correspondiente al color de la 3a banda: ";
    band3 = get_band();

    calculate_resistance(band1, band2, band3, pResistance);

    cout << "\nLa resistencia tiene un valor de " << resistance << " Ohms";

    return 0;
}


void show_values_table(){
    
cout << "\n+-------+-------------+---+-------+---------+";
cout << "\n| Valor |    Color    | * | Valor |  Color  |";
cout << "\n+-------+-------------+---+-------+---------+";
cout << "\n|     0 | -Sin Banda- |   |     5 | Verde   |";
cout << "\n|     1 | Marron      |   |     6 | Azul    |";
cout << "\n|     2 | Rojo        |   |     7 | Violeta |";
cout << "\n|     3 | Naranja     |   |     8 | Gris    |";
cout << "\n|     4 | Amarillo    |   |     9 | Blanco  |";
cout << "\n+-------+-------------+---+-------+---------+\n";
}

int get_band(){
    int band = 0;
    cin >> band;
    while (band < 0 || band > 9){
        cout << "Ese valor no esta en la tabla!\nIntenta de nuevo";
        cin >> band;
    }
    return band;
}
int get_band1(){
    int band = 0;
    cin >> band;
    while (band < 1 || band > 9){
        if (band == 0)
            cout << "Las resistencias tienen al menos 1 banda!\nIntenta de nuevo: ";
        else
        cout << "Ese valor no esta en la tabla!\nIntenta de nuevo: ";
        cin >> band;
    }
    return band;
}

void calculate_resistance(int band1, int band2, int band3,int* pResistance){
    *pResistance += band1;
    if (band2 != 0) 
        *pResistance = (*pResistance * 10) + band2;
    else
        *pResistance = *pResistance * 10;
    *pResistance = *pResistance * pow(10,band3);
}