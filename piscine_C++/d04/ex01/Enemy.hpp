#ifndef ENNEMY_HPP
# define ENNEMY_HPP

#include <iostream>

class Enemy {
    protected:
        int         _hitPoints;
        std::string _type;
 
    public:
        Enemy();
        Enemy(int hp, std::string const & type);
        Enemy(Enemy const &);
        virtual ~Enemy();

        Enemy& operator=(Enemy const &);

        std::string const   getType() const;
        int                 getHP() const;
        virtual void        takeDamage(int);
 };

#endif