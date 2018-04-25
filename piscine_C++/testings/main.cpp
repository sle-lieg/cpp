#include <iostream>


// FONCTION TEMPLATE MEMBRE DANS CLASS NON-TEMPLATE
class A
{
    int i;
    
    public:
        template <class T>
        void add(T valeur);
};

template <class T>
void A::add(T valeur)
{
    i += valeur;
}

// FONCTION TEMPLATE MEMBRE DANS CLASS TEMPLATE
template <class T1>
class Chaine
{
    public:
        template <class T2> int compare() const;

    private:
        int _len;
}

// int main()
// {
//     std::cout << "max: " << max(1, 5) << std::endl;
// }