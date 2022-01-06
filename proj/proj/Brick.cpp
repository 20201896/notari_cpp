#include "Brick.h"
Brick::Brick(int x, int y, sf::Color col)
{
	this->posX = x;
	this->posY = y;
	this->colour = col;
	this->brick.setSize(sf::Vector2f(80, 30));
	this->brick.setPosition(this->posX, this->posY);
	this->brick.setFillColor(this->colour);
}
Brick::~Brick() 
{
}
void Brick::render(sf::RenderTarget& target)
{
	target.draw(this->brick);
}