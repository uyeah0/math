#include <iostream>
#include "addition.hpp"
#include "subtraction.hpp"
#include "division.hpp"

int main() {
    int a, b;

    // ����ڷκ��� �� ���� �Է� �ޱ�
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;

    // ���� ���� ������ ��� ���
    std::cout << "Addition: " << add(a, b) << std::endl;
    std::cout << "Subtraction: " << subtract(a, b) << std::endl;
    std::cout << "Division: " << division(a, b) << std::endl;

    // ���α׷� ���� ���� ���� Ű �Է��� ��ٸ���
    std::cout << "Press Enter to exit...";
    std::cin.ignore();  // �����ִ� �Է� ���۸� �����
    std::cin.get();     // ���� Ű�� ��ٸ�

    return 0;
}
