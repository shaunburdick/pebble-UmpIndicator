#include "click.h"

/**
 * Setup Select, Up, and Down click handlers
 */
void click_config_provider(ClickConfig **config, Window *window) {
  config[BUTTON_ID_SELECT]->click.handler = (ClickHandler) select_single_click_handler;
  config[BUTTON_ID_SELECT]->long_click.handler = (ClickHandler) select_long_click_handler;

  config[BUTTON_ID_UP]->click.handler = (ClickHandler) up_single_click_handler;
  config[BUTTON_ID_UP]->long_click.handler = (ClickHandler) up_long_click_handler;
  config[BUTTON_ID_UP]->click.repeat_interval_ms = 100;

  config[BUTTON_ID_DOWN]->click.handler = (ClickHandler) down_single_click_handler;
  config[BUTTON_ID_DOWN]->long_click.handler = (ClickHandler) down_long_click_handler;
  config[BUTTON_ID_DOWN]->click.repeat_interval_ms = 100;
}

void select_single_click_handler(ClickRecognizerRef recognizer, Window *window) {

}

void select_long_click_handler(ClickRecognizerRef recognizer, Window *window) {

}

void up_single_click_handler(ClickRecognizerRef recognizer, Window *window) {

}

void up_long_click_handler(ClickRecognizerRef recognizer, Window *window) {

}

void down_single_click_handler(ClickRecognizerRef recognizer, Window *window) {

}

void down_long_click_handler(ClickRecognizerRef recognizer, Window *window) {

}