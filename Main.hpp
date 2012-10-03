#ifndef __MAIN_HPP
#define __MAIN_HPP

#define DEFAULT_WIDTH 800
#define DEFAULT_HEIGHT 600
#define FRAMETIME 17 // Delay between updates (FPS = 1/FRAMETIME)
#define CONST_DT 0.017f // FRAMETIME in seconds. Used for updating game logic
#define RADDEG 57.29577951308232088 // 180/PI

#include <GL/glew.h>
#include <GL/glut.h>
#include <GL/glext.h>
#include "Player.hpp"
#include "Map.hpp"

void update(int);
void respawn();
void draw();
void drawOverlay();
void drawPortals();
void resize(int, int);
GLuint createTexture(const char *filename);
void loadTextures();
void setup(int *, char **);
void mouse_moved(int, int);
void mouse_pressed(int, int, int, int);
void key_down(unsigned char, int, int);
void key_up(unsigned char, int , int);

int width, height;	/**< Screen width and height */
int mousex, mousey; /**< Current mouse position */
bool keystates[256];/**< State of all ASCII keyboard keys */
bool paused;		/**< True if the game is currently paused */
float fade;  		/**< Used for screen fading */

Player player;
Map map;

#endif