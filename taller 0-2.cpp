#include <iostream>
using namespace std;

main()

{float compra, descuento, tasa_de_descuento, total_final;

cout<<"ingresa el valor de la compra: ";
cin>>compra;

cout<<"que descuento quires aplicar: ";
cin>>tasa_de_descuento;


descuento = compra*tasa_de_descuento;

total_final = compra - descuento;

cout<<"El total a pagar es " <<total_final;
    
}