#include <superkarel.h>

int main() {
    turn_on("stairs3.kw");
    step();
    right_is_clear();

while (!front_is_clear() )
    {

       turn_left();
       step();
       turn_left();
       turn_left();
       turn_left();

        while (front_is_clear() )
    {
       step();
    }
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