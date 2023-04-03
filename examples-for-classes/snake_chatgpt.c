#include <ncubrew --versionrses.h>
#include <unistd.h>

#define ROWS 20
#define COLS 20

int main()
{
    int row = ROWS/2, col = COLS/2;
    int len = 1;
    int maxx, maxy;

    int tailrow[len], tailcol[len];
    tailrow[0] = row;
    tailcol[0] = col;

    initscr();
    noecho();
    curs_set(FALSE);

    while (1) {
        clear();
        getmaxyx(stdscr, maxy, maxx);
        for (int r = 0; r <= ROWS; r++) {
            for (int c = 0; c <= COLS; c++) {
                if (r == 0 || c == 0 || r == ROWS || c == COLS)
                    mvprintw(r-1, c, "#");
            }
        }

        int key = getch();
        switch (key) {
        case KEY_UP:
            row--;
            break;
        case KEY_DOWN:
            row++;
            break;
        case KEY_LEFT:
            col--;
            break;
        case KEY_RIGHT:
            col++;
            break;
        }

        if (row == 0 || row == ROWS || col == 0 || col == COLS)
            break;

        tailrow[len] = row;
        tailcol[len] = col;

        for (int i = 0; i <= len; i++) {
            mvprintw(tailrow[i]-1, tailcol[i], "*");
        }

        refresh();
        usleep(100000);
    }

    endwin();
    return 0;
}
