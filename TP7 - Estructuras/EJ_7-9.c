#include "../Biblioteca/inc/my_date.h"

int main (void) {
    struct date new_date, copy_of_date;
    new_date = create_date();
    show_date(new_date);
    set_date(&new_date, 1996, 3, 1);
    show_date(new_date);
    copy_date(&copy_of_date, &new_date);
    show_date(copy_of_date);
    next_day(&new_date);
    show_date(new_date);
    prev_day(&copy_of_date);
    show_date(copy_of_date);
    return 0;
}