#include <iostream>

template <typename T1, typename T2>
class Base {
public:
    Base(T1 value1, T2 value2) : value1(value1), value2(value2) {}

protected:
    T1 value1;
    T2 value2;
};

template <typename T1, typename T2, typename T3, typename T4>
class Child : public Base<T1, T2> {
public:
    Child(T1 value1, T2 value2, T3 value3, T4 value4)
        : Base<T1, T2>(value1, value2), value3(value3), value4(value4) {}

private:
    T3 value3;
    T4 value4;
};

template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
class Child2 : public Child<T1, T2, T3, T4> {
public:
    Child2(T1 value1, T2 value2, T3 value3, T4 value4, T5 value5, T6 value6)
        : Child<T1, T2, T3, T4>(value1, value2, value3, value4), value5(value5), value6(value6) {}

private:
    T5 value5;
    T6 value6;
};

int main() {
    Base<int, double> base(10, 3.14);
    Child<int, double, char, std::string> child(20, 6.28, 'a', "hello");
    Child2<int, double, char, std::string, bool, float> child2(30, 9.42, 'b', "world", true, 1.23);

    return 0;
}
