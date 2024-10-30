#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;

Texture texture;
Sprite sprite;

int main() {
	texture.loadFromFile("plataforma.JPG");
	sprite.setTexture(texture);

	sf::RenderWindow App(sf::VideoMode(800, 600, 32), "Actividad 5");

	sprite.setPosition(400, 300);

	while (App.isOpen()) {
		sprite.rotate(1.0f / 10);
		App.clear();
		App.draw(sprite);
		App.display();
	}
}