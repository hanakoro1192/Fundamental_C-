
#include <iostream>
using namespace std;

Hello_world
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