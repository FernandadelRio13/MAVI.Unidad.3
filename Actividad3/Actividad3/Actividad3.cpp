#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;

Texture texture;
Sprite sprite;
float scaleX;
float scaleY;
int main() {
	sf::RenderWindow App(sf::VideoMode(800, 600, 32), "Actividad 3");

	texture.loadFromFile("fondo.JPG");
	sprite.setTexture(texture);

	scaleX = 800.0f / texture.getSize().x;
	scaleY = 600.0f / texture.getSize().y;
	sprite.setScale(scaleX, scaleY);

	while (App.isOpen()) {
		App.clear();
		App.draw(sprite);
		App.display();
	}
}