#include <iostream>
using namespace std;
main()
    {
    //T0 ejercicio 1
    //Variables de entrada
    int capital;
    
    int tiempo;
    //Variables de salida
    int ganancia;
    //Condiciones
    cout<<"Ingresa el valor del capital: ";
    cin>>capital;
    
    cout<<"En cuanto tiempo: ";
    cin>>tiempo;
   
    ganancia = capital*tiempo*0.02; // es igual que esto capital*1.02 - capital;
    
    cout<<"La ganancia obtenida fue: "<<ganancia<< " pesos en " <<tiempo<< " meses.";
    }

