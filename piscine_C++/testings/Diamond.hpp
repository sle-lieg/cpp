#ifndef DIAMOND_HPP
# define DIAMOND_HPP

#include <iostream>

class A
{
    public:
        A() { std::cout << "Constructor A." << std::endl; }
        virtual ~A() { std::cout << "Destructor A." << std::endl; };
    protected:
    private:
};

class B : public A
{
    public:
        B() { std::cout << "Constructor B." << std::endl; }
        ~B() { std::cout << "Destructor B." << std::endl; };
    protected:
    private:    
};

// class A
// {
//     public:
//         A() { std::cout << "Constructor A." << std::endl; }
//         virtual void m() { std::cout << "A::m()" << std::endl; }
//         virtual void p() { std::cout << "A::p()" << std::endl; }

//     protected:
//         virtual ~A() { std::cout << "Destructor A." << std::endl; };
//     private:

//         int _x;
// };

// class B
// {
//     public:
//         virtual void n() { std::cout << "B::n()" << std::endl; }
//         virtual void q() {
//             std::cout << "B::q()" << std::endl;
//             n();
//             // _x++;    
//         }

//         int _a;
//         // B() { std::cout << "Constructor B." << std::endl; }
//         // void f() { std::cout << " Class B f()" << std::endl; }
// };

// class C : public A, public B
// {
//     public:
//         void m() {
//             std::cout << "C::m()" << std::endl;
//             q();
//         }
//         void n() { 
//             std::cout << "C::n()" << std::endl;
//             p();
//             _k++;
//         }
//         virtual void q() {
//             std::cout << "C::q()" << std::endl;
//             n();
//             // _x++;    
//         }
//         int _k;
//         // C() { std::cout << "Constructor C." << std::endl; }
//         // void f() { std::cout << " Class C f()" << std::endl; }
// };

// // class D : public B,  public C
// // {
// //     public:
// //         // D() { std::cout << "Constructor D." << std::endl; }
// //         // void f() { B::f(); }
// //         // void f() { std::cout << " Class D f()" << std::endl; }
// // };

#endif