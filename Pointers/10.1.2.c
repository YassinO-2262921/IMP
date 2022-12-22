#include <curses.h>
#include <stdlib.h>
#include <time.h>

#define WIDTH 80
#define HEIGHT 20

void draw(char screen[HEIGHT][WIDTH]) {
  clear();
  for (int i = 0; i < HEIGHT; i++) {
    for (int j = 0; j < WIDTH; j++) {
      if (screen[i][j] == '#') {
        attron(COLOR_PAIR(1));
        printw("%c", screen[i][j]);
        attroff(COLOR_PAIR(1));
      } else {
        printw("%c", screen[i][j]);
      }
    }
    printw("\n");
  }
  refresh();
}

int main() {
  srand(time(0));

  initscr();
  noecho();
  cbreak();
  start_color();
  init_pair(1, COLOR_GREEN, COLOR_BLACK);

  char screen[HEIGHT][WIDTH];
  for (int i = 0; i < HEIGHT; i++) {
    for (int j = 0; j < WIDTH; j++) {
      screen[i][j] = ' ';
    }
  }

  while (1) {
    for (int i = 0; i < HEIGHT; i++) {
      screen[i][rand() % WIDTH] = '#';
    }

    draw(screen);
    usleep(100000);
  }

  endwin();
  return 0;
}
