#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;

Texture textureW;
Texture textureB;
Sprite sprites[8][8];

float scaleX, scaleY;

int main() {
	textureB.loadFromFile("chessb.PNG");
	textureW.loadFromFile("chessw.PNG");

	sf::RenderWindow App(sf::VideoMode(800, 600, 32), "Actividad 2");

	float scaleX = 800.0f / (8 * 128.0f);
	float scaleY = 600.0f / (8 * 128.0f);

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if ((i + j) % 2 == 0) {
				sprites[i][j].setTexture(textureW);
			}
			else {
				sprites[i][j].setTexture(textureB);
			}
			sprites[i][j].setPosition(i * 128 * scaleX, j * 128 * scaleY);

			sprites[i][j].setScale(scaleX, scaleY);
		}
	}

	while (App.isOpen()) {
		App.clear();
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++) {
				App.draw(sprites[i][j]);
			}
		}
		App.display();
	}
}