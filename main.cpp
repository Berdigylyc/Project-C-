#include <SFML/Graphics.hpp>
#include <iostream>
#include "GlobalObjects.hpp"
#include "BlocksField.hpp"
#include "Paddle.hpp"
#include "Game.hpp"
#include "Ball.hpp"

int main()
{
	int a{0},b{0};
	a = 9;  //width
	b = 6;  //length
    	sf::Event event;
    	sf::Clock clock;
    	float deltaTime;

    	BlocksField blocksField(sf::Vector2f(GlobalObjects::windowWidth, 200.f), sf::Vector2f(0.f, 0.f), sf::Color::Cyan, a, b);

    	Game::createBall(Ball(10.f, sf::Vector2f(225.0710f, 400.f), sf::Color::White, 180.f, 110.f));

    	Game::createPaddle(Paddle(sf::Vector2f(100.f, 10.f), sf::Vector2f(256.f, 450.f), sf::Color::Magenta, 200.f));

    	while (GlobalObjects::window.isOpen())
        {
        	deltaTime = clock.restart().asSeconds();

        	while (GlobalObjects::window.pollEvent(event))
        	{
            		if (event.type == sf::Event::Closed)
                	GlobalObjects::window.close();
        	}
        	if (!Game::Update(deltaTime,blocksField)){
                return 0;

        	}

        if (a*b-Game::Exist() == 0)
        {
        	std::cout<<"\a\a\a\a\a\n\n===============================================================\n\nCongratulations ! You are the first person who won the game :)\n\n===============================================================\n"<<std::endl;
            return 0;
        }

        Game::Update(deltaTime, blocksField);

        GlobalObjects::window.clear(sf::Color::Black);

        blocksField.Draw(GlobalObjects::window);
        Game::Draw(GlobalObjects::window);

        GlobalObjects::window.display();
    }

    return 0;
}
