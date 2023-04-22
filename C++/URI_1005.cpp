#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double A, B;
    double media;

    cout<<fixed<<setprecision(1);

    cin>>A>>B;

    media = ((A * 3.5) + (B * 7.5))/11;


    cout<<setprecision(5)<<"MEDIA = "<<media<<endl;
    return 0;
}
