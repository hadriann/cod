#include "Term.h"
#include <ncurses.h>

void Term_init(void)
{
    initscr();
    raw();
    noecho();
    // nonl();
}

void Term_end(void)
{
    refresh();
    endwin();
}

TermSize Term_size(void)
{
    TermSize size;
    getmaxyx(stdscr, size.lines, size.cols);
    return size;
}
