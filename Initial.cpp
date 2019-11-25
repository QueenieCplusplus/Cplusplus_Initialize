// 2019, 11/25, 15:00, by Queenie
// 帶有引數的初始化

#include <stdio.h>
#include <stdlib.h>
#include <list>

// v 是 typename 型別的具名變數｜物件｜容器，帶有一個元素，元素數值為 100
std::vector<int> v{100};

int a{}; // a 被配置了數值 0
char c{}; // c 被配置了字元 ""

int fMultiple(int a) {

    int b{100}; 

    b = b * a;

    return b;

}

int main() {

    fMultiple(3);
    return 0;

}