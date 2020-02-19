#include <iostream>
using namespace std;

// Hello_world
int main(){
    cout << "Hello World" << endl;
    return 0;
}

// //stdは繰り返し使用するため「using namespace(名前空間) std;」と記述.<< は演算子
// //count、endlなどは「std」という名前空間にある　#include <iostream>はヘッダファイル

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


// //複雑な処理；関数を使用
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


//何もない処理
#include <iostream>
using namespace std;

int f(int x, int y){
    return 2 * x + y;
}

void Show(int x, int y){
    cout << "f("  << x << " , " << y << " ) = " << f(x, y) << endl;
}

int main() {
    Show(1, 2);
    Show(182, 144);
}

これでも呼び出せる
#include <iostream>
using namespace std;

void Hello(/* void */) {
    cout << "こんにちは" << endl;
}

int main(){
    Hello();
    Hello();
}

/*ここのコードはエラーコードとなる
理由：関数内で定義した文字は使えない。後で定義した文字は使えないため
*/

#include <iostream>
using namespace std;

int a = 0;

void Test(){
    int b = 1;
    cout << a << b << c << d << endl;
}

int c = 2;

int main(){
    int d = 3;
    Test();
    cout << a << b << c << d << endl;
}

//ここでは関数内でint b = 0としていることで関数が返されたときにその都度初期化される.
#include <iostream>
using namespace std;

int a = 0;

void Inc(){
    int b = 0;
    ++a;
    ++b;
    cout << a << " <- a | b -> " << b << endl;
}

int main(){
    Inc();
    Inc();
    Inc();
}


//aに値を入れる方法
#include <iostream>
using namespace std;

int main(){
    int a;

    cout << "何か値を入れてね >" << flush;
    cin >> a;

    cout << "その数を３で割った余りは" << a % 3 << "です。" << endl;
}

#include <iostream>
using namespace std;

void BithMonth(){
    int month;

    cout << "あなたは何月生まれですか" << flush;
    cin >> month;

    if(1 <= month && month <= 12){
        cout << "へー、" << month << "月なんですか" << endl;
    }else{
        cout << month << "月やと！？" << endl << "んな月、あらへんわ！" << endl;

    }
}

int main(){
    BithMonth();
    BithMonth();
}



//もっと条件分岐
#include <iostream>
using namespace std;

void Divide() {
    int a, b;

    cout << "１番目の値を入力してください" << flush;
    cin >> a;

    cout << "2番目の値を入力してください" << flush;
    cin >> b;

    if(b == 0){
        cout << "0では割れません" << endl;
    }else{
        cout << a << " / " << b << " = " << a / b << "......" << a % b << endl;
    }
}

int main(){
    Divide();
    Divide();
}


//西暦の変換
#include <iostream>
using namespace std;

//西暦を昭和に変換します
//変な値が渡された場合は０を返します.
int WesternToShouwa(int western){
    if(1926 < western && western <= 1989){
        return western - 1925;
    }else{
        return 0;
    }
}

void Shouwa (){
    int western;

    cout << "西暦を入力してください" << flush;
    cin >> western;

    int shouwa = WesternToShouwa(western); //ここで昭和〜年が入る1950年なら25
    if(shouwa == 0){
        cout << "その年は昭和ではありません" << endl;
    }else{
        cout << "その年は昭和" << shouwa << "年です" << endl;
    }
}

int main(){
    Shouwa();
    Shouwa();
}


//for文
#include <iostream>
using namespace std;

int main(){
    for(int i = 0; i < 5; i++){
        cout << "＊＊＊＊＊＊＊＊＊＊＊＊" << endl;
    }
}

#include <iostream>
using namespace std;

int main(){
    int a[2];

    a[0] = 1;
    cout << "a[0] = " << a[0] << endl;

    a[1] = 2;
    cout << "a[1] = " << a[1] << endl;

    a[0] = 3;
    cout << "a[0] = " << a[0] << endl;
}


//for文(2)
#include <iostream>
using namespace std;

int score[] = {
    /* 数が４０個入る(省略) */
}

int main(){
    int sum;

    for(int i = 0; i < 40; i++){
        sum += score[i];
    }

    cout << "クラスの平均は" << sum / 40.0 << "点です" << endl;
}


複雑に回る処理；for文(3)
#include <iostream>
using namespace std;

int main(){
    for(int i = 5; i < 10; i += 2){
        cout << i << " ";
    }
    cout << endl;
}

#include <iostream>
using namespace std;

int main(){
    int a = 0;
    for(int i = 0; a < 10; ++i){
        cout << i << " ." << a << endl;
        a += 2;
    }
}

//上のiを削除した場合
#include <iostream>
using namespace std;

int main(){
    int a = 0;
    for( ; a < 10; ){
        cout << a << ' ';
        a += 2;
    }
    cout << endl;
}

そもそもaがない場合:無限ループになってしまう。。。
#include <iostream>
using namespace std;

int main(){
    int a = 0;
    for( ; ; ){
        cout << a << '  ';
        ++a;
    }
    cout << endl;
}


//while文
#include <iostream>
using namespace std;

int main(){
    int a = 0;
    while(a < 10){
        cout << a << " ";
        a += 2;
    }
    cout << endl;
}


//do-while文 この文は末尾で条件分岐される
//do{ 実行文 } while {条件式}
#include <iostream>
using namespace std;

int main(){
    int i = 0;
    do {
        cout << "この文は表示されるかな" << endl;
    } while(i == 1);
}


//break文とcontinue文
#include <iostream>
using namespace std;

int main(){
    for( ; ; ){
        int a, b;

        cout << "1番目の値を入力してください" << flush;
        cin >> a;

        cout << "2番目の値を入力してください" << flush;
        cin >> b;

        if(b == 0){
            cout << "0では割れません" << endl;
            break;
        }

        cout << a << " / " << b << " = " << a / b << "......" << a % b << endl;
    }

    cout << "プログラムを終了します" << endl;
}

//continue ここでcontinueは以下の文を省略する文。実行分の末尾に飛ぶとも言える
#include <iostream>
using namespace std;

int main(){
    for(int i = 0; i < 5; ++i){
        int a, b;

        cout << "1番目の値を入力してください" << flush;
        cin >> a;

        cout << "2番目の値を入力してください" << flush;
        cin >> b;

        if(b == 0){
            cout << "0では割れません！" << endl;
            continue;
        }

        cout << a << " / " << b << " = " << a / b << "......." << a % b  << endl;
    }

    cout << "プログラムは成功しました" << endl;
}


//どんどん条件分岐:四則演算
#include <iostream>
using namespace std;

int main(){
    for(int i = 0; i < 5; ++i){
        int a, b, op, result;

        cout << "第一項" << flush;
        cin >> a;

        cout << "第二項" << flush;
        cin >> b;

        cout << "1:可算, 2:減算, 3:乗算, 4:除算 > " << flush;
        cin >> op;

        if(op == 1){
            result = a + b;
        }else if(op == 2){
            result = a - b;
        }else if(op == 3){
            result = a * b;
        }else if(op == 4){
            result = a / b;
        }else{
            cout << "真面目にせんかい！！" << endl;
            continue;
        }
        cout << "答えは" << result << " です。" << endl;
    }
}


//これで方の変更が可能となる
#include <iostream>
using namespace std;

int a;
signed char = -1;

a = (unsigned char)b;

//各環境での方のバイト数はsizeofという演算子で取得可能となる.sizeofの後のカッコつきで型名をかけば.その型のサイズを取得することができる.

cout << sizeof(int) << endl;

//またsizeofの後に変数名をかけばその変数のサイズを取得することができる.
int n;
cout << sizeof n << endl;
//符号付きはとうでないかはsignedとunsignedで区別される
//なおsignedはsigned char以外は省略可能となる.

//遠隔操作

//個のプログラムは少しお消しい
#include <iostream>
using namespace std;

void WesternToshouwa(int x){
    if(1926 <= x && x <= 1989){
        x -= 1925;
    }else{
        x = 0;
    }
}

void shouwa(){
    int year;

    cout << "西暦を入力してください" << flush;
    cin >> year;

    WesternToShouwa(year);
    if(yaer != 0){
        cout << "その年は昭和" << year << "年です" << endl;
    }else{
        cout << "その年は昭和ではありません" << endl;
    }
}

int main (){
    Shouwa();
    Shouwa();
}

// どこを改造したかというと,WesternToShouwaの引数を直接操作してyearの値に変更しようとしているところ。しかし、失敗に終わってしまう.仮引数xは、関数を呼んだ後に新たに変数が作られ、その変数が実変数yearの値で初期化されるという仕組みになっている。
// このような引数の渡し方を「値渡しという」
// こういう場合には「参照(reference)」というものが使用できる.

#include <iostream>
using namespace std;

void WesternToShouwa(int& x){
    if(1926 <= x && x <= 1989){
        x -= 1925;
    }else{
        x = 0;
    }
}

void Shouwa(){
    int year;

    cout << "西暦を入力してください" << flush;
    cin >> year;

    WesternToShouwa(year);
    if(year != 0){
        cout << "との年は昭和" << endl;
    }else{
        cout << "その年は違います" << endl;
    }
}

int main(){
    Shouwa();
    Shouwa();
}
先程のエラーコードとは異なりint& xがyearを参照している形となっている事からエラーは怒らない・

この参照渡しを用いると、複数の値を返す関数を作ることがvできる.

rにあまりを入れて、商を返すことができる
#include <iostream>
using namespace std;

int DivMod(int x, int y, int& r){
    r = x % y;
    return x / y;
}

//なお参照は引数以外デモ使うことができる
int n[10];
int& r = n[3];


文字コード
#include <iostream>
using namespace std;

void ShowCode(char ch){
    cout << "[" << ch << "]に振られた番号は" << (int) (unsigned char)ch << "です." << endl; //unsigned char型のchをint型に変更している
}

int main(){
    ShowCode('0');
    ShowCode('A');
}

#include <iostream>
using namespace std;

int main(){
    char hello[] = "Hello!";

    cout << "[" << hello << "]を文字コードに変えると" << endl;

    for(int i = 0; i < (int) sizeof hello; ++i){ //unsined charのバイト数は1 領域は0〜255 coutで変換するときに文字型のintにcastする　各環境での型のバイト数はsizeofという演算子取得できる. sizeofの後に括弧付きで型名をかけば、。その肩のサイズを取得することができる
        cout << (int) (unsigned char)hello[i] << " .";
    }

    cout << endl << "になります" << endl;
}
cout << sizeof (int) << endl;みたいな感じ


//文字列をいじろう
/*
・文字列を最後まで走査する場合、塗るねーたが現れるまで処理すれば良い
・sprintfで文字列を編集できる
・printfで文字列を編集した形で表示できる
 */

#include <iostream>
using namespace std;


int main(){
    char hello[] = "Hello!";

    hello[4] = 0;
    cout << "[" << hello << "]を文字コードに変えると" << endl;

    for(int i = 0; hello[i] != 0; ++i){
        cout << (int) (unsigned char)hello[i] << " .";
    }

    cout << 0 << endl << "になります" << endl;
}

printf \nというのは改行命令です この関数はフォーマットしたデータを文字列に書き込む関数です。printf のようにフォーマット指定子でフォーマットした文字列を標準出力ではなく、第一引数のバッファに書き込みます。
#include <iostream>
#include <cstdio>
using namespace std;

int f(int x, int y){
    return 2 * x + y;
}

void Show(int x, int y){
    char str[50];

     //まず第一引数は文字列を代入する容器。ここには自分の作ったstrを入れる.　次に第２引数は作る文字列の書式を指定する文字列(書式文字列)。%dのところが第３引数移行日書いてある数値に置き換わって、それが第一引数strに入るという寸法。
    sprintf(str, "f(%d, %d) = %d", x, y, f(x, y));
    cout << str << endl;
}

int main(){
    Show(1, 2);
    Show(182, 144);
}


//どんな関数
/* 
要点
・関数プロトタイプを宣言すれば関数定義を後回しにすることができる
・関数プロトタイプは関数の中身を書かないだけもの
 */
#include <iostream>
using namespace std;

//関数プロトタイプ
int f(int x, int y);

int main(){
    cout << "f(1, 2) = " << f(1, 2) << endl;
    cout << "f(184, 144) =" << f(184, 144) << endl;
}

int f(int x, int y){
    return 2 * x + y;
}

#include <iostream>
using namespace std;

void Func6() {
    cout << "ご苦労さん" << endl;
}

void Func5() { Func6(); }
void Func4() { Func6(); }
void Func3() { Func6(); }
void Func2() { Func6(); }
void Func1() { Func6(); }

