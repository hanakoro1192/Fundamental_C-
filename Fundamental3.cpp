/**
 *  メンバ変数の初期化はコンストラクタ内で行う。
 * コンストラクタはクラス名と同じ名前の、戻り値なしの関数である。
 * コンストラクタはオブジェクトをつくるときに自動的に呼ばれる*/

#include <iostream>
using namespace std;

class Integer{
    public:
    int m_value;

    Integer();
    void Show();
};

//コンストラクタ
Integer::Integer() {
    m_value = 0;
}

//メンバの表示
void Integer::Show() {
    cout << m_value << endl;
}

int main(){
    Integer a, b, c;

    a.Show();
    b.Show();
    c.Show();
}

/**
 * コンストラクタに引数があっても良い
 * 引数つきコンストラクタを呼ぶには、変数の宣言時に変数名に引数をつける
 * 配列の初期化時には{}の中でまるで普通の関数であるかのようにコンストラクタを呼べない*/

#include <iostream>
using namespace std;

class Integer{
    public:
    int m_value;

    Integer();
    Integer(int num);
    void Show();
};

//コンストラクタ
Integer::Integer()  {m_value = 0;}
Integer::Integer(int num)  {m_value = num;}

//メンバ変数の表示
void Integer::Show() { cout << m_value << endl; }

int main(){
    Integer a;
    Integer b(100), c(40);

    a.Show();
    b.Show();
    c.Show();
}

/**
 * public:をつけるとメンバは外部に公開される
 * private:をつけるとメンバは外部に公開されない
 * アクセス指定はメンバ指定の値を保証するために重要である*/

// //サンプル構文
#include <algorithm>
using namespace std;

const int INTARRAY_SIZE = 100;

class IntArray {
    public:
    int m_array[INTARRAY_SIZE];

    IntArray();
};

//コンストラクタ
IntArray::IntArray(){
    //fill_nは指定したデータで配列などを埋める関数のようなもの
    fill_n(m_array, INTARRAY_SIZE);
};

#include <iostream>
#include <cstdlib>
using namespace std;

const int INTARRAY_SIZE = 100;

class IntArray{
    public:
    int m_array[INTARRAY_SIZE]; //配列

    IntArray(); //コンストラクタ
    int Get(int i); //メンバへのアクセス(取得)
    void Set(int i, int value); //メンバへのアクセス関数(変更)
    void CheckIndex(int i); //インデックスのチェック
};

//メンバへのアクセス関数
int IntArray::Get(int i){
    CheckIndex(i);
    return m_array[i];
}

void IntArray::Set(int i, int value){
    CheckIndex(i);
    m_array[i] = value;
}

//インデックスのチェック
void IntArray::CheckIndex(int x){
    if(0 <= i && i < INTARRAY_SIZE){
        //インデックスは正常です
    }else{
        cout << "インデックスは不正です！！" << endl << "値:" << i << endl;
        exit(EXIT_FAILURE);
    }
}

//実装の変更
class IntArray {
    public:
    //コンストラクタ
        IntArray();
    public:
    //メンバへのアクセス権
    int Get(int i);
    void Set(int i, int value);

    private:
    //インデックスのチェック
    void CheckIndex(int i);

    private:
    //配列
    int m_array[INTARRAY_SIZE];
};