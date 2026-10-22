#include <iostream>
using namespace std;

int main()
{
    int ii = 1,cant= 10;

    cout << "TABLA DEL 7"<< endl;

    do{
        cout<<"7 x "<<ii<< " = "<<ii*7<<endl;
        ii=ii+1;
    }while(ii<=cant);

    return 0;
}
