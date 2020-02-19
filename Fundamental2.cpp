//要点
//アドレスに*をつけるとそのアドレスにあるメモリを扱える//

#include <iostream>
using namespace std;

int main(){
    int a; 
    int* p = &a;

    a = 0;
    cout << " a = " << a << endl << " *p = " << *p << endl;

    *p = 5;
    cout << " a = " << a << endl << " *p = " << *p << endl;
}