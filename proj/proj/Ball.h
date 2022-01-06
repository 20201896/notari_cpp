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

#include <stdlib.h> //allows for random number generator
class Ball
{
public:
	Ball();
	void update();
	void bounce();
	void render();
private:
	int velocity[2];
	sf::Texture texture;
	sf::Sprite ball;
	sf::IntRect rect;
};

