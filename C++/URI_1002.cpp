#include <iostream>
#include <iomanip> // Biblioteca para utilizar o setprecision

using namespace std;

int main()
{
    const double pi = 3.14159; // Definição de Constante
    double raio, area; // Declaração de variavel real de dupla precisao

    cin>>raio; //Scan double

    area = pi * (raio * raio);

    cout<<fixed<<setprecision(4); //Definir o numero de casas apos a virgula
    cout<<"A="<<area<<endl;

    return 0;
}
