#include <superkarel.h>

void turn_right();
void turn_back();

int main()
{
   turn_on("task_4.kw");
   set_step_delay(50);
   turn_left();

    while(1){
    while(facing_north())
    {
        if(front_is_blocked())
            {
                turn_back();
                break;
            }
        while(front_is_clear())
        {
            step();
            if(beepers_present())
            {
                while(front_is_clear())
                {
                    step();
                }
                turn_back();
                while(front_is_clear())
                {
                    if(no_beepers_present())
                    {
                    put_beeper();
                    step();
                    }
                    else {step();}
                }
                if(no_beepers_present())
                    {
                    put_beeper();
                    turn_left();
                    step();
                    turn_left();
                    break;
                    }
            }
        }
            

        if(beepers_present())
            {
                turn_back();
                while(front_is_clear())
                {
                    if(no_beepers_present())
                    {
                        put_beeper();
                        step();
                    }
                    else { step();}
                }
            }
    
    }

    while(facing_south())
    {
        while(front_is_clear())
        {
            step();
        }
        if(front_is_blocked())
        {
            turn_left();
            if(right_is_blocked()&&front_is_blocked())
            {
                turn_off();
            }
            step();
            turn_left();
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
