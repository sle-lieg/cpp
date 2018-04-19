#include <iostream>

class IA {
    public:
        virtual ~IA() {}
        virtual void test() const = 0;

    protected:
        int val = 0;
};

class B : public IA {
    
    public:
        B() { val = 5;};
        void test() const { std::cout << "testing " << val << std::endl;}
        // B(A const &);
};

int main()
{
    B b;

    b.test();
}