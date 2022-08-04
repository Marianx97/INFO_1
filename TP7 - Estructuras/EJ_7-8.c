#include "../Biblioteca/inc/my_date.h"

int main (void) {
    struct time new_time;
    new_time = create_time();
    show_time(new_time);
    set_time(&new_time, 9,25,30);
    show_time(new_time);
    return 0;
}