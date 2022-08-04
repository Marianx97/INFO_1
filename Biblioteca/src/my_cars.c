#include "../inc/my_cars.h"

void set_car_brand_and_model (struct car * car, t_car_brand brand) {
    switch (brand) {
        case RENAULT:
            my_strcpy(car->brand, "Renault");
            my_strcpy(car->model, "Capture");
        break;

        case TOYOTA:
            my_strcpy(car->brand, "Toyota");
            my_strcpy(car->model, "Prius");
        break;

        case FIAT:
            my_strcpy(car->brand, "Fiat");
            my_strcpy(car->model, "600");
        break;

        case FERRARI:
            my_strcpy(car->brand, "Ferrari");
            my_strcpy(car->model, "488");
        break;

        case FORD:
            my_strcpy(car->brand, "Ford");
            my_strcpy(car->model, "Falcon");
        break;
        default: break;
    }
    return;
}

struct car create_car (void) {
    srand(time(NULL));
    struct car new_car;
    t_car_brand brand = rand() % 5;
    new_car.dom_number = rand() % 1000;
    new_car.motor_number = rand() % 100000;
    new_car.motor_power = rand() % 600;
    new_car.color = rand() % 5;
    set_car_brand_and_model(&new_car, brand);
    return new_car;
}

void change_car_color(struct car * car, t_car_color color) {
    car->color = color;
    return;
}

void print_car_color (t_car_color color) {
    switch (color) {
        case RED: printf("Color: Rojo\n"); break;
        case BLUE: printf("Color: Azul\n"); break;
        case GREEN: printf("Color: Verde\n"); break;
        case BLACK: printf("Color: Negro\n"); break;
        case YELLOW: printf("Color: Amarillo\n"); break;
        default: break;
    }
}

void print_car (struct car * car) {
    printf("Marca: %s\n", car->brand);
    printf("Modelo: %s\n", car->model);
    printf("Patente: %d\n", car->dom_number);
    printf("Grabado del motor: %d\n", car->motor_number);
    printf("Potencia: %d Kw\n", car->motor_power);
    print_car_color(car->color);
    return;
}

void clone_car (struct car * dest_car, struct car * org_car) {
    dest_car->dom_number = org_car->dom_number;
    dest_car->motor_number = org_car->motor_number;
    dest_car->motor_power = org_car->motor_power;
    dest_car->color = org_car->motor_power;
    my_strcpy(dest_car->brand, org_car->brand);
    my_strcpy(dest_car->model, org_car->model);
    return;
}
