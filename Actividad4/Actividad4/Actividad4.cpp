#include <iostream>
#include <SFML/Graphics.hpp>
#include <vector>
using namespace sf;
using namespace std;

Texture plataforma;
vector<Sprite> sprites;
float width;
float height;

int main() {
    
    plataforma.loadFromFile("plataforma.jpg");

    width = plataforma.getSize().x;
    height = plataforma.getSize().y;

    for (int i = 0; i < 7; i++) {
        Sprite sprite;
        sprite.setTexture(plataforma);
        sprite.setScale(0.15f, 0.2f * (i + 1));
        sprite.setPosition(i * ((width * 0.15f) + 20), 600 - (i + 1) * width * 0.15f);
        sprites.push_back(sprite);
    }
    Sprite sprite;
    sprite.setTexture(plataforma);
    sprite.setScale(0.2f * 7, 0.15f);
    sprite.setPosition(7 * ((width * 0.15f) + 20), height * 0.2f * 6.5f);
    sprites.push_back(sprite);

    sf::RenderWindow App(VideoMode(800, 600, 32), "Plataformas");
    while (App.isOpen()) {
        App.clear();
        for (auto sprite : sprites) {
            App.draw(sprite);
        }
        App.display();
    }
    return 0;
}