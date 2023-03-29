using namespace std;
#include <tuple>
class Entity {
  private:
    tuple<float, float> pos;

  public:

    virtual ~Entity() {
    }

    Entity(tuple<float, float> pos) {
      pos = pos;
    }
    void SetPos(tuple<float, float> pos) {
      pos = pos;
    }
    void Move(tuple<float, float> dif) {
      pos = make_tuple(get<0>(pos) + get<0>(dif), get<1>(pos) + get<0>(dif));
    }
    tuple<float, float> GetPos() {
      return pos;
    }
    virtual void Draw() = 0;
};