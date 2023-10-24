#include <superkarel.h>

void turn_back();
void turn_right();
void main_program();
int main(){

    turn_on("task_3.kw");
    set_step_delay(50);

    if(facing_north())
    {
        turn_right();
        main_program();
        turn_left();
    } else if(facing_south())
    {
        turn_left();
        main_program();
        turn_right();
    } else if(facing_west())
    {
        turn_back();
        main_program();
        turn_back();
    } else 
    {
        main_program();
     
    }
    
    turn_off();
    return 0;
}
void main_program()
{


while(front_is_clear())
            {
                step();
                if(beepers_present()){
                    pick_beeper();
                }
            }
            turn_back();
            while(front_is_clear())
            {
                while(right_is_blocked()&&beepers_in_bag())
                {
                    put_beeper();
                    step();
                }
                if(front_is_clear())
                {
                step();
                }
            }
            
            turn_left();
            step();
            turn_left();
            
            while(front_is_clear()&&left_is_clear())
            {
                while(front_is_clear())
                {
                    step();
                    if(beepers_present()){
                        pick_beeper();
                    }
                }
                turn_back();
            
                while(front_is_clear())
                {
                    turn_right();
                    step();
                    if(beepers_present()&&beepers_in_bag())
                    {
                        turn_back();
                        step();
                        put_beeper();
                        turn_right();
                    }
                    else{
                    turn_back();
                    step();
                    turn_right();
                    }
                    step();
                }
                if(left_is_clear())
                {
                turn_left();
                step();
                turn_left();
                }
            }

    turn_back();
    
    while(front_is_clear())
    {
        step();
    }
    turn_left();
    step();
    if(beepers_present())
    {
        while(front_is_clear())
        {
            step();
        }
        turn_left();
        while(front_is_clear())
        {step();}
        turn_back();
    }
    else
    {
        turn_left();
        while(no_beepers_present())
        {
            step();
            while(front_is_clear())
        {
            if(beepers_present())
            {
                break;
            }
            step();
        }
        turn_right();
        while(front_is_clear())
        {
            step();
        }
        turn_left();
        
        while(front_is_clear())
        {
            step();
        }
        turn_back();
        break;    
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
    set_step_delay(50);
    turn_left();
    turn_left();
    set_step_delay(10);
    turn_left();
 }