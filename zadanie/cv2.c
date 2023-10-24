#include <superkarel.h>

void turn_right();
void turn_back();
int main()
{
    turn_on("task_2.kw");
    set_step_delay(100);
    while(no_beepers_present())
    {
        while(left_is_blocked())
        {
            step();
        }
        turn_left();
        step();
    }
    if(beepers_present())
        {
            pick_beeper();
        }
    turn_back();
    step();
    
    
    while(right_is_blocked())
        {
            step();
        
        turn_right();
        step();
    }
put_beeper();
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



#include <superkarel.h>

void turn_right();
void turn_back();
int main()
{
    turn_on("task_2.kw");
    set_step_delay(100);
    while(no_beepers_present())
    {
        while(left_is_blocked())
        {

            if(beepers_present())
                {
                    pick_beeper();
                    break;
                }
            if ((no_beepers_in_bag()))
                {  
                    step();
                }
                if(beepers_in_bag())
                {
                     turn_back();
                    step();
                    break;
                }
        }

        if ((no_beepers_in_bag()))
        {
            turn_left();
            step();
        }
        
        
    }
   /* if(beepers_present())
        {
            pick_beeper();
        }*/
    //turn_back();
    //step();
    while (1)
    {
       
    
    while(front_is_blocked()&&right_is_clear())
    {
        turn_right();
        step();
    }


    while (right_is_blocked())
    {
        
        if (front_is_blocked())
    
        {
        turn_off();
        return 0;
        }
        step();
        
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



