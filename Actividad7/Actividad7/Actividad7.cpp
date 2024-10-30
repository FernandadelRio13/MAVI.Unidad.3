#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;

Texture texture_r, texture_b;
Sprite sprite1, sprite2, sprite3, sprite4, sprite_b;

int main() {

	texture_r.loadFromFile("rcircle.PNG");
	texture_b.loadFromFile("bcircle.PNG");
	sprite1.setTexture(texture_r);
	sprite2.setTexture(texture_r);
	sprite3.setTexture(texture_r);
	sprite4.setTexture(texture_r);
	sprite_b.setTexture(texture_b);

	sprite1.setPosition(0, 0);
	sprite2.setPosition((800 - 128), 0);
	sprite3.setPosition(0, (600 - 128));
	sprite4.setPosition((800 - 128), (600 - 128));
	sprite_b.setPosition((800-340)/2, (600-256)/2); //el circulo es 340x256

	bool direction = false;

	sf::RenderWindow App(sf::VideoMode(800, 600, 32), "Actividad 1");
	while (App.isOpen()) {
		App.clear();
		App.draw(sprite1);
		App.draw(sprite2);
		App.draw(sprite3);
		App.draw(sprite4);
		App.draw(sprite_b);
		App.display();
	}
}
