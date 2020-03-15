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

/**
 * 変数の寿命が来ると自動的にデストラクタが呼ばれる
 * デストラクタはクラス名の前にチルダ〜のついた名前の関数である
 * デストラクタには戻り地がない
 * コンストラクタ；デストラクタの機構はメモリリークを防ぐのに便利*/

class IntArray{
    public:
    //コンストラクタ
    IntArray(int size);

    public:
    //メンバへのアクセス関数
    int Get(int i);
    void Set(int i, int value);

    private:
    //インデックスのチェック
    void CheckIndex(int i);

    private:
    int* m_array; //動的配列
    int m_size; //配列の要素数
}

//インフライン定義:ここでは Color クラスの宣言の中に Brightness() メンバ関数の定義も書きました。このような定義の仕方をインライン定義という//
class Color{
    public:
        UInt08 r; // R 要素
        UInt08 g; //G 要素
        UInt08 b; //B 要素

        UInt08 Brightness();
};

UInt08 Color::Brightness(){
    return MAX(r, MAX(g,b));
}


/**
 * メンバ変数の初期化はコンストラクタで行う
 * コンストラクタはクラス名と同じ名前の、戻り値なしの関数となる
 * コンストラクタはオブジェクトを作るときに自動的に呼ばれる */

#include <iostream>
using namespace std;

class Integer{
    public:
        int m_value;

        Integer(); //ここで持ってくる
        void show(); //返り値あり
};

//コンストラクタ
Integer::Integer(){
    m_value = 0;
}

//メンバ変数の表示
void Integer::show(){
    cout << m_value << endl;
}

int main(){
    Integer a, b, c;

    a.show();
    b.show();
    c.show();
}

/**
 * コンストラクタには引数があっても良い
 * 引数につきコンストラクタを呼ぶまでは、変数の宣言時に引数をつける
 * 配列の初期化には{}の中がまるで普通の関数であるかのようにコンストラクタを呼べば良い**/

#include <iostream>
using namespace std;

class Integer{
    public:
        int m_value; //定義
        int value;

        Integer(string a); //ここで呼び出す
        Integer(int num); //引数ありのもの
        void Show();
        void Display();
};

//コンストラクタ
Integer::Integer(string a){
    value = a;
}

Integer::Integer(int num){
    m_value = num;
}

//メンバ変数の表示
void Integer::Show(){
    cout << m_value << endl; 
}

void Integer::Display(){
    cout << value << endl;
}

int main(){
    Integer a("くまさん");
    Integer b(100), c(40);

    a.Display();
    a.Show();
    b.Show();
    c.Show();
}

//オーバーロードを行うやり方
class Integer{
    public:
        Integer(int num = 0);
        //省略
};

Integer::Integer(int num){
    m_value = num; 
}

//配列の場合
Integer array[4] = {
    Integer(),
    Integer(3),
    Integer(9),
}

/**
 * publicをつけるとメンバは外部に公開される
 * privateをつけるとメンバは外部に公開されない
 * アクセス指定はメンバ変数の値を保証するために重要である*//

//アルゴリズムライブラリは要素の範囲に対して動作する様々な目的 (検索、ソート、計数、操作など) の関数を定義
#include <algorithm>
using namespace std;

const int INTARRAY_SIZE = 100; //int型の100要素の配列

class IntArray{
    public:
        int m_array[INTARRAY_SIZE]

        IntArray();
};

//コンストラクタ
IntArray::IntArray(){
    //fill_nは指定したデータで配列を埋める関数となる
    fill_n(m_array, INTARRAY_SIZE, 0);
}

#include <iostream>
#include <cstdlib> //一般的なユーティリティの関数を定義
using namespace std;

const int INTARRAY_SIZE = 100;

class IntArray{
    // public:
    //     int m_ayyay[INTARRAY_SIZE]; //配列

    //     IntArray(); //コンストラクタ
    //     int Get(int i); //メンバへのアクセス関数(取得)
    //     void Set(int i, int value); //メンバへのアクセス関数(変更)
    //     void CheckIndex(int i); //インデックスのチェック
    
    public:
        //コンストラクタ
        IntArray();
    public:
        //メンバのアクセス関数
        int Get(int i);
        void Set(int i, int value);
    private: 
        void CheckIndex(int i, int value);
    private:
        //配列
        int m_array[INTARRAY_SIZE];
};

IntArray::IntArray(){
    fill_n(m_ayyay, INTARRAY_SIZE, 0);
}

//メンバへのアクセス関数
int IntArray::Get(int i){
    CheckIndex(i);
    return m_ayyay[i];
}

void IntArray::Set(int i, int value){
    CheckIndex(i);
    m_ayyay[i] = value;
}

//インデックスのチェック
void IntArray::CheckIndex(int i){
    if(0 <= i && i < INTARRAY_SIZE){
        //インデックスは正常です
    }else{
        cout << "インデックスが不正です" << endl << "値:" << i << endl;
        exit(EXIT_FAILURE);
    }
}

/**
 * 変数の寿命が来ると自動的にデストラクタが呼ばれる
 * デストラクタはクラス名の前のチルダのついた名前の関数である.
 * デストラクタには戻り値も引数もない
 * コンストラクタ：デストラクタの機構はメモリリークを防ぐのに便利:**/

#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

class IntArray{
    //コンストラクタ:デストラクタ
    public:
        IntArray(int size);
        ~IntArray(); //デストラクタ
    public:
    //メンバへのアクセス関数
        int Get(int i);
        int Set(int i, int value);
    private:
        void Checkindex(int i); //インデックスにチェック
    private:
        int m_size; //配列の要素数
        int* m_array; //動的配列
}

//コンストラクタ
IntArray::IntArray(int size){
    m_array = new int[size]; //中の引数が入る
    m_size = size; //配列の要素数を配列に代入する

    cout << "コンストラクタが呼ばれました" << "要素数は" << m_size << "です" << endl;
}

//デストラクタ
IntArray::~IntArray(){
    delete [] m_array;

    cout << "デストラクタが呼ばれました" << "要素数は" << m_size << "でした" << endl;
}

//メンバへのアクセス関数
int IntArray::Get(int i){
    Checkindex(i);
    return m_array[i];
}

int IntArray::Set(int i, int value){
    Checkindex(i);
    m_array[i] = value;
}

//インデックスのチェック
void IntArray::Checkindex(int i){
    if(int 0 <= i && i < m_size){
        //インデックスは正常です
    }else{
        cout << "インデックスは不正です" << endl << "値" << i <<endl;
        exit(EXIT_FAILURE);
    }
}

void Viss(int num){
    cout << "Viss : No" << num << endl;
}

IntArray a(10);

int main(){
    Viss(1);

    IntArray b(20);
    Viss(2);

    IntArray c(30);
    Viss(3);
    {
        IntArray d(40);
        Viss(4);
    }
    viss(5);
}
