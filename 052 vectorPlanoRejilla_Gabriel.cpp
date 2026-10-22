#include <iostream>

using namespace std;

int main()
{
    int rejilla[2][3] = {{14, 15, 16}, {8, 13, 20}};
    int ii, jj;

    cout << "ARREGLO BIDIMENSIONAL MATRIZ"<<endl;
    cout << "Notas del estudiante  "<<rejilla[0][1]<<endl;

    for (int ii = 0; ii < 2; ii++) {
        for (int jj = 0; jj < 3; jj++) {
            cout << rejilla[ii][jj] << "\t";
        }
        cout << endl;
    }

    return 0;
}
