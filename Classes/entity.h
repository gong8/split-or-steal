using namespace std;
#include <tuple>
class Entity 
{
    private:
        tuple<int, int> pos;

    public:
        Entity(tuple<int, int> posi) {
            pos = posi;
        }
        void SetPos(tuple<int, int> posi) 
        {
            pos = posi;
        }
        tuple<int, int> GetPos() {
            return pos;
        }
        virtual void Draw() = 0;
};