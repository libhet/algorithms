#ifndef ALGORITHMS_STRINGS_H
#define ALGORITHMS_STRINGS_H

#include <string>

namespace alg {
// Напишите программу, содержит ли введенное
// пользователем выражение корректно вложенные скобки.
// Применять в выражении другие символы.
// Пример: (8 / 3) + (20 / (7 – 3)).

    bool check_brackets(const std::string& rhs);

    bool __check_brackets_impl(const std::string& rhs);


    enum class Operator {
        nul = 0, add, mul, sub, div
    };

    std::pair<size_t, size_t>
        __split_to_pair(const std::string& rhs, char delim);

    double evaluate_expression(const std::string& rhs);

    double __evaluate_expression_impl(const std::string& rhs);



}
#endif //ALGORITHMS_STRINGS_H
