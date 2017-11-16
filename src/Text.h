#pragma once

#include <ncurses.h>

typedef struct {
    int ENTER;
    int CTRLD;
    int CTRLL;
    int CTRLQ;
} Key;

WINDOW* Text_create(int, int, int, int);
void Text_process(WINDOW*);
