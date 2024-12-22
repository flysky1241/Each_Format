#include <iostream>
#include "ConstructArr.h"
#include <forward_list>
#include <cmath>
#include <chrono>

static void Test1(){
    std::ios::sync_with_stdio(false);
    auto start = std::chrono::system_clock::now();
    std::forward_list<int> lst{4, 12,3,7,0};
    JUN::Each_Format<0>(lst);
    JUN::Each_Format<1>(lst);

    auto end = std::chrono::system_clock::now();
    std::chrono::duration<double_t, std::milli> time = end -start;
    std::cout<<time.count()<<std::endl;
}

int main() {
    Test1();
    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.