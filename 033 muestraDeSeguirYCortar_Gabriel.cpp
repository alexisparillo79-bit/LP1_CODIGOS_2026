#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    for(int ii = 1; ii <= 10; ii++) {
        if(ii == 3) {
            continue;
        }
        if(ii == 8) {
            break;
        }

        cout << "Numero " << ii << endl;
    }
    return 0;
}
