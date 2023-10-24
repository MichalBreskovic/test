#include <superkarel.h>

void jump();
void turn_right();
int main(){

    turn_on("training.kw");

    while(no_beepers_present())
        {
            jump();

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