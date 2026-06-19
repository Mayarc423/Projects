#include "raylib.h"



int main(void)
{
  const int screenWidth = 800;
  const int screenHeight = 450;

  InitWindow(screenWidth,screenHeight, "Function Plotter");

 Vector2 startPosXAxis = {
    0,
    screenHeight - 100
};

Vector2 endPosXAxis = {
    screenWidth,
    screenHeight - 100
};
  SetTargetFPS(60);

  while (!WindowShouldClose())
  {

    BeginDrawing();
      ClearBackground(DARKGRAY);
    //Define x-axis
    DrawLineDashed(startPosXAxis, endPosXAxis, 10, 10 , BLACK);
    //Define y-axis
    DrawLine(screenWidth - 700, 0, screenWidth-700, screenHeight, BLACK);
    EndDrawing(); 
  }
  CloseWindow();
  return 0;
}
