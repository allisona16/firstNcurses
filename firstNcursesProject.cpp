
#include <ncurses.h>
#include <iostream>
#include <vector>
using namespace std;

int main(){
 cout << "Hello World";
 initscr();  //initialize screen

 //printw("Hello World");
 //move(10,15);
 //printw("I am good");
 //mvprintw(20,0, "That's good");

 for(int i = 0; i<30; i++){
  for(int j = 0; j<=20; j++){
   if(j % 2 == 0 ){
    mvprintw(i,j, "-");
   }
   else{
    mvprintw(i,j, "+");
   }
  }
 }

 //making a new window
 WINDOW *win = newwin(50,30,2,40);
 
 //refreshes the screen  
 refresh();

 //making the border of new window
 box(win,0,0);
 mvwprintw(win, 1,4, "Maybe:Bobby");
 mvwprintw(win, 2,1, "------------------");
 mvwprintw(win, 3,1, "Hello");
 mvwprintw(win, 4,10, "Hi Bobby");
 mvwprintw(win, 5,1, "Wyd rn?");
 mvwprintw(win, 6,8, "texting you");
 mvwprintw(win, 7,1, "Wow I c");
 mvwprintw(win, 8,8, "Yes I c I c");
 mvwprintw(win, 9,1, "Did u eat yet?");
 mvwprintw(win, 10,12, "Not yet");
 mvwprintw(win, 11,1, "R u hungry?");
 mvwprintw(win, 12,17, "No");
 mvwprintw(win, 13,1, "Do u wanna eat tg?");
 mvwprintw(win, 14,15, "Sure");
 mvwprintw(win, 15,1, "where u wanna go?");
 mvwprintw(win, 16,16, "idk");
 mvwprintw(win, 17,1, "wym udk");
 mvwprintw(win, 18,3, "idk where to eat");
 mvwprintw(win, 19,1, "oh");
 mvwprintw(win, 20,7, "u can choose");
 mvwprintw(win, 21,1, "ok then");
 mvwprintw(win, 22,15, "cool");

 //refreshes the new window
 wrefresh(win);

 //pause the screen output
 getch();

 //deallocates memory and ends ncurses
 endwin();
 return 0;
}

/*
1)make a cool pattern that is 15 by 20
2)make a chat with 20, with the 
  box size of 20 by 40;
*/
