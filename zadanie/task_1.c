#include <superkarel.h>

void turn_right();
void come_back();
int main(){

    turn_on("task_1.kw");
    set_step_delay(50);
    while(not_facing_east())
    {
        turn_left();
    }
    put_beeper();
    step();
        while(no_beepers_present())
        {
            while(right_is_clear())
            {
                turn_right();
                step();
                if(right_is_clear())
                {
                    turn_right();
                    step();
                }
                else
                {
                    if(beepers_present())
                    {
                        pick_beeper();
                        turn_left();
                        turn_left();
                        come_back();
                        turn_off();
                    } 
                    step();
                }
            }
            if(beepers_present())
            {
                pick_beeper();
            } 
            else{
            while(front_is_blocked())
            {
                turn_left();
            }
            step();  

            }
        }

         if(beepers_present())
            {
                pick_beeper();
            } 
        come_back();

    turn_off();
    return 0;
}
void come_back()
{

        while(no_beepers_present())
        {
            while(1)
            {
                turn_left();
                step();
                if(left_is_clear())
                {
                    turn_left();
                    step();
                }
                else
                {
                    step();
                }
            }
            if(beepers_present())
            {
                pick_beeper();
                break;
            } 
            
            while(front_is_blocked())
            {
                turn_right();
            }
            step(); 
        }  
        while(not_facing_west())
         {
             turn_right();
         }


}
void turn_right()
{
    set_step_delay(10);
    turn_left();
    turn_left();
    set_step_delay(50);
    turn_left();
}
