#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;

Texture texture;
Sprite sprite1, sprite2, sprite3, sprite4;


int main() {

	texture.loadFromFile("rcircle.PNG");
	sprite1.setTexture(texture);
	sprite2.setTexture(texture);
	sprite3.setTexture(texture);
	sprite4.setTexture(texture);

	sprite1.setPosition(0,0);
	sprite2.setPosition((800-128),0);
	sprite3.setPosition(0,(600-128));
	sprite4.setPosition((800-128),(600-128));

	bool direction = false;

	sf::RenderWindow App(sf::VideoMode(800, 600, 32), "Actividad 1");
	while (App.isOpen()) {
		App.clear();
		App.draw(sprite1);
		App.draw(sprite2);
		App.draw(sprite3);
		App.draw(sprite4);
		App.display();
	}
}