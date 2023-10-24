#include <superkarel.h>

void turn_right();
void turn_back();
void come_back();
int main()
{
    turn_on("task_2.kw");
    set_step_delay(50);
    while(no_beepers_present())
    {
        while(front_is_clear())
        {
            step();
            if(beepers_present())
            {
                pick_beeper();
                turn_back();
                come_back();
                turn_off();
            }
        }
        turn_left();
        if(beepers_present())
        {
            pick_beeper();
            break;
        }

    }
    turn_left();

    come_back();

turn_off();
return 0;
}

void come_back()
{
    while(front_is_clear())
    {
        step();
        if(front_is_blocked())
        {
            turn_right();

        }
    }

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
    set_step_delay(50);
    turn_left();

 }

