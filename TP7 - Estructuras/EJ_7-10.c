#include "../Biblioteca/inc/my_cars.h"

int main (void) {
    struct car new_car, copy_car;
    new_car = create_car();
    printf("New car:\n");
    print_car(&new_car);
    clone_car(&copy_car, &new_car);
    change_car_color(&copy_car, RED);
    printf("Copy car:\n");
    print_car(&copy_car);
    return 0;
}