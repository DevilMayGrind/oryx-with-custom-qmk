#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_DELETE,      
    KC_TAB,         KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,                                           KC_J,           KC_L,           KC_U,           KC_Y,           KC_SCLN,        KC_BSLS,        
    KC_LEFT_SHIFT,  KC_A,           KC_R,           KC_S,           KC_T,           KC_G,                                           KC_M,           KC_N,           KC_E,           KC_I,           KC_O,           MT(MOD_RSFT, KC_QUOTE),
    TT(3),          MT(MOD_LGUI, KC_Z),MT(MOD_LALT, KC_X),KC_C,           KC_D,           KC_V,                                           KC_K,           KC_H,           KC_COMMA,       MT(MOD_RALT, KC_DOT),MT(MOD_RGUI, KC_SLASH),TT(2),          
                                                    MT(MOD_LCTL, KC_ENTER),KC_SPACE,                                       KC_SPACE,       LT(2,KC_BSPC)
  ),
  [1] = LAYOUT_voyager(
    RU_YO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RU_HARD,        
    KC_TRANSPARENT, RU_SHTI,        RU_TSE,         RU_U,           RU_KA,          RU_IE,                                          RU_EN,          RU_GHE,         RU_SHA,         RU_SHCH,        RU_ZE,          RU_HA,          
    KC_TRANSPARENT, RU_EF,          RU_YERU,        RU_VE,          RU_A,           RU_PE,                                          RU_ER,          RU_O,           RU_EL,          RU_DE,          RU_ZHE,         MT(MOD_RSFT, RU_E),
    KC_TRANSPARENT, MT(MOD_LGUI, RU_YA),MT(MOD_LALT, RU_CHE),KC_TRANSPARENT, RU_EM,          RU_I,                                           RU_TE,          RU_SOFT,        RU_BE,          MT(MOD_LALT, RU_YU),MT(MOD_RGUI, RU_DOT),KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_TILD,        KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_TRANSPARENT, 
    KC_GRAVE,       KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,                                        KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_MINUS,       KC_PLUS,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_RPRN,        KC_LBRC,        KC_RBRC,        KC_LCBR,        KC_RCBR,                                        KC_PIPE,        KC_LPRN,        KC_TRANSPARENT, KC_DOT,         KC_SLASH,       KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_F12,         KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    KC_GRAVE,       KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,                                        KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_MINUS,       KC_PLUS,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_PAGE_UP,     KC_HOME,        KC_END,         KC_PGDN,                                        KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_GUI,    KC_LEFT_ALT,    KC_BSPC,        KC_DELETE,      KC_TRANSPARENT,                                 KC_PIPE,        KC_LPRN,        KC_COMMA,       KC_RIGHT_ALT,   KC_RIGHT_GUI,   KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_DELETE
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 RGB_MODE_FORWARD,RGB_VAI,        RGB_VAD,        TOGGLE_LAYER_COLOR,RGB_TOG,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MEDIA_PLAY_PAUSE,KC_MEDIA_STOP,  KC_MS_BTN3,     KC_MS_ACCEL0,   KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_UP,       KC_MS_RIGHT,    KC_MS_ACCEL1,   KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_MS_WH_LEFT,  KC_MS_WH_DOWN,  KC_MS_WH_UP,    KC_MS_WH_RIGHT, KC_MS_ACCEL2,   KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_MS_BTN1,     KC_MS_BTN2
  ),
};

const uint16_t PROGMEM combo0[] = { KC_W, KC_F, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_COMMA, MT(MOD_RALT, KC_DOT), COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_H, KC_COMMA, COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_LEFT_SHIFT, MT(MOD_RSFT, KC_QUOTE), COMBO_END};
const uint16_t PROGMEM combo4[] = { RU_SOFT, RU_BE, COMBO_END};
const uint16_t PROGMEM combo5[] = { RU_BE, MT(MOD_LALT, RU_YU), COMBO_END};
const uint16_t PROGMEM combo6[] = { KC_F, KC_P, COMBO_END};
const uint16_t PROGMEM combo7[] = { KC_L, KC_U, COMBO_END};
const uint16_t PROGMEM combo8[] = { RU_U, RU_KA, COMBO_END};
const uint16_t PROGMEM combo9[] = { KC_W, KC_F, KC_P, COMBO_END};
const uint16_t PROGMEM combo10[] = { RU_GHE, RU_SHA, COMBO_END};
const uint16_t PROGMEM combo11[] = { KC_C, KC_D, COMBO_END};
const uint16_t PROGMEM combo12[] = { KC_4, KC_5, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, KC_ESCAPE),
    COMBO(combo1, KC_MINUS),
    COMBO(combo2, KC_EQUAL),
    COMBO(combo3, CW_TOGG),
    COMBO(combo4, KC_EQUAL),
    COMBO(combo5, KC_MINUS),
    COMBO(combo6, TO(1)),
    COMBO(combo7, LSFT(KC_LEFT_ALT)),
    COMBO(combo8, TO(0)),
    COMBO(combo9, TT(4)),
    COMBO(combo10, LSFT(KC_LEFT_ALT)),
    COMBO(combo11, KC_UNDS),
    COMBO(combo12, KC_PSCR),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_COMMA:
            return 0;
        default:
            return TAPPING_TERM;
    }
}

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {151,111,255}, {151,111,255}, {151,111,255}, {151,111,255}, {151,111,255}, {151,111,255}, {151,190,255}, {151,190,255}, {151,190,255}, {151,190,255}, {151,190,255}, {151,190,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {151,111,255}, {151,111,255}, {151,111,255}, {151,111,255}, {151,111,255}, {151,111,255}, {151,190,255}, {151,190,255}, {151,190,255}, {151,190,255}, {151,190,255}, {151,190,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255} },

    [1] = { {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255} },

    [2] = { {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255} },

    [3] = { {23,255,255}, {23,255,255}, {23,255,255}, {23,255,255}, {23,255,255}, {23,255,255}, {23,255,255}, {23,255,255}, {23,255,255}, {23,255,255}, {23,255,255}, {23,255,255}, {23,255,255}, {23,255,255}, {23,255,255}, {23,255,255}, {23,255,255}, {23,255,255}, {23,255,255}, {23,255,255}, {23,255,255}, {23,255,255}, {23,255,255}, {23,255,255}, {23,255,255}, {23,255,255}, {23,255,255}, {23,255,255}, {23,255,255}, {23,255,255}, {23,255,255}, {23,255,255}, {23,255,255}, {23,255,255}, {23,255,255}, {23,255,255}, {23,255,255}, {23,255,255}, {23,255,255}, {23,255,255}, {23,255,255}, {23,255,255}, {23,255,255}, {23,255,255}, {23,255,255}, {23,255,255}, {23,255,255}, {23,255,255}, {23,255,255}, {23,255,255}, {23,255,255}, {23,255,255} },

    [4] = { {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}



