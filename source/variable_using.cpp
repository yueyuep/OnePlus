#include <iostream>
#include "string"
#include "variable_using.h"

using namespace std;

/*
 * 函数申明
 * */


void helloWord() {
    cout << "hello word!" << endl;
}

int testcase1() {
    // 8进制
    int a = 07;
    int b = 012;
    cout << a << "\n" << b << endl;

}


/*指针*/
void testcase2() {
    // 指针是对象，
    int *ptr_int = nullptr;
    int num = 1024;
    int *ptr_n = &num; //指针
    int **pptr_n = &ptr_n; //指向指针的指针
    // 常量必须由常量指针进行指向，但是常量指针可以执行非常量，并且非常量是不可以被修改的
    const double pi = 3.14;
    double r = 2.0;
    //double *ptr_pi=&pi; //编译器报错
    const double *ptr = &r;
    //(*ptr)++; //被常量指针修饰色变量不可以通过指针进行修改


}

// 引用
void testcase3() {
    // 引用是对象的别名
    // 对象是内存中存储的一块数据
    // 引用不是对象，引用必须与引用对象绑定，必须初始化
    int a = 0, &r1 = a;
    double b = 0, &r2 = b;
    cout << "a:" << a << "\tb:" << b << endl;
    cout << "r1:" << r1 << "\tr2:" << r2 << endl;
    a++;
    cout << "r1:" << r1 << "\tr2:" << r2 << endl;


    /*引用类型是否可以复制给常量，或者表达式的值？（NO）
     *常量引用呢？（YES）
     */
    // int &a1=3*5; // 编译器报错,
    const int &a2 = 3 * 5; //常量支持,但a2不可以被修改
    cout << "a2:" << a2 << endl;
    string string1 = "hello";
    string &str = string1;
    cout << "str:" << str << endl;


}

//const关键字
void testcase4() {
    //顶层const和底层const

}

int add(int a, int b) {
    return a + b;
}