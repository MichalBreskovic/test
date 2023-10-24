#include <superkarel.h>

void jump();
void turn_right();
int main(){

    turn_on("olympics6.kw");
    set_step_delay(200);
    
    if(facing_west())
    {   
        turn_right();
        while(no_beepers_present()){
            while(left_is_clear())
            {
                turn_left();
                step();
                if(left_is_clear())
                {
                turn_left();
                step();
                }
                else{
                    step();
                }
            }
            while(front_is_blocked())
            {
                turn_right();
            }
            if(beepers_present())
            {
                break;
            }    
            step();
            
        }
    }
    if(facing_east())
    {
        turn_left();
        while(no_beepers_present()){
            while(right_is_clear())
            {
                turn_right();
                step();
                if(right_is_clear())
                {
                turn_right();
                step();
                }
                else{
                    step();
                }
            }
            while(front_is_blocked())
            {
                turn_left();
            }
            if(beepers_present())
            {
                break;
            }    
            step();
            
        }
    }

    turn_off();
    return 0;
}

void jump(){
    turn_left();
    step();
    turn_right();
    step();
    turn_right();
    step();
    turn_left();


}
void turn_right(){

    turn_left();
    turn_left();
    turn_left();

}