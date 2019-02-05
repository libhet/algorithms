#include "strings.h"

namespace alg {

    bool check_brackets(const std::string& rhs) {
        return __check_brackets_impl(rhs);
    }

    bool __check_brackets_impl(const std::string& rhs) {
        int counter = 0;
        size_t size = rhs.size();
        for(size_t i = 0; i < size; ++i){
            if(rhs[i] == '(') ++counter;
            if(rhs[i] == ')') --counter;
        }
        if(counter == 0)
            return true;
        else
            return false;
    }


    Operator __is_this_an_operator(char c) {
            switch(c){
                case '+':
                    return Operator::add;
                case '-':
                    return Operator::sub;
                case '/':
                    return Operator::div;
                case '*':
                    return Operator::mul;
                default:
                    return Operator::nul;
            }
    }

    double __evaluate_expression_impl(const std::string& rhs) {
        int counter = 0;
        size_t size = rhs.size();
        for(size_t i = 0; i < size; ++i) {
            if(counter == 0) {
                if(auto op = __is_this_an_operator(rhs[i])) {

                }
            }
        }
    }

    std::pair<size_t, size_t> alg::__split_to_pair(const std::string &rhs, char delim) {
        return ;
    }

}

