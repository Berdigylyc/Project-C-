#ifndef BLOCKSFIELD_HPP_
#define BLOCKSFIELD_HPP_

#include <list>
#include "Ball.hpp"

class BlocksField
{
private:
    std::list<Block> blocks;
    //int exist;

public:
    BlocksField(const sf::Vector2f & size, const sf::Vector2f & position, const sf::Color & color, int columns, int rows);

    void Update(Ball & ball);

    void Draw(sf::RenderWindow & window);

    //void Minus(int x){exist-=x;}

    //int Exist(int xx){return(xx);}
};

#endif // BLOCKSFIELD_HPP_
