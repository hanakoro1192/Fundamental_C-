// // //要点
// // //アドレスに*をつけるとそのアドレスにあるメモリを扱える//

// #include <iostream>
// using namespace std;

// int main(){
//     int a; 
//     int* p = &a;

//     a = 0;
//     cout << " a = " << a << endl << " *p = " << *p << endl;

//     *p = 5;
//     cout << " a = " << a << endl << " *p = " << *p << endl;
// }

// #include <iostream>
// using namespace std;

// int a;
// int& r = a;

// int main(){
//     int a;
//     int& r = a;

//     a = 0;
//     cout << "a = " << a << endl << "r = " << r << endl;

//     r = 5;
//     cout << "a = " << a << endl << "r = " << r << endl;
// }

// // //要点
// // /**
// //  * ・配列変数はメモリ上に連続して存在している
// //  * 配列変数を引数にとるときは、配列変数の戦闘要素の配列のアドレスを渡し、ポインタで受け取る
// //  * ポインタも配列変数と同じく[]で各要素を参照できる*/

// #include <iostream>
// using namespace std;

// void Init(int array[]){
//     for(int i = 0; i < 5; ++i){
//         array[i] = i * 5;
//     }
// }

// void Show(int array[]){
//     for(int i = 0; i < 5; ++i){
//         cout << array[i] << ' ';
//     }
//     cout << endl;
// }

// int main(){
//     int n[5];

//     Init(n);
//     Show(n);
// }

// // /**
// //  * 配列変数はメモリ上に確かに連続して存在している
// //  * 配列変数名は確かに配列の先頭要素のアドレスを渡すことができる
// //  * ポインタを使えば、たしかに配列変数を受け渡すことができる*/

// #include <iostream>
// using namespace std;

// int main(){
//     char array[10];

//     cout << "array   :" << (size_t)array << endl;
//     for(int i = 0; i < 10; ++i){
//         cout << "&array[" << i << "] : " << (size_t)&array[i] << endl;
//     }
// }

// #include <iostream>
// using namespace std;

// void ShowAdress(char* pointer){
//     cout << "pointer   :" << (size_t)pointer << endl;
//     for(int i = 0; i < 10; ++i){
//         cout << "&pointer[" << i << "]  : " << (size_t)&pointer[i] << endl;
//     }
// }

// int main(){
//     char array[10];

//     cout << "array   :" << (size_t)array << endl;
//     for(int i = 0; i < 10; ++i){
//         cout << "&array[" << i << "]   :" << (size_t)&array[i] << endl;
//     }
//     cout << endl;

//     ShowAdress(array);
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int n[5];

//     cout << "&n[2]   = " << (size_t)&n[2]   << endl << "&n[2] + 1 = " << (size_t)&n[3]   << endl;  
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int n[4];
//     int* p = n;

//     cout << "p   :" << (size_t)p << endl << "&n[0] :" << (size_t)&n[0] << endl;

//     p += 2;
//     cout << "p   :" << (size_t)p << endl << "&n[2]" << (size_t)&n[2] << endl;
// }

// /**
//  * ＊と[]はおなじ演算子効果を持つ演算子である
//  */

// #include <iostream>
// using namespace std;

// size_t StrLen(char* str){
//     size_t i;
//     for(i = 0; str[i] != '¥0'; ++i){
//         //何もしない
//     }
//     return i;
// }

// void ShowLength(Char* str){
//     cout << "文字列「" << str << "」の長さは" << StrLen(str) << " バイトです." << endl;
// }

// int main(){
//     ShowLength("Hello");
//     ShowLength(" ");
// }

// #include <iostream>
// using namespace std;

// size_t StrLen(char* str){
//     char* p;
//     for(p = str; *p != '¥0'; ++p){
//         //何もしない
//     }
//     return p - str;
// }

// void ShowLength(char* str){
//     cout << "文字列「" << str << "」の長さは" << StrLen(str) << "バイトです" << endl;
// }

// int main(){
//     ShowLength("Hello");
//     ShowLength(" ");
// }

// #include <iostream>
// using namespace std;

// size_t StrLen(char* str){
//     int i;
//     for(i = 0; *(str + 1) != '¥0'; ++i){
//         //何もしない
//     }
//     return i;
// }

// void ShowLength(char* str){
//     cout << "文字列「" << str << "」の長さは" << StrLen(str) << "バイトです" << endl;
// }

// int main(){
//     ShowLength("Hello");
//     ShowLength(" ");
// }

// // /**
// //  * ポインタ型や参照型の前にconstをつけると参照先の値を変更できなくなる*/

// // //この構文は間違い
// #include <iostream>
// using namespace std;

// int StrCount(char* str, char ch){
//     int num = 0;
//     for(int i = 0; str[i] != '¥O'; ++i){
//         ++num;
//     }
//     return num;
// }

// int main(){ßß
//     char path[] = "/home/rebert/documents/const.txt";

//     cout << "ファイル" << path << "は" << StrCount(path, '/') << "重のフォルダの中に入っています" << endl;
// }

// #include <iostream>
// using namespace std;

// const int ARRAY_SIZE = 5;

// void Init(int array[]){
//     for(int i = 0; i < ARRAY_SIZE; ++i){
//         array[i] = 5;
//     }
// }

// void Show(const int array[]) {
//     for(int i = 0; i < ARRAY_SIZE; ++i){
//         cout << array[i] << ' ';
//     }
//     cout << endl;
// }

// int main(){
//     int n[ARRAY_SIZE];

//     Init(n);
//     Show(n);
// }

// // /**
// //  * ヌルポインタはどんな変数やアドレスと比較しても等しくならない
// //  * ヌルポインタはソース上で０で表現する
// //  * ヌルポインタはNULLマクロを使うことができる
// //  * ヌルポインタは何らかの印に代わりに使える*/


// // //これはミス構文
// #include <iostream>
// using namespace std;

// const char* const MONTH_NAME[] = {
//     "睦月", "如月", "弥生", "卯月", "皐月", "水無月", "文月", "葉月", "長月", "神無月", "霜月", "師走"
// };

// const char* const GetOldMonthName(int month){
//     if(1 <= month && month <= 12){
//         return MONTH_NAME[month -1];
//     }
// };

// int main(){
//     int month;

//     cout << "今は何月ですか" << flush;
//     cin >> month;

//     const char* name = GetOldMonthName(month);
//     cout << name << endl;
// }

// #include <iostream>
// using namespace std;

// const char* const MONTH_NAME[] = {
//     "睦月", "如月", "弥生", "卯月", "皐月", "水無月", "文月", "葉月", "長月", "神無月", "霜月", "師走"
// };

// const char* GetOldMonthName(int month){
//     if(1 <= month && month <= 12){
//         return MONTH_NAME[month -1];
//     }
//     return 0;
// }

// int main(){
//     int month;

//     cout << "今は何月ですか > " << flush;
//     cin >> month;

//     const char* name = GetOldMonthName(month);
//     if(name == 0){
//         cout << "そんな月はない" << endl;
//     }else{
//         cout << name << endl;
//     }
// }

// // /**
// //  * 配列の配列を作るには単に[]の数を増やせば良い
// //  * 配列の配列は思わぬ大きさになることがある*/

// #include <iostream>
// #include <cstdio>
// using namespace std;

// int main(){
//     const int KUKU_SIZE = 9;
//     int kuku[KUKU_SIZE][KUKU_SIZE];

//     for(int i = 1; i <= KUKU_SIZE; ++i){
//         for(int j = 1; j <= KUKU_SIZE; ++j){
//             kuku[i - 1][j - 1] = i * j;
//         }
//     };

//     cout << "     1  2 3 4 5 6 7 8 9" << endl;
//     for(int i = 1; i <= KUKU_SIZE; ++i){
//         printf(" %d ", i);
//         for(int j = 1; j <= KUKU_SIZE; ++j){
//             printf("%2d", kuku[i - 1][j - 1]);
//         }
//         cout << endl;
//     }
// }

// /**
//  * int array[A][B];は要素B個のint型の配列を1要素とする。要素A個の配列である.
//  * array[i]は&array[0][1],...の順に行われる
//  * 初期化はarray[0][0], ayyay[0][1],...の順に行われる
//  * 初期化において配列のサイズを省略できるのは１番めのもののみ
//  * 
//  **/

// int n[3][5] = {
//     {1, 2, 3, 4, 5},// n[0]
//     {2, 4, 6, 8, 10}, //n[1]
//     {3, 6, 9, 12, 15}, //n[2]
// }

// int n[2][3][5] = {
//     {
//     {1, 2, 3, 4, 5,}, //n[0][0]
//     {2, 4, 6, 8, 10}, //n[0][1]
//     {3, 6, 9, 12, 15}, //n[0][2]
//     }, //n[0]
//     {
//         {4, 8, 12, 16, 20, } //n[1][0]
//         {5, 10, 15, 20, 25, } //n[1][1]
//         {6, 12, 18, 24, 30, } //n[1][2]
//     }, //n[1]
// };

// int n[2][3][5] = {
//     n[0]の初期値,
//     n[1]の初期値,
// };

// int n[2][3][5] = {
//     n[0][0]の初期値,
//     n[0][1]の初期値,
//     n[0][2]の初期値,
// }, //n[0]
// {
//     n[1][0]の初期値,
//     n[1][1]の初期値,
//     n[1][2]の初期値,
// }, //n[1]

// /**
//  * 構造体の宣言の書式はstructタグ名{変数宣言軍};
//  * 構造体を使えば関連のある変数をひとまとめに扱える
//  * 構造体の宣言は型の宣言である
//  * 構造体の各要素はメンバという
//  * メモリ上にある変数を実態(インタスンス)と、構造体変数のことをオブジェクトともいう
//  * メンバを使うときはオブジェクト、メンバとする。*/


// // //構造体
// struct Student{
//     char name[MAX_NANE + 1];
//     int scoreJaoanese;
//     int scoreMath;
//     int scoreEnglish;
// }

// struct タグ名 {
//     変数宣言群
// };

// // //Student型の変数
// // Student student;

// // //メンバの扱い方
// cout << "名前："  << student.name << endl;
// << " 国語：" << student.scoreJapanese << "点"
// "、数学：" << student.scoreMath << "点"
// "、英語" << student.scoreEnglish << "点" << end;

// // //つまり
// // オブジェクト.メンバ


// /**
//  * オブジェクトの初期化は{}で囲む
//  * 構造体は主に参照渡しする。*/

// #include <iostream>
// using namespace std;

// const int MAX_NAME = 16;

// struct Student {
//     char name[MAX_NAME + 1];
//     int scoreJapan;
//     int scoreMath;
//     int scoreEbglish;
// };

// void Show(const Student& student){ //ポインタを使用
//     cout << "名前：" << student.name  << endl << " 国語" << student.scoreJapan << "　点" "、数学:" << student.scoreMath << " 点"
//     ", 英語" << student.scoreEbglish << " 点" << endl; //ただのendlは改行となる！！
// }

// int main (){
//     Student student[] = {
//         {"赤井たけし", 73, 98, 86, }, //構造体を初期化するときは一つ一つのオブジェクトにたいしての初期値を書気連ねる
//         {"笹井大輔", 64, 45, 40},
//         {"吉井叶", 76, 98, 69,},
//     };
//     int size = sizeof student / sizeof *student; //ここが不明

//     for(int i = 0; i < size; ++i){
//         Show(student[i]);
//     }
// }

// /**
//  * 構造体のメンバにはポインタ -> メンバ名でもアクセスできる
//  **/

// //ポインタを使って書き直す
// #include <iostream>
// using namespace std;

// const int MAX_NAME = 16;

// struct Student {
//     char name[MAX_NAME + 1];
//     int scoreJapanese;
//     int ScoreMath;
//     int ScoreEnglish;
// };

// void Show(const Student* pointer){
//     cout << "名前：　" << (*pointer).name << endl
//         << "  国語：" << (*pointer).scoreJapanese << " 点" 
//         << "、数学：" << (*pointer).ScoreMath << " 点"
//         << " 、英語：" << (*pointer).ScoreEnglish << " 点" << endl;
// }

// int main(){
//     Student student[] = {
//         {"赤井たけし", 73, 98, 86, }, //構造体を初期化するときは一つ一つのオブジェクトにたいしての初期値を書気連ねる
//         {"笹井大輔", 64, 45, 40},
//         {"吉井叶", 76, 98, 69,},
//     };
//     int size = sizeof student / sizeof *student;

//     for(int i = 0; i < size; ++i){
//         Show(&student[i]);
//     }
// }

// /**
//  * enum型名{名前[＝値],[名前[＝値]],...}で列挙が作られる
//  * 列挙体変数へは列挙体型の値しか代入できない
//  * 列挙子の値は初期化しなければ(前の値+1)になる。
//  * 一番はじめの列挙子の値は初期化しなければ０になる。
//  * 列挙体変数名の値の保証は自分で責任を持つ*/

// #include <iostream>
// using namespace std;

// enum CompareRessult {
//     CR_LESS_THAN = 0, //より小さい
//     CR_EQUAL_TO = 1, //等しい
//     CR_GREATER_THAN = 2 //より大きい
// };

// CompareRessult Compare(int a, int b){
//     if(a < b){
//         return CR_LESS_THAN;
//     }else if(a > b){
//         return CR_GREATER_THAN;
//     }else{
//         return CR_EQUAL_TO;
//     }
// }

// bool Compare(){
//     int a, b;

//     cout << "数字を２つ入力してください > " << flush;
//     cin >> a >> b;

//     if(a == -1){
//         return false;
//     }

//     switch(Compare(a, b)) {
//         case CR_LESS_THAN:
//         cout << "前者は後者よりも小さいです" << endl;
//         break;

//         case CR_EQUAL_TO:
//         cout << "両者は等しいです" << endl;
//         break;

//         case CR_GREATER_THAN:
//         cout << "前者は後者よりも大きいです" << endl;
//         break;
//     }

//     return true;
// }

// int main(){
//     while (Compare()){
//         //何もしない
//     }
// }

// /**
//  * 条件演算子？:を使うと条件によって違う値を表現する事ができる
//  * 条件演算子の書式は条件式？真の場合：偽の場合.*/

// //重複してめんどくさいプログラム
// #include <iostream>
// using namespace std;

// int main(){
//     int a, b;

//     cout << "2つの値を入力してください" << flush;
//     cin >> a >> b;

//     if(a > b){
//         cout << "大きいほうの値は" << a << "です。" << endl;
//     }else{
//         cout << "大きい方の値は" << b << "です。" << endl;
//     }
// }


// //上記を書き換えたもの
// #include <iostream>
// using namespace std;

// int main(){
//     int a , b;

//     cout << "2つの値を入力してください" << flush;
//     cin >> a >> b;

//     cout << "大きい方の値は" << (a > b ? a : b) << "です" << endl;
// }

// /**
//  * 仮引数を初期化するような形にすると、省略した時その値が使われる。この値をデフォルト引数という。
//  * 途中の引数だけを省略することはできない
//  * デフォルト引数には静的なデータしか指定できない
//  * オーバーロードとディフォルト引数を併用するときは、呼び出しが区別できるかどうかに注意する*/

// void StrCopy(char* dst, const char* src, int first, int length);
// void StrCopy(char* dst, const char* src, int first){
//     StrCopy(dst, src, first, -1);
// }
// void StrCopy(char* dst, const char* src){
//     StrCopy(dst, src, 0);
// }

// #include <iostream>
// using namespace std;

// void Func(int a = 0) {cout << (size_t)&a << endl;}
// void Func2()         {Func();}

// int main(){
//     Func();
//     Func2();
//     Func();
// }

/**
 * staticをつけるとローカル関数も静的になる
 * staticのついていないローカル変数は自動変数という
 * 静的変数の初期化はローカル変数でも１度のみしか行われない
 * 静的変数は初期化しなければ０で初期化される。
 * 静的変数は関数が抜けても値が保存される*/

//静的関数の例
// void Func(){
//     static int a;
//     cout << &a << endl;
// }

// //エラーが出る例
// #include <iostream>
// #include <alloca.h> //fill_nを使うためのヘッダファイルです
// using namespace std;

// void CheckAdress_Sub();
// void CheckAdress_Sub2();

// void CheckAddress(){
//     cout << "アドレスが常に一定かのチェック" << endl;

//     CheckAdress_Sub();
//     CheckAdress_Sub2();
//     CheckAdress_Sub();
// }

