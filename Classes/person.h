using namespace std;
#include <tuple>
#include <iostream>
#include <vector>
#include <memory>


class Person : public Entity {
  private:
    int food = 0;
    float dir = 0;
    vector<Entity*>& drawables;
    vector<Person*>& people;

  public:
    Person(vector<Entity*>& drawables, vector<Person*>& people, tuple<float, float> pos, int food) : Entity(pos), drawables(drawables), people(people) {
      //drawables = drawables;
      food = food;
      drawables.emplace_back(this);
      people.emplace_back(this);
    }

    ~Person() {
      int i = 0;
      for (auto v :drawables) {
        if (v == this) {
          drawables.erase(drawables.begin() + i);
          people.erase(people.begin() + i);
          break;
        }
        ++i;
      }
      
    }

    void Draw() {
      DrawCircle(get<0>(GetPos()), get<1>(GetPos()), 30.0, RED);
    }

    int GetFood() {
      return food;
    }
};
