#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;

Texture red, blue, yellow, grey;
Sprite sprite_r, sprite_b, sprite_y, sprite_g;
float scaleX, scaleY;

int main() {
	red.loadFromFile("cuad_red.PNG");
	blue.loadFromFile("cuad_blue.PNG");
	yellow.loadFromFile("cuad_yellow.PNG");
	grey.loadFromFile("cuad_grey.PNG");
	sprite_r.setTexture(red);
	sprite_b.setTexture(blue);
	sprite_y.setTexture(yellow);
	sprite_g.setTexture(grey);

	sf::RenderWindow App(sf::VideoMode(800, 800, 32), "Actividad 6");

	//Al generar una ventana de 800 x 800, cada cuadrado debera ser de 400x400
	scaleX = 400;
	scaleY = 400;

	sprite_r.setScale(scaleX, scaleY);
	sprite_b.setScale(scaleX, scaleY);
	sprite_y.setScale(scaleX, scaleY);
	sprite_g.setScale(scaleX, scaleY);

	sprite_r.setPosition(0, 0);
	sprite_b.setPosition(0, 400);
	sprite_y.setPosition(400, 0);
	sprite_g.setPosition(400, 400);

	red.setSmooth(true);
	blue.setSmooth(true);
	yellow.setSmooth(true);
	grey.setSmooth(true);

	while (App.isOpen()) {
		App.clear();
		App.draw(sprite_r);
		App.draw(sprite_b);
		App.draw(sprite_y);
		App.draw(sprite_g);
		App.display();
	}
}