/*Escribir un programa que permita calcular el valor de una resistencia de 3 bandas, tomar en cuenta el código de color para calcular el valor, finalmente el
programa deberá mostrar el detalle de los colores de la resistencia y su valor en ohmios Ω.*/

#include <iostream>
#include <string.h>

using namespace std;

int calculoBanda1(int *num, int opcion);
int calculoBanda2(int *num, int opcion2);
int calculoBanda3(int *num, int opcion3);
void mostrarValor(int *num);

int main(){
    int opcion, opcion2, opcion3, num = 0;

    cout <<"Seleccione el color de la Primera banda: ";
    cout <<"\n1. Marron\n2. Rojo\n3. Naranja\n4. Amarillo\n5. Verde\n6. Azul\n7. Violeta\n8. Gris\n9. Blanco " << endl;
    cout <<"Opcion: "; cin >> opcion;
    cout <<"Seleccione el color de la Segunda banda: ";
    cout <<"\n\n1. Negro\n2. Marron\n3. Rojo\n4. Naranja\n5. Amarillo\n6. Verde\n7. Azul\n8. Violeta\n9. Gris\n10. Blanco " << endl;
    cout <<"Opcion: "; cin >> opcion2;
    cout <<"Seleccione el color de la Tercera banda: ";
    cout <<"\n\n1. Negro\n2. Marron\n3. Rojo\n4. Naranja\n5. Amarillo\n6. Verde\n7. Azul\n8. Violeta\n9. Gris\n10. Blanco " << endl;
    cout <<"Opcion: "; cin >> opcion3;

    int *ptrNum;

    ptrNum = &num;

    calculoBanda1(ptrNum, opcion); 
    calculoBanda2(ptrNum, opcion2);
    calculoBanda3(ptrNum, opcion3);
    mostrarValor(ptrNum);

    return 0;
}

int calculoBanda1(int *num, int opcion){

    switch(opcion){
        case 1: *num += 1; break; //
        case 2: *num += 2; break;
        case 3: *num += 3; break;
        case 4: *num += 4; break;
        case 5: *num += 5; break;
        case 6: *num += 6; break;
        case 7: *num += 7; break;
        case 8: *num += 8; break;
        case 9: *num += 9; break;
    }

    return *num;
}

int calculoBanda2(int *num, int opcion2){
    switch(opcion2){
        case 1: *num *= 10; break;
        
        case 2: *num *= 10;
        *num += 1; break;

        case 3: *num *= 10;
        *num += 2; break;
        
        case 4: *num *= 10;
        *num += 3; break;
        
        case 5: *num *= 10;
        *num += 4; break;
        
        case 6: *num*=10;
        *num += 5; break;
        
        case 7: *num*=10;
        *num += 6; break;
        
        case 8: *num*=10;
        *num += 7; break;
        
        case 9: *num*=10;
        *num += 8; break;
        
        case 10: *num*=10;
        *num += 9; break;
    }

    return *num;
}

int calculoBanda3(int *num, int opcion3){
    switch(opcion3){
        case 1: break;
        case 2: *num *= 10; break;
        case 3: *num *= 100; break;
        case 4: *num *= 1000; break;
        case 5: *num *= 10000; break;
        case 6: *num *= 100000; break;
    }

    return *num;
}

void mostrarValor(int *num){

    cout <<"\nEl valor de la resistencia es: " << *num <<" Ohmios" << endl;

}