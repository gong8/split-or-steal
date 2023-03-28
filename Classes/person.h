using namespace std;
#include <tuple>

class Person : public Entity
{
    private:
        int food = 0;

    public:
        Person(tuple<int, int> pos, int food) : Entity(pos) {
            food = food;
        }

        void Draw()
        {
            DrawCircle(get<0>(GetPos()), get<1>(GetPos()), 30.0, RED);
        }

        int GetFood()
        {
            return food;
        }
};
