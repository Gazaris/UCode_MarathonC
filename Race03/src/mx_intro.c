#include "header.h"

void mx_intro(){
    start_color();
	init_pair(2, COLOR_GREEN, COLOR_BLACK);
    char *text1 = "Wake up , Neo..";
    char *text2 = "The Matrix has you..";
    char *text3 = "Follow the white rabbit";
    char *text4 = "Knock, knock, Neo";
    refresh();
    for(int i = 0; i < mx_strlen(text1); i++){ 
        attron(COLOR_PAIR(2));       
        mvaddch(5, i + 4, text1[i]);
        attroff(COLOR_PAIR(2));
        refresh();
        sleep(1);
    }
    sleep(1);
    clear();
    refresh();
    for(int i = 0; i < mx_strlen(text2); i++){
        attron(COLOR_PAIR(2));
        mvaddch(5, i + 4, text2[i]);
        attroff(COLOR_PAIR(2));
        refresh();
        sleep(1);
    }
    sleep(1);
    clear();
    refresh();
    for(int i = 0; i < mx_strlen(text3); i++){  
        attron(COLOR_PAIR(2));    
        mvaddch(5, i + 4, text3[i]);
        attroff(COLOR_PAIR(2));
        refresh();
        sleep(100000);
    }
    sleep(1);
    clear();
    refresh();
    for(int i = 0; i < mx_strlen(text4); i++){  
        attron(COLOR_PAIR(2));   
        mvaddch(5, i + 4, text4[i]);
        attroff(COLOR_PAIR(2));
        refresh();
        sleep(100000);
    }
    sleep(1);
    clear();
    refresh();
}
