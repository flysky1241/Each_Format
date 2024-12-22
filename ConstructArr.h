//
// Created by PC on 2024/12/22.
//
#ifndef CODEC___CONSTRUCTARR_H
#define CODEC___CONSTRUCTARR_H
#include "JUNKernl.h"
#include <algorithm>
#include <array>

JUN_BEGIN
PERML_BEGIN
template <unsigned N>
static constexpr std::array<char, N> getNewArray(){
    static_assert(N==3 || N==2, "N must is 0 or 1");
    if constexpr (N==3){
        return {'\0', ' ', '\0'};
    }
    else{
        return {'\0','\0'};
    }
};
PERML_END

template<unsigned N, typename InputIt, unsigned N2=N+2>
static constexpr  void Each_Format(InputIt first, InputIt last){
    std::ios::sync_with_stdio(false);
    auto Array = Perml::getNewArray<N2>();
    std::for_each(first, last, [&Array](auto i){
        std::cout<<Array._M_elems<<i;
        if constexpr (N==0){
            Array[0] = ' ';
        }
        else{
            Array[0] = ',';
        }
    });
    std::cout<<'\n';
};

template<unsigned N, typename _Tp, unsigned N2=N+2>
static constexpr  void Each_Format(_Tp class_value){
    JUN::Each_Format<N>(std::begin(class_value), std::end(class_value));
}
JUN_END
#endif //CODEC___CONSTRUCTARR_H
