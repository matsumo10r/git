#include <iostream>
#include <string>

using namespace std;

int main()
{
  int x = 10;

  for (int i = 0; i <= 10; i++) {
    cout << i << endl;
  }

  const int NUM = 5;

  int IDs[NUM];
//初期化していない
  IDs[0] = 10;
  IDs[1] = 20;
  IDs[2] = 30;

//初期化の例
  int ID2s[] = {100,200,300,400,500};

  cout << IDs[0] << ":0" << endl;
  cout << IDs[1] << ":1" << endl;
  cout << IDs[2] << ":2" << endl;
//以下のcout はおかしな値が出力される
  cout << IDs[3] << ":3" << endl;
  cout << IDs[4] << ":4" << endl;

  cout << ID2s[0] << ":0" << endl;
  cout << ID2s[1] << ":1" << endl;
  cout << ID2s[2] << ":2" << endl;
  cout << ID2s[3] << ":3" << endl;
  cout << ID2s[4] << ":4" << endl;

  for (int i = 0; i <= NUM; i++) {
    if(i == 2) continue;
    if(i == 4) break;

    cout << IDs[i] << ":IDs ," << i << ":i" << endl;
  }
}
