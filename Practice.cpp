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

//引数を使ったコンストラクタ
#include <iostream>
using namespace std;

class Kumasan{
    public:
        int value;
        int small_kumasan;

        Kumasan(); //クラスの呼び出し
        Kumasan(int num); //引数ありのくまさんの呼び出し
        Kumasan(string A);
        void Display(); //コンパイル上での表示
        void Show();
};

//コンストラクタ
Kumasan::Kumasan(){
    value = -5; //コンストラクターでは戻り値の型を指定できない
};

Kumasan::Kumasan(int num){
    value = num;
}

Kumasan::Kumasan(string A){
    small_kumasan = A;
}

void Kumasan::Display(){
    cout << value << endl;
}

void Kumasan::Show(){
    cout << small_kumasan << endl;
}

int main(){
    Kumasan a;
    Kumasan b(10), c(400);
    Kumasan d("くまさん");

    a.Display();
    b.Display();
    c.Display();
    d.Show();
}

#include <iostream> //cout endlなどを用いるときに使用
#include <cstdlib>
using namespace std;

const int INTARRAY_SIZE = 500; //配列を設定

class IntArray{
    public:
        IntArray(); //関数の呼び出し
    public:
        int Get(int j); //メンバのアクセス関数
        void Set(int i, int value);
    private:
        void CheckoutIndex(int i, int value); //インデックスの確認
    private:
        int m_array[INTARRAY_SIZE]; //定義つげ
};

IntArray::IntArray(){
    fill_n(m_array, INTARRAY_SIZE, 0);
}

//メンバのアクセス関数
int IntArray::Get(int i){
    CheckoutIndex(i);
    return m_array[i];
}

void IntArray::Set(int i, int value){
    CheckoutIndex(i);
    m_array[i] = value;
}

//インデックスのチェック
void CheckoutIndex(int i, int value){
    if(0 <= i && i < INTARRAY_SIZE){
        //インデックスは正常です
    }else{
        cout << "インデックスが不正です" << endl << "値:" << i << endl;
        exit(EXIT_FAILURE);
    }
// }

//new演算子によるメモリの動的確保

int n; //配列の要素数
int *a_heap; //int型のポインタ(後に配列として利用する)

std::cout << "配列の要素数を入力してください" ;
<< std::cin >> n; //配列の要素数をキーボードから打ち込む

a_heap = new int[A]; //上のポインタから来ている

for(int i = 0; i < n; i++){
    a_heap[i] = 2*i; //利用法はこれまで通り
}

for(int i=0; i<n; i++){
    std::cout << a_heap[i] << "¥n";
}

delete[] a_heap; //new演算子で確保した領域は自分でdeleteで削除する