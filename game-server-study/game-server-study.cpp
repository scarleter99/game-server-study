#include <iostream>
using namespace std;

#define SHOW(V)     \
{                   \
    int x = V;          \
    cout << x;          \
}

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

void Test4() {
    int x = 0;
    x++;
}

int main()
{
    //Test();
    //Test2();
    //Test3();
    Test4();
}