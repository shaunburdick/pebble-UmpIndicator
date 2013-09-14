#include "pebble_os.h"
#include "pebble_app.h"
#include "pebble_fonts.h"


#define MY_UUID { 0xF6, 0x48, 0x7A, 0x93, 0xFA, 0x13, 0x4F, 0xBF, 0x84, 0xDE, 0xD2, 0x00, 0x48, 0x91, 0x30, 0xA6 }
PBL_APP_INFO(MY_UUID,
             "Ump Indicator", "shaunburdick",
             1, 0, /* App version */
             DEFAULT_MENU_ICON,
             APP_INFO_STANDARD_APP);

Window window;
Layer background_layer;
TextLayer inning_layer;
TextLayer strike_layer;
TextLayer ball_layer;
TextLayer out_layer;

#define BACKGROUND_COLOR GColorBlack
#define FOREGROUND_COLOR GColorWhite

#define TEXT_FG_COLOR FOREGROUND_COLOR
#define TEXT_BG_COLOR GColorClear
#define BORDER_COLOR FOREGROUND_COLOR
#define WINDOW_COLOR BACKGROUND_COLOR


void handle_init(AppContextRef ctx) {

  window_init(&window, "Ump Indicator");
  window_stack_push(&window, true /* Animated */);
}


void pbl_main(void *params) {
  PebbleAppHandlers handlers = {
    .init_handler = &handle_init
  };
  app_event_loop(params, &handlers);
}
