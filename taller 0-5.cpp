#include <iostream>
using namespace std;
main()
{
    int hombres, mujeres;
    double total;
    float porcentajeH, porcentajeM;
    
    cout<<"Ingresa la cantidad de hombres: " <<endl;
    cin>>hombres;
    
    cout<<"ingresa la cantidad de mujeres: " <<endl;
    cin>>mujeres;
   
   total = hombres + mujeres;
   
    porcentajeH = (hombres/total) * 100;
    porcentajeM = (mujeres/total) * 100;
    
    cout<<"porcentaje de hombres: " <<porcentajeH <<endl;
    cout<<"porcentaje de mujeres: " <<porcentajeM <<endl;
    
}