int main(){
    Func1();
}

//でもこの書き方だと下から読まなければならず大変。。なので次のように変換する

#include <iostream>
using namespace std;

void Func1();  
void Func2();
void Func3();
void Func4();
void Func5();
void Func6();

int main(){
    Func1();
}

void Func1();{ Func2(); }
void Func2();{ Func3(); }
void Func3();{ Func4(); }
void Func4();{ Func5(); }
void Func5();{ Func6(); }
void Func6(){
    cout << "ご苦労さん" << endl;
}


//ハメコミ合成
/* 
要点
・#includeを使えば別のファイルを読み込む事ができる
・ファイル名を<>で囲めば設定されたフォルダの、""で囲めば今のフォルダのファイルを優先的に調べる
・主にファイルの戦闘でインクルードするファイルをヘッダファイルという
 */

//Include1.hの始まり
void Hello();
//Include1.hの終わり
#include <iostream>
using namespace std;

int main(){
    Hello();
}

void Hello(){
    cout << "やあ、こんにちわ" << endl;
} 


//疑似乱数
/*
・疑似乱数はrandで取得できる。
・擬似乱数はsrandで初期化可能
・初期化には時間を利用すると良い
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int Dice(){
    return rand() % 6 + 1;
}

int main(){
    for(int i = 0; i < 20; ++i){
        cout << Dice() + Dice() << ' ';
    }
    cout << endl;
}

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void InitRand(){
    srand((unsigned int)time(NULL));
}

int Dice(){
    return rand() % 6 + 1;
}

int main(){
    InitRand();
    for(int i = 0; i < 20; ++i){
        cout << Dice() + Dice() << " ";
    }
    cout << endl;
}

//いろんな数の計算
/*
・小数の型には精度の違うfloat型、double型、long double型の３種類ある
・小数の演算double型で行うのが基本
・数学関数はcmathヘッダファイルで宣言させている
*/
//平方根は関数sqrtを用いる

#include <iostream>
#include <cmath>
using namespace std;

int mian() {
    double a, b;

    cout << "直角を挟む２辺の長さを入力してください >" <<flush;
    cin >> a >> b;

    cout << "斜辺の長さは" << sqrt(a * a + b * b) << "です。" << endl;
}


//浮動小数点
#include <iostream>
using namespace std;

int main(){
    for(double i = 0; i < 1; i += 0.1){
        cout << i << ' ';
    }
    cout << endl;
}

このコードには１が含まれている。。そこで以下のように書き換える
#include <iostream>
using namespace std;

int mian(){
    for(int i = 0; i < 10; ++i){
        cout << (i / 10.0) << "";
    }
    cout << endl;
}

//同姓同名
/*
・引数がことなれば同じ名前の関数が作れる
・戻り地が違うだけで同じ名前の関数は作れない
・同じ関数の違う関数を作ることをオーバーロードと言う
*/

int AbsInt(int a){
    if(a < 0){
        return -a;
    }else{
        return a;
    }
}

double AbsDouble(double a){
    if(a < 0){
        return -a;
    }else{
        return a;
    }
}
// このように正数と浮動小数点は分けて関数を作らなければならない

//以下のプログラムを作ってみる
#include <iostream>
using namespace std;

絶対値を求める
int Abs(int a){
    if(a < 0){
        return -a;
    }else{
        return a;
    }
}

double Abs(double a){
    if(a < 0){
        return -a;
    }else{
        return a;
    }
}

//入力
int Input(int& i, double& d){
    cout << "整数値を入力してください" << flush;
    cin >> i;
    if(i == 0){
        return 0;
    }

    cout << "小数値を入力してください > " << flush;
    if(d == 0){
        return 0;
    }

    return 1;
}

// //絶対値の表示
void ShowAbs(int i, double d) {
    cout << i << "の絶対値は" << Abs(i) << "で" << endl << d << "の絶対値は" << Abs(d) << "です." << endl;
}

int main(){
    int i;
    double d;

    while(Input(i , d) != 0){
        ShowAbs(i , d);
    }
}


//もっとロジカルに
/*
要点
・bool型の変数はtrueとfalseの２値しかない
・条件式に置いてtrueは真、falseは偽となる
*/

