#include <superkarel.h>

void turn_right();
void turn_back();

int main()
{
   turn_on("task_6.kw");
   set_step_delay(200);
    while(front_is_clear())
    {
        step();
        if(beepers_present())
        {
            pick_beeper();
            while(not_facing_north())
            {
                turn_left();
            }
            if(beepers_present())
            {
                pick_beeper();
                while(not_facing_west()){
                    turn_left();
                }
                if(beepers_present())
                {
                    pick_beeper();
                    while(not_facing_south())
                    {
                        turn_left();
                    }
                    if(beepers_present())
                    {
                        pick_beeper();
                        while(not_facing_east())
                        {
                            turn_left();
                        }
                        if(beepers_present())
                        {
                            pick_beeper();
                            turn_off();
                        }
                    }
                }
            }
        }
    }

   turn_off();
    return 0;
}
void turn_back()
{
    turn_left();
    turn_left();
}
void turn_right()
{
    set_step_delay(10);
    turn_left();
    turn_left();
    set_step_delay(100);
    turn_left();

 }