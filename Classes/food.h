using namespace std;
#include <tuple>
#include <iostream>
#include <vector>
#include <memory>


class Food : public Entity {
  private:
    vector<Entity*>& drawables;
    vector<Food*>& food;

  public:
    Food(vector<Entity*>& drawables, vector<Food*>& food, Vector2 pos) : Entity(pos), drawables(drawables), food(food) {
      drawables.emplace_back(this);
      food.emplace_back(this);
    }

    ~Food() {
      int i = 0;
      for (auto v :drawables) {
        if (v == this) {
          drawables.erase(drawables.begin() + i);
          food.erase(food.begin() + i);
          break;
        }
        ++i;
      }
      
    }

    void Draw() {
      DrawCircle(GetPos().x, GetPos().y, 30.0, BLACK);
    }
};
