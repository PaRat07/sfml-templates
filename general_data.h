#pragma once

#include "SFML/Graphics.hpp"

sf::Font LoadFont(std::string path);

sf::Color background_color = sf::Color(152, 147, 218);
sf::Color text_color = sf::Color(0, 0, 0);
sf::Color outline_color = sf::Color(114, 114, 126);
sf::Color fill_color = sf::Color(187, 189, 246);
sf::Font font = LoadFont("..\..\JetBrainsMono-Medium.ttf");
float letter_size = 20.f;
