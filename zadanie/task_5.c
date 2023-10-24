#include <superkarel.h>

void turn_right();
void turn_back();
void recursion();
void step_back();

int main()
{
   turn_on("task_5.kw");
   set_step_delay(200);

   while(not_facing_east()){
    turn_left();
   }
   while(front_is_clear()){
    step();
   }
   turn_left();

   while(no_beepers_present())
   {
    if(front_is_clear())
    {
    put_beeper();
    step();
    }
    else 
    {
        turn_left();
    }
   }
   turn_back();
   while(front_is_clear())
   {
    step();
   }
  turn_back();
   recursion();
   turn_left();
   recursion();
   while(not_facing_north())
   {
    turn_left();
   }



   turn_off();
    return 0;
}

void recursion()
{
    step();
    step();
if(front_is_clear())
{
    recursion();
}
step_back();

}
void step_back()
{
 turn_back();
 step();
 turn_back();

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