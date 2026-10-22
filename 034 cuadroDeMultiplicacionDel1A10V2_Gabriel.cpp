#include <iostream>

using namespace std;

int main()
{
    for (int ii = 1; ii <= 10; ii++) {
        cout << "Tabla del : " << ii << endl;

        for (int jj = 1; jj <= 10; jj++) {
            cout << ii << " x " << jj << " = " << ii * jj << endl;
        }
    }

    return 0;
}
