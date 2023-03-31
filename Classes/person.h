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
    //vector<Food*>& foods;

  public:
    Person(vector<Entity*>& drawables, vector<Person*>& people,Vector2 pos, int food) : Entity(pos), drawables(drawables), people(people) {
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
      DrawCircle(GetPos().x, GetPos().y, 30.0, RED);
    }
    
    void Seek(vector<Food*>& foods) {
       for (auto i : foods) {
        
       }
    }

    int GetFood() {
      return food;
    }
};
