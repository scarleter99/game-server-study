#include <iostream>
using namespace std;

#define SHOW(V)     \
{                   \
    int x = V;          \
    cout << x;          \
}

struct Data
{
    int a;
    int b;
    int c;
    char f[33];
};

void Test() {
    int a;
    int b;
    int c;

    a = 1;
    b = 2;
    c = a + b;
    c = a * 3;
}

void Test2() {
    int a;
    int b = 20;

    a = b == 30 ? 10 : 20;

    int c = sizeof(int);
}

void Test3() {
    int a = 0;
    while (1) {
        a++;
    }

    for (;;) {
        a++;
    }
}

int Test4(int a, int b) {
    int x = 0;
    x++;
    return 10;
}

int Test5() {
    int x = 0;
    x++;
    if (x == 1)
        return x;
}

int Test6(Data d) {
    return 0;
}

void Test7() {
    int r;

    srand(10);

    r = rand();
    cout << r << endl;
    r = rand();
    cout << r << endl;
    r = rand();
    cout << r << endl;
    r = rand();
    cout << r << endl;
    r = rand();
    cout << r << endl;
}

int main()
{
    Data d;
    d.a = 1;
    d.b = 2;
    d.c = 3;

    //Test();
    //Test2();
    //Test3();
    //int x = Test4(1, 2);
    //int x = Test5();
    //int x = Test6(d);
    Test7();

    return 0;
}