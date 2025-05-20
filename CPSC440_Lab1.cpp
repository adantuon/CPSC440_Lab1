// CPSC440_Lab1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    ALLEGRO_DISPLAY *display = NULL;

    if (!al_init()) {
        fprintf(stderr, "Allegro Initialization Failed\n");
        return(-1);
    }

    display = al_create_display(800, 600);
    if (!display) {
        fprintf(stderr, "Display Creation Failed\n");
        return(-1);
    }

    al_clear_to_color(al_map_rgb(0, 0, 0));

    al_flip_display();

    al_rest(10.0);
    
    al_destroy_display(display);

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
