#ifndef NOMINMAX
#define NOMINMAX
#endif
#include"DxLib.h"
typedef unsigned int uint;
typedef const int cint;
constexpr uint window_width = 1280;
constexpr uint window_height = 720;
constexpr int message_window_x = 15;
constexpr int message_window_y = window_height - 100;
constexpr uint attack_type_normal = 1;
constexpr uint attack_type_skill = 2;
constexpr uint strategy_type_attack = 1;
constexpr uint strategy_type_balance = 2;
constexpr uint strategy_type_cure = 3;

typedef struct {
	int title, setting, battle, magic_chant, win, lose, battle_result;
}Music;