#include <iostream>
#include <raylib.h>
#include <Classes/entity.h>
#include <Classes/person.h>
#include <tuple>
#include <vector>
#include <memory>

using namespace std;

int main () {
    const int screenWidth = 800;
    const int screenHeight = 600;
    vector<shared_ptr<Entity>> drawables;
    vector<shared_ptr<Person>> people;
    shared_ptr<Person> dopa = make_shared<Person>(make_tuple(2, 3), 4);
    drawables.emplace_back(dopa);
    people.emplace_back(dopa);

    //dopa.SetPos(make_tuple(2, 1));

    cout << "Hello World" << endl;

    InitWindow(screenWidth, screenHeight, "My first RAYLIB program!");
    SetTargetFPS(60);

    while (WindowShouldClose() == false) {
        BeginDrawing();
        ClearBackground(WHITE);
        for (auto &e : drawables) {
            e->Draw();
        }
        for (auto &e : people) {
            cout << e->GetFood();
        }

        // ball_x += ball_speed_x;
        // ball_y += ball_speed_y;

        // if(ball_x + ball_radius >= screenWidth || ball_x - ball_radius <= 0)
        // {
        //     ball_speed_x *= -1;
        // }

        // if(ball_y + ball_radius >= screenHeight  || ball_y - ball_radius <= 0)
        // {
        //     ball_speed_y *= -1;
        // }

        // DrawCircle(ball_x,ball_y,ball_radius, BLACK);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}