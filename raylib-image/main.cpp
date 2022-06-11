#include "raylib.h"
#include "CppFile.h"
#include <memory>
#include <iostream>

int main(void)
{
    // Initialization
    //---------------------
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "raylib [textures] example - texture loading and drawing");
    std::shared_ptr<CppFile> cppfile(new CppFile());

    // NOTE: Textures MUST be loaded after Window initialization (OpenGL context is required)
    Texture2D texture = LoadTexture(cppfile->getDirectory("/billboard.png").c_str());        // Texture loading
    //----------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //--------------------------
        // TODO: Update your variables here
        //--------------------------

        // Draw
        //--------------------------
        BeginDrawing();

            ClearBackground(RAYWHITE);

            DrawTexture(texture, screenWidth/2 - texture.width/2, screenHeight/2 - texture.height/2, WHITE);

            DrawText("this IS a texture!", 360, 370, 10, GRAY);

        EndDrawing();
        //---------------------------
    }

    // De-Initialization
    //------------------------------
    UnloadTexture(texture);       // Texture unloading

    CloseWindow();                // Close window and OpenGL context
    //------------------------------- 

    return 0;
}
