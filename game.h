#pragma once
#include <vector>
#include "settings.h"
#include "player.h"
#include "okean.h"
class Game {
public:
	enum GameState { PLAY, GAME_OVER, YOU_WIN };
	GameState gameState = PLAY;
	Game() {
		window.create(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), WINDOW_TITLE);
		window.setFramerateLimit(FPS);
		
	}

	void play() {
		while (window.isOpen()) {
			checkEvents();
			update();
			draw();
		}
	}

private:
	sf::RenderWindow window;
	Player player;
	Okean ocean;

	void checkEvents() {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				window.close();
		}
	}

	void update() {
		switch (gameState) {
		case PLAY:
			player.update();
			ocean.update();
			break;
		case GAME_OVER:
			
			break;
		case YOU_WIN:
			
			break;
		}
	}


	void checkCollisions() {
		   


	}

	void draw() {
		switch (gameState) {
		case PLAY:
			window.clear();
			ocean.draw(window);
			player.draw(window);
			window.display();
			break;
		case GAME_OVER:
			window.clear();
			
			window.display();
			break;
		case YOU_WIN:
			window.clear();
		
			window.display();
			break;
		}
	}
};
