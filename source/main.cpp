#include <iostream>
#include "main.h"
using namespace std;

/*
 * 函数申明
 * */

int main() {
    helloWord();
    testcase1();
    testcase2();

}

void helloWord() {
    cout << "hello word!" << endl;
}

int testcase1() {
    // 8进制
    int a = 07;
    int b = 012;
    cout << a << "\n" << b << endl;

}

/*引用、指针*/
void testcase2() {

    int a = 0, &r1 = a;
    double b = 0, &r2 = b;

    cout << "a:" << a << "\tb:" << b << endl;
    cout << "r1:" << r1 << "\tr2:" << r2 << endl;
    a++;
    cout << "r1:" << r1 << "\tr2:" << r2 << endl;

}
