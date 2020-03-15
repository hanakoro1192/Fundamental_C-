#include <iostream>
using namespace std;

class Kumasan{
    public:
        int value; //型を設定
        int m_value;
        string a;

        Kumasan(); //kumasanの呼び出し
        void Display(); //返り値なしのvoid型
        void Show();
        void show();
};; //クラスの終わり

//コンストラクタ
Kumasan::Kumasan(){
    value = 10;
    m_value = 5;
    a = "PC";
};

//メンバ変数の表示
void Kumasan::Display(){
    cout << value << endl;
}

void Kumasan::Show(){
    cout << m_value << endl;
}

void Kumasan::show(){
    cout << a << endl;
}


int main(){
    Kumasan A, B;

    A.Display();
    A.Display();
    A.Display();
    A.Show();
    B.show();
}

