// cppl-homeworks_02_2.cpp 

#include <iostream>
//#include <string>

double abc(double f,double p) 
{
    double t = f / p;
    return t;
}

int main()
{
    int a;//неиспользованная локальная переменная(синтаксическая)
    //std::cout << abc() << std::endl; // abc: функция не принемает 0 аргументов (синтаксическая)
    //std::cout << abc(5,0) << std::endl; // Делить на ноль нельзя (семантическая ошибка)
    std::cout << std::to_string(abc(5, 2)) << std::endl;// "to_string": не является членом "std" Добавить библиотеку (ошибка линковки)
    return 0;
}
