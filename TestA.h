#ifndef NA_MEMORY_TESTA_H
#define NA_MEMORY_TESTA_H


class TestA {

private:

    int *value;

public:

        TestA();
        TestA(int x);
        ~TestA();
        TestA(const TestA& original);
        TestA& operator=(const TestA& original);
        TestA(TestA&& original);
};


#endif //NA_MEMORY_TESTA_H