#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int nFunc, horasTrabalhadas;
    double salario;

    cin>>nFunc>>horasTrabalhadas;
    cin>>salario;

    cout<<"NUMBER = "<<nFunc<<endl;
    cout<<fixed<<setprecision(2);
    cout<<"SALARY = U$ "<<(salario * horasTrabalhadas)<<endl;

    return 0;
}
