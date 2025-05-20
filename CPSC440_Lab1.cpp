#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include <stdio.h>
#include <stdlib.h>

//Draws a turtle
void makeTurtle();

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

    al_init_primitives_addon();

    al_clear_to_color(al_map_rgb(0, 0, 0));

    makeTurtle();

    al_flip_display();

    al_rest(20.0);
    
    al_destroy_display(display);

    return 0;
}

void makeTurtle() {
    //Color Palette
    ALLEGRO_COLOR light_green = al_map_rgb(90, 145, 59);
    ALLEGRO_COLOR green = al_map_rgb(43, 70, 28);
    ALLEGRO_COLOR dark_green = al_map_rgb(25, 41, 16);
    ALLEGRO_COLOR white = al_map_rgb(245, 245, 245);
    ALLEGRO_COLOR black = al_map_rgb(10, 10, 10);

    //Make Head
    al_draw_filled_circle(580, 300, 75, light_green);
   
    //Make Eyes
    al_draw_filled_ellipse(590, 350, 20, 15, white);
    al_draw_filled_ellipse(590, 250, 20, 15, white);

    al_draw_filled_ellipse(590, 250, 16, 12, black);
    al_draw_filled_ellipse(590, 350, 16, 12, black);

    //Make Tail
    al_draw_filled_triangle(175, 320, 175, 280, 115, 300, light_green);

    //Make Legs
    al_draw_filled_circle(200, 200, 50, light_green);
    al_draw_filled_circle(200, 400, 50, light_green);
    al_draw_filled_circle(500, 200, 50, light_green);
    al_draw_filled_circle(500, 400, 50, light_green);

    //Make Shell
    al_draw_filled_ellipse(350, 300, 200, 150, green);

    //Make Shell Lines
    al_draw_ellipse(350, 300, 200, 150, dark_green, 8);
    al_draw_line(350, 300, 200, 200, dark_green, 8);
    al_draw_line(350, 300, 200, 400, dark_green, 8);
    al_draw_line(350, 300, 500, 200, dark_green, 8);
    al_draw_line(350, 300, 500, 400, dark_green, 8);
    al_draw_line(150, 300, 550, 300, dark_green, 8);
    al_draw_line(350, 150, 350, 450, dark_green, 8);

    al_draw_filled_ellipse(350, 300, 80, 60, green);
    al_draw_ellipse(350, 300, 80, 60, dark_green, 8);
}
