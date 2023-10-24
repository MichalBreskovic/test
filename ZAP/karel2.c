#include <karel.h>

int main() {
    turn_on("stairs2.kw");
    step();
    while (!front_is_clear() )
    {
    
       turn_left();
       step();
       turn_left();
       turn_left();
       turn_left();
       step();
    
    while (beepers_present())
       {
        pick_beeper();
       }
    }

    while (beepers_in_bag())
    {
        put_beeper();
    }
    turn_off();
    return 0;
}