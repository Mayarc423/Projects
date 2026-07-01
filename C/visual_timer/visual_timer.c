#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "raylib.h"

#define SCREEN_WIDTH 900
#define SCREEN_HEIGHT 600
#define START_ANGLE 640.0f

bool timer (float value, clock_t start)
{
  
  clock_t end  = start + (1000 * CLOCKS_PER_SEC * (value / 360) / 1000);
  if (clock() > end ){
  return true;
  printf("Min time has passed");
  }
  return false;
}

int main(int argc, char *argv[])
{
  if (argc < 2)
  {
    fprintf(stderr, "Usage: %s <seconds>\n", argv[0]);
    return EXIT_FAILURE;
  }
  
  float value = atoi(argv[1]);
  printf("value = %f\n", value);
  InitWindow(SCREEN_WIDTH,SCREEN_HEIGHT,"Visual Timer");
  Vector2 center = {SCREEN_WIDTH/2,SCREEN_HEIGHT/2};
  float angle_var = START_ANGLE;
  clock_t start = clock();
  SetTargetFPS(60);
  while (!WindowShouldClose()&&angle_var>270)
  {
    if(timer(value, start))
    { 
    printf("%f seconds have passed\n", value / 360.0);
    angle_var = angle_var -1;
    start = clock();
    }
    BeginDrawing();
      ClearBackground(DARKGRAY);
      DrawCircleV(center, 55, DARKBLUE);
      DrawCircleSector(center, 50,angle_var,270 ,100, RAYWHITE);
    EndDrawing();
  }
  CloseWindow();
  return EXIT_SUCCESS;
}
