#include "Term.h"
#include "Text.h"

#include <ncurses.h>
#include <panel.h>
#include <stdlib.h>

int main(void)
{
    TermSize size;
	WINDOW* text;

    Term_init();

	size = Term_size();
	text = Text_create(size.lines - 5, size.cols - 20, 20, 0);
	Text_process(text);

	Term_end();
}
