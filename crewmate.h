#include "astronaut.h"

// These header guards are necessary to keep your class from being defined
// multiple times when it is included from multiple files.
#ifndef CREWMATE_H
#define CREWMATE_H

// ========================= YOUR CODE HERE =========================
// Define the Crewmate class here, which inherits from the Astronaut
// base class. Refer to the README for instructions.
// ===================================================================
class Crewmate : public Astronaut {
  public:
    Crewmate(std::string nName, graphics::Color nColor) : Astronaut(nName, nColor), alive_(true), task_count_(0){}
    Crewmate() : Astronaut("no name", graphics::Color(0,0,0)), alive_(true), task_count_(0) {}
    bool GetIsAlive() const {
      return alive_;
    }
    void SetIsAlive(bool IsAlive) {
      alive_ = IsAlive;
    }
    int GetTaskCount() const {
      return task_count_;
    }
    void DoTask(std::string task_name) {
      task_count_++;
      std::cout << GetName() << " is doing " << task_name << std::endl;
    }
    graphics::Color GetColor() {
      graphics::Color astro_color = Astronaut::GetColor();
      if(alive_){
        return astro_color;
      }else{
        return graphics::Color (((astro_color.Red() + 256) / 2),
                        ((astro_color.Green() + 256) / 2),
                        (astro_color.Blue() + 256) / 2);
      }
    }
    std::string GetIconFilename() {
      if (alive_) {
        return Astronaut::GetIconFilename();
      } else {
        return "ghost.bmp";
      }
    }
  private:
    bool alive_;
    int task_count_;
};


#endif  // CREWMATE_H
