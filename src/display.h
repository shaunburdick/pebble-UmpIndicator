#include "pebble_os.h"
#include "pebble_app.h"
#include "pebble_fonts.h"
	
#define BACKGROUND_COLOR GColorBlack
#define FOREGROUND_COLOR GColorWhite
#define TEXT_FG_COLOR FOREGROUND_COLOR
#define TEXT_BG_COLOR GColorClear
#define BORDER_COLOR FOREGROUND_COLOR
#define WINDOW_COLOR BACKGROUND_COLOR
#define WINDOW_ANIMATION true	

void display_timer();
void display_strikes();
void display_balls();//heh
void display_outs();
void display_inning();
void display_init();