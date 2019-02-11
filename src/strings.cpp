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

    double evaluateExpression(const std::string& expression) {
        int counter = 0;
        size_t size = expression.size();
        for(size_t i = 0; i < size; ++i) {
            if(expression[i] == '(') ++counter;
            else if (expression[i] == ')') {
                --counter;
                if(counter < 0) {
                    throw EvaluateExpressionException();
                }
            }
            
            if(counter == 0) {
                if(auto op = __is_this_an_operator(expression[i])) {
                    /// operands on the both sides of operator
                    auto operand1 = expression.substr(0,i);
                    auto operand2 = expression.substr(i+1);

                    double value1 = evaluateExpression(operand1);
                    double value2 = evaluateExpression(operand2);

                    double result;
                    switch(op){
                        case Operator::div : result = value1 / value2;
                            break;
                        case Operator::mul : result = value1 * value2;
                            break;
                        case Operator::sub : result = value1 - value2;
                            break;
                        case Operator::add : result = value1 + value2;
                            break;
                    }
                    return result;
                }

            }
        }
    }

    // std::pair<size_t, size_t> alg::__split_to_pair(const std::string &rhs, char delim) {
    //     return ;
    // }

}