// //静的変数aと自動変数bのアドレスを入力
// void CheckAdress_Sub(){
//     static int a;
//     int b;
//     cout << "&a = " << (size_t)&a << endl << "&b = " << (size_t)&b << endl;
// }

// //この関数の中からCheckAdress_Subを呼んだときに
// //変数aとbのアドレスがどうなるかチェック
// void CheckAdress_Sub2() {
//     cout << "in Sub2" << endl;
//     CheckAdress_Sub();
// }

// //初期化が一回しかされないかのチェック
// //グローバル変数と同様
// void CheckInitOnce_Sub();

// void CheckInitOnce(){
//     cout << endl << "初期化が一回しかされないかのチェック" << endl;

//     CheckInitOnce_Sub();
//     CheckInitOnce_Sub();
// }

// //++aと++bの影響が２度目以降の呼び出しに影響するのかをチェック
// void CheckInitOnce_Sub(){
//     static int a = 3;
//     int        b = 3;
//     cout << "a = " << a << endl << "b = " << b << endl;
//     ++a;
//     ++b;
// }

// //初期化されるのかのチェック
// //偶然0だったときのために、４個くらい変数をつくって足し貯める
// //自然変数も一緒に確かめる

// void CheckZeroInit_Sub();
// void CheckZeroInit_Sub2();

// void CheckZeroInit(){
//     cout << endl << "0で初期化されるのかをチェック" << endl;

//     CheckZeroInit_Sub();
//     CheckZeroInit_Sub2();
// }

// //静的変数が何で初期化されるのかをチェック
// void CheckZeroInit_Sub(){
//     static int a ,b, c, d;
//     cout << a << ',' << c << ',' << d << endl;
// }

// //自動変数が何で初期化されるのかをチェック
// void CheckZeroInit_Sub2(){
//     int a, b, c, d;
//     cout << a << ',' << c << ',' << d << endl;
// }

// //値が保証されるのかのチェック
// void CheckInvariant_Sub(int*& pa, int*& pb);
// void CheckInvariant_Sub2();

// void CheckInvariant(){
//     cout << endl << "値が保証されるのかのチェック" << endl;

//     int *pa, *pb;  //*は両方につけないとだめ
//     CheckInvariant_Sub(pa, pb);
//     CheckInvariant_Sub2();
//     //CheckInvariant_Sub2を呼んでも
//     //aとbの値が保存されているのかチェック
//     //場合によってはチェックに失敗するかもしれません
//     cout << "*pa = " << *pa << endl << "*pb = " << *pb << endl;
// }

// //静的変数aと自動変数bのアドレスを引数を通して返す
// //int*& はint*への参照です
// void CheckInvariant_Sub(int*& pa, int*& pb){
//     static int a = 9;
//     int        b = 9;
//     pa = &a;
//     pb = &b;
// }

// //大きな変数を作って、それを全て0で埋めます
// //fill_nは指定したデータで配列などを埋める関数のようなものです
// void CheckInvariant_Sub2(){
//     int dummy[100];
//     fill_n(dummy, 100, 0);
// }

// //main関数
// int main(){
//     CheckAddress();
//     CheckInitOnce();
//     CheckZeroInit();
//     CheckInvariant();
// }

// /**
//  *  変数の有効期限を寿命という
//  * {}で囲んだ全体をブロックという
//  * 変数や関数飲み得る範囲をスコープという
//  * 変数の寿命はスコープによって決まる
//  * スコープが違えば同じ名前の別の変数を作ることができる
//  * ::をつければどのスコープからでもグローバル変数とさせる。*/

// //ビルドエラーコード
// #include <iostream>
// using namespace std;

// int main(){
//     {
//         int a = 0;
//         cout << a << endl;
//     }
//     cout << a <<endl;
// }

#include <iostream>
using namespace std;

int a = 1;

int main(){
    cout << a << " : " << (size_t)&a << endl;

    int a = 2;
    cout << a << " : " << (size_t)&a << endl;

    {
        int a = 3;
        cout << a << " : " << (size_t)&a << endl;
    }

    // cout << a << " : " << (size_t)&a << endl;
    //グローバル変数に変換
    cout << ::a << " : " << (size_t)&::a << endl;

}
