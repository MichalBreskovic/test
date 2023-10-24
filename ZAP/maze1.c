#include <superkarel.h>
#define SPEED 100

void turn_right();

int main() {
    turn_on("maze1.kw");

    set_step_delay(SPEED);

    while (no_beepers_present()) {
        if (right_is_clear()) {
            turn_right();
        }
        else if (left_is_clear() && front_is_blocked()) {
            turn_left();
        }
        else if (front_is_blocked()) {
            turn_left();
            turn_left();
        }
        step();
    }

    turn_off();

    return 0;
}

void turn_right() {
    set_step_delay(0);
    turn_left();
    turn_left();
    set_step_delay(SPEED);
    turn_left();
}