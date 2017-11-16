#pragma once

typedef struct {
    int lines;
    int cols;
} TermSize;

void Term_init(void);
void Term_end(void);
TermSize Term_size(void);
