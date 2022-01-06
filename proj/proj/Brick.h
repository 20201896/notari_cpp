#pragma once
#include<iostream>
#include<vector>
#include<ctime>
#include<sstream>

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
class Brick
{
public:
	Brick(int x, int y, sf::Color col);
	~Brick();
	void render(sf::RenderTarget& target);
private:
	sf::RectangleShape brick;
	int posX;
	int posY;
	sf::Color colour;
};

