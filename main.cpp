#include <iostream>

using namespace std;

int main()
{
    int x, y, cont = 0, cont2 = 0, cont3 = 0, soma = 0;
    while (cont == 0){
        cin >> x;
        cin >> y;
        if (x <= 0 || y <= 0){
            cont++;
        }else{
            if (x >= y){
                cont2 = y;
                cont3 = x;
            }else{
                cont2 = x;
                cont3 = y;
            }
        }
        soma = 0;
        while (cont2 <= cont3){
            cout << cont2 << " ";
            soma = soma + cont2;
            if (cont2 == cont3){
                cout << "Sum=" << soma <<endl;
            }
            cont2++;
        }
    }
    return 0;
}
