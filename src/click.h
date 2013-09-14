#include "pebble_os.h"
#include "pebble_app.h"
#include "pebble_fonts.h"
	
void click_config_provider(ClickConfig **config, Window *window);

void select_single_click_handler(ClickRecognizerRef recognizer, Window *window);
void select_long_click_handler(ClickRecognizerRef recognizer, Window *window);
void up_single_click_handler(ClickRecognizerRef recognizer, Window *window);
void up_long_click_handler(ClickRecognizerRef recognizer, Window *window);
void down_single_click_handler(ClickRecognizerRef recognizer, Window *window);
void down_long_click_handler(ClickRecognizerRef recognizer, Window *window);