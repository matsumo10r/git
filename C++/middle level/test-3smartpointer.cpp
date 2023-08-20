#include <iostream>
#include <memory> //スマートポインタ用（std::unique_ptr）
#include <utility> //メモリ領域返却用（std::move）
using std::cout;
using std::endl;

class A{
public:
    A(){cout << "コンストラクタ" << endl;};
    ~A(){cout << "デストラクタ" << endl;};
};
//スマートポインタ
std::unique_ptr<A> allocate(){
    cout << "allocate()" << endl;
    std::unique_ptr<A> ptr{ new A{} }; //メモリ領域確保 この時点で初めてオブジェクト生成される ptr{new A{}};
    return std::move(ptr); //return move(オブジェクト名)メモリ領域を返す
};
int main(){
    {
        std::unique_ptr<A> ptr; //スマートポインタ宣言この時点では空のポインタ（nullptr）std::unique_ptr<クラス名> オブジェクト名
        cout << "関数呼び出し" << endl;
        ptr = allocate();
        cout << "関数呼び出し後" << endl;
    }
    //ここでスマートポインタが解放される
    cout << "スコープ外" << endl;
};

