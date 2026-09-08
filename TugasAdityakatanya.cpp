#include <iostream>
using namespace std;
int main() {
    int arr3dimensikatanya [3][3][4] = {
        {
            {2, 4, 6, 8},
            {10, 12, 14, 16},
            {18, 20, 22, 24}
        },
        {
            {26, 28, 30, 32},
            {34, 36, 38, 40},
            {42, 44, 46, 48}
        },
        {
            {50, 52, 54, 56},
            {58, 60, 62, 64},
            {66, 68, 70, 72}
        }
    };
 for (int lapis = 0; lapis < 3; lapis++) {
        cout << "Lapis " << lapis + 1 << endl;

        for (int baris = 0; baris < 3; baris++) {
            for (int kolom = 0; kolom < 4; kolom++) {
                cout << arr3dimensikatanya[lapis][baris][kolom] << "\t";
            }
            cout << endl;
        }

        cout << endl;
    }
}