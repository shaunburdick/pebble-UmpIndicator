#include "game.h"

void game_reset(Game *game) {
	game->balls = 0;
	game->strikes = 0;
	game->outs = 0;
	game->inning = 1;
	game->top = true;
	game->startTime = time(NULL);
	game->duration.min = 0;
	game->duration.hour = 0;
}
	
void game_addBall(Game *game) {
	if(game->balls < 4) {
		game->balls++;
	} else {
		game->balls = 0;
	}
}

void game_addStrike(Game *game) {
	if(game->strikes < 3) {
		game->strikes++;
	} else {
		game->strikes = 0;
		if(GAME_3STRIKES_OUT) {
			game_addOut(game);
		}
	}
}

void game_addOut(Game *game) {
	if(game->outs < 3) {
		game->outs++;
	} else {
		game->outs = 0;
		if(GAME_3OUTS_INNING) {
			game_addHalfInning(game);
		}
	}
}

void game_addHalfInning(Game *game) {
	game->top = !game->top;
	if(game->top) { //Went from bottom to top
		game->inning++;
	}
}

void game_addMinute(Game *game) {
	if(game->duration.min < 60) {
		game->duration.min++;
	} else {
		game->duration.min = 0;
		game->duration.hour++;
	}
}

void game_init(Game *game) {
	game_reset(game);
}