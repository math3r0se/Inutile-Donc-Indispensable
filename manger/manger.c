#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int random;

    typedef struct {
        char name[50];
        char address[50];
    } restaurant;

    restaurant restaurant_list[5] = {
        {"Pizza", "Rue de Pizza"},
        {"Burger", "Rue de Burger"},
        {"Sushi", "Rue de Sushi"},
        {"Cafe", "Rue de Cafe"},
        {"Viet", "Rue de Viet"}
    };

    srand(time(NULL));
    random = rand() % 5;

    printf("Restaurant: %s\n", restaurant_list[random].name);
    printf("Address: %s\n", restaurant_list[random].address);

    return 0;

}