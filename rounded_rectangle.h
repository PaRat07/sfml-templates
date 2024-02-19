#pragma once

#include <SFML/Graphics.hpp>
#include <iostream>

namespace sf {

 class RoundedRectangleShape : public sf::Drawable {
 public:
    explicit RoundedRectangleShape(sf::Vector2f size);

    void setSize(sf::Vector2f new_size);

    [[nodiscard]] const sf::Vector2f &getSize() const {
        return size_;
    }

    void setPosition(sf::Vector2f new_pos);

    [[nodiscard]] const sf::Vector2f &getPosition() const {
        return pos_;
    }

    void setFillColor(sf::Color new_color);

    void setOutlineColor(sf::Color new_color);

     [[nodiscard]] const sf::Color &getFillColor() const {
        return fill_color_;
    }

     [[nodiscard]] const sf::Color &getOulineColor() const {
        return outline_color_;
    }

    void setOutlineThickness(float thick);

     [[nodiscard]] float getOutlineThickness() const {
        return outline_thickness_;
    }

    void setRoundRadius(float new_r);

     [[nodiscard]] float getRoundRadius() const {
        return radius_;
    }

    void draw(RenderTarget& target, RenderStates states) const override;

 private:
    float radius_ = 0, outline_thickness_ = 1;
    sf::Vector2f pos_{ 0.f, 0.f}, size_;
    sf::Color outline_color_ = sf::Color::Black, fill_color_ = sf::Color::Transparent;
};

} // namespace sf
