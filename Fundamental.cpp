
#include <iostream>
using namespace std;

Hello_world
int main(){
    cout << "Hello World" << endl;
    return 0;
}

//stdは繰り返し使用するため「using namespace(名前空間) std;」と記述.<< は演算子
//count、endlなどは「std」という名前空間にある　#include <iostream>はヘッダファイル

int main(){
    cout << 2 << '+' << 3 << '=' << 2 + 3 << endl;
    cout << "π=" << 3.141592 << '....' << endl;
}

int main(){
    cout << "2 + 2 = " << 2 + 2 << endl;
    cout << "1 - 5 = " << 1 - 5 << endl;
    cout << "2 * 9 = " << 2 * 9 << endl;
    cout << "9 / 3 = " << 9 / 3 << endl;
    cout << "9 / 2 = " << 9 / 2 << endl;
    }

int main(){
    cout << "9 / 2 = " << 9 / 2 << endl;
    cout << "9 % 2 = " << 9 % 2 << endl;
    cout << "2 + 2 * 4 = " << 2 + 2 * 4 << endl;
    cout << "(1 - 5) / 2 = " << (1 - 5) / 2 << endl;
}


#include <iostream>
using namespace std;

int main(){
    int a;

    a = 0;
    cout << "a = " << a << endl;

    a = 5;
    cout << "2a = " << a*2 << endl;
}

#include <iostream>
using namespace std;

int main(){
    int a = 0;

    //変数の値の足し込み
    a += 2;
    cout << "a + 2    -> = " << a << endl;
    
    //インクリメント
    ++a;
    cout << "++a      -> =" << a << endl;

    --a;
    cout << "--a      -> =" << a << endl;

    //複雑な計算
    a = a * 5 + 2;
    cout << "a = a * 5 + 2  -> a = " << a << endl;
}


//複雑な処理；関数を使用
#include <iostream>
using namespace std;

int f(int x, int y){
    return 2 * x + y;
}
    int main(){
        cout << "f(1, 2) = " << f(1 , 2) << endl;
        cout << "f(182, 144) = " << f(182, 144) << endl;
    }

//こんな書き方でもOK
int f(int x, int y){
    return 2 * x + y;
}

int main(){
        int x = 1;
        int y = 2;
        int ref = 2* x + y;
        cout << "f(1, 2) = " << f(1 , 2) << endl;
        cout << "f(182, 144) = " << f(182, 144) << endl;
    }

//関数を使わない場合
int main(){
    cout << "f(1, 2) = " << 3 * 1 + 2 * 2 << endl;
    cout << "f(182, 144) = " << 3 * 182 + 2 * 144 << endl;
}