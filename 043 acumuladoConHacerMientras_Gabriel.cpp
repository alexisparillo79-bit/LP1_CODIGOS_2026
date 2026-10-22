#include <iostream>
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int ii=1, acumulado = 0 ;
    do{
        cout<<"Numero :"<<ii<<endl;
        acumulado = ii + 1;
        ii=ii+1;
    }while(ii<=10);

    cout << "La suma total es : " << acumulado ;

    return 0;
}
