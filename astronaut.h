#include <string>

#include "cpputils/graphics/image.h"

// These header guards are necessary to keep your class from being defined
// multiple times when it is included from multiple files.
#ifndef ASTRONAUT_H
#define ASTRONAUT_H


class Astronaut 
{
  public:
    Astronaut(std::string nName, graphics::Color nColor) : astro_name_(nName), color_(nColor) {}
    std::string GetName() const {
      return astro_name_;
    }
    graphics::Color GetColor() const {
      return color_;
    }
    std::string GetIconFilename() const {
      return "astronaut.bmp";
    }
  private:
    std::string astro_name_;
    graphics::Color color_;
};



#endif  // ASTRONAUT_H
