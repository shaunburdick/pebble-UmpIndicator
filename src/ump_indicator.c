#include "pebble_os.h"
#include "pebble_app.h"
#include "pebble_fonts.h"
	
#include "click.h"
#include "game.h"
#include "display.h"

#define MY_UUID { 0xF6, 0x48, 0x7A, 0x93, 0xFA, 0x13, 0x4F, 0xBF, 0x84, 0xDE, 0xD2, 0x00, 0x48, 0x91, 0x30, 0xA6 }
PBL_APP_INFO(MY_UUID,
             "Ump Indicator", "shaunburdick",
             1, 0, /* App version */
             DEFAULT_MENU_ICON,
             APP_INFO_STANDARD_APP);

static Window window;
static Layer background_layer;
static TextLayer inning_layer;
static TextLayer strike_layer;
static TextLayer ball_layer;
static TextLayer out_layer;
static TextLayer time_layer;
static Game game;
	
void timer_tick(AppContextRef ctx, PebbleTickEvent *t) {
	game_addMinute(&game);
	display_timer();
}

void handle_init(AppContextRef ctx) {
	game_init(&game);
	display_init();
	
  	window_init(&window, "Ump Indicator");
  	window_set_background_color(&window, WINDOW_COLOR);
  	window_stack_push(&window, WINDOW_ANIMATION);
	
  	window_set_click_config_provider(&window, (ClickConfigProvider) click_config_provider);
}


void pbl_main(void *params) {
  	PebbleAppHandlers handlers = {
    	.init_handler = &handle_init,
		.tick_info = {
				.tick_handler = &timer_tick,
				.tick_units = MINUTE_UNIT
        }  
    };
  	app_event_loop(params, &handlers);
}
