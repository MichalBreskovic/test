#include <superkarel.h>

void turn_right();
void turn_back();

int main()
{
   turn_on("task_4.kw");
   set_step_delay(50);
   turn_left();
    while(facing_north())
    {
        while(front_is_clear())
        {
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
                    step();
                }
            }
            step();
        }
        turn_back();
        if(beepers_present())
            { 
                while(front_is_clear())
                {
                    if(no_beepers_present())
                    {
                        put_beeper();
                    }
                    step();
                }
                turn_left();
                step();
                turn_left();
            }
        if(facing_south())
        {
            while(front_is_clear()&&no_beepers_present())
            {
                step();
            }
            turn_left();
            step();
            turn_left();
        }
    }


    /* while(facing_south()&&front_is_clear())
    {
        step();
    } turn_left();*/


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


 /*
 
  turn_on("task_4.kw");
    set_step_delay(200);
    turn_left();

    while (1)
    {
        while(no_beepers_present()&&facing_north())
        {
            step();
            if(beepers_present()&&front_is_clear())
            {
                step();
            }
            if(front_is_blocked())
            {
                turn_back();
                
            }
            while(facing_south())
            {
                while(front_is_clear())
                {
                    if(no_beepers_present())
                    {
                        put_beeper();
                        step();
                    }
                    if(beepers_present())
                    {
                        step();
                    } 
                } 
                turn_left();
                step();
                turn_left();
            }
        }
        if(left_is_clear())
        {
        turn_right();
        step();
        turn_left();
        }*/
   