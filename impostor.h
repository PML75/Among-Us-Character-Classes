#include "astronaut.h"
#include "crewmate.h"

// These header guards are necessary to keep your class from being defined
// multiple times when it is included from multiple files.
#ifndef IMPOSTOR_H
#define IMPOSTOR_H

class Impostor : public Astronaut {
  public:
    Impostor(std::string nName, graphics::Color nColor) : Astronaut(nName, nColor) {}
    Impostor() : Astronaut("Phu", graphics::Color(23,54,3)) {}
    void Kill(Crewmate& astro) const {
      std::cout <<GetName() << " killed " << astro.GetName() << std::endl;
      astro.SetIsAlive(false);
    }
};

#endif  // IMPOSTOR_H
