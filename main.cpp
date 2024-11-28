#include <iostream>
#include "addition.hpp"
#include "subtraction.hpp"
#include "division.hpp"

int main() {
    int a, b;

    // 사용자로부터 두 정수 입력 받기
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;

    // 덧셈 뺄셈 나눗셈 결과 출력
    std::cout << "Addition: " << add(a, b) << std::endl;
    std::cout << "Subtraction: " << subtract(a, b) << std::endl;
    std::cout << "Division: " << division(a, b) << std::endl;

    // 프로그램 종료 전에 엔터 키 입력을 기다리기
    std::cout << "Press Enter to exit...";
    std::cin.ignore();  // 남아있는 입력 버퍼를 비워줌
    std::cin.get();     // 엔터 키를 기다림

    return 0;
}
