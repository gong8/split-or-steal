using namespace std;
#include <tuple>
class Entity {
  private:
    Vector2 pos;

  public:

    virtual ~Entity() {
    }

    Entity(Vector2 posi) {
      pos = posi;
    }
    void SetPos(Vector2 posi) {
      pos = posi;
    }
    void Move(Vector2 dif) {
      pos.x = pos.x + dif.x;
      pos.y = pos.y + dif.y;
    }
    Vector2 GetPos() {
      return pos;
    }
    virtual void Draw() = 0;
};