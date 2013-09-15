#include "pebble_os.h"
#include "pebble_app.h"
#include "pebble_fonts.h"
	
#define GAME_3STRIKES_OUT true
#define GAME_3OUTS_INNING true

typedef struct _GameDuration {
	int min;
	int hour;
} GameDuration;
	
typedef struct _Game {
  	int     		balls;
  	int     		strikes;
  	int     		outs;
  	int     		inning;
  	bool    		top;
  	time_t  		startTime;
	GameDuration	duration;
} Game;

void game_reset(Game *game);
void game_addBall(Game *game);
void game_addStrike(Game *game);
void game_addOut(Game *game);
void game_addHalfInning(Game *game);
void game_addMinute(Game *game);
void game_init(Game *game);