#include <cstdlib>
#include <iostream>
using namespace std;

int main() 
{
    int y, a, b;
    string m,X;

    while (true) {
        cout << "你是綿友嗎" << endl;
        cin >> X;
        if (X == "是") {
            break;
        }
    }
    while (true) {
        while (true) {
            cout << "棉芽猜拳開始" << endl;
            cout << "石頭=0\n剪刀=2\n布=5" << endl;
            cin >> a;
            if (a == 0 || a == 2 || a == 5) {
                if (a == 0) {
                    m = "石頭";
                } else if (a == 2) {
                    m = "剪刀";
                } else if (a == 5) {
                    m = "布";
                }
                break;
            } else {
                cout << "馬鹿" << endl;
            }
        }
        cout << "你出" << m << "\n棉芽出:";
        srand(time(NULL));
        b = rand() % 3;  
        cout ;
        if (b ==0) {     // 電腦贏
            if (a == 0) {
                cout << "布" << endl;
            } else if (a == 2) {
                cout << "石頭" << endl;
            } else {
                cout << "剪刀" << endl;
            }
            cout << "你輸了，你好弱喔";
            break;
        } else if (b == 1) {  // 平手
            if (a == 0) {
                cout << "石頭" << endl;
            } else if (a == 2) {
                cout << "剪刀" << endl;
            } else {
                cout << "布" << endl;
            }
            cout << "再一次"<<endl;
        } else {  // 電腦輸
            if (a == 0) {
                cout << "剪刀" << endl;
            } else if (a == 2) {
                cout << "布" << endl;
            } else {
                cout << "石頭" << endl;
            }
            cout << "棉芽沒錯吧"<<endl;
        }
    }
    return 0;
}