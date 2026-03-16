#include "raylib.h"

int main(int argc, const char **argv) {
  const int screenWidth = 1280;
  const int screenHeight = 720;
  const char *windowTitle = "Hello Cmake";
  const char *message = "It's great to be here";
  const int fontSize = 60;
  const float msgSpacing = 1.0f;

  InitWindow(screenWidth, screenHeight, windowTitle);
  SetTargetFPS(60);

  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(RAYWHITE);
    DrawText(message, screenWidth / 2 - MeasureText(message, fontSize) / 2,
             screenHeight / 2 - fontSize / 2, fontSize, DARKGRAY);
    EndDrawing();
  }

  CloseWindow();
  return 0;
}