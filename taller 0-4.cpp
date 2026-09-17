#include <iostream>
using namespace std;
main()

{
    float parcial1, parcial2, parcial3, examenF, trabajoF, promedioP, notaF;
    
    cout<<"ingrese nota del parcial 1:" <<endl;
    cin>>parcial1;
    
    cout<<"ingrese nota del parcial 2: " <<endl;
    cin>>parcial2;
    
    cout<<"ingrese nota del parcial 3: " <<endl;
    cin>>parcial3;
    
    cout<<"ingrese nota del examen final: " <<endl;
    cin>>examenF;
    
    cout<<"ingrese nota del trabajo final: " <<endl;
    cin>>trabajoF;
    
    promedioP = (parcial1+parcial2+parcial3) / 3;
    
    notaF = (promedioP*0.55)+(examenF*0.3)+(trabajoF*0.15);
    
    cout<<"la nota final es de: "<<notaF<<".";
}