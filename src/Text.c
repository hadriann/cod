#include "Text.h"
#include <ncurses.h>
#include <ctype.h>

Key key = {
    .ENTER = 10,
    .CTRLD = 4,
    .CTRLL = 12,
    .CTRLQ = 17,
};

WINDOW* Text_create(int lines, int cols, int x, int y)
{
    return newwin(lines, cols, y, x);
}

void Text_process(WINDOW* text)
{
    keypad(text, true);

    wprintw(text, "--- %d ---- ", key.CTRLD);

	int c;
    bool done = false;
	while (!done) {
        c = wgetch(text);

        if (c == key.CTRLQ) {
            done = true;
        }
        else if (c == key.CTRLL) {
            int line, col;
            getyx(text, line, col);
            wmove(text, line, 0);
            wclrtoeol(text);
            wmove(text, line - 1, 0);
        }
        else if (c == key.CTRLD) {

        }
        else if (isprint(c)) {
            wechochar(text, c);
        }
        else if (isspace(c)) {
            wechochar(text, c);
        }
	}
}
