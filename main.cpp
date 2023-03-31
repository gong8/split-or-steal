#include <iostream>
#include <raylib.h>
#include "Classes/entity.h"
#include "Classes/food.h"
#include "Classes/person.h"
#include <tuple>
#include <vector>
#include <memory>

using namespace std;

int main () {
  const int screenWidth = 800;
  const int screenHeight = 600;
  //Camera2D cam = { 0 };
  //cam.rotation = 30;
  SetTargetFPS(60);
  vector<Entity*> drawables;
  vector<Person*> people;
  vector<Food*> foods;

  Person* p1 = new Person(drawables, people, Vector2{2, 3}, 0);
  Person* p2 = new Person(drawables, people, Vector2{40, 80}, 0);
  Food* f1 = new Food(drawables, foods, Vector2{400, 400});


  cout << drawables.size();
  
  cout << drawables.size();

  //dopa.SetPos(make_tuple(2, 1));

  
  //Person* person = (Person*) malloc(sizeof(Person));

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
      e->Seek(foods);
      //cout << e->GetFood();
      //e->Move(make_tuple(0.2, 0.2));
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

