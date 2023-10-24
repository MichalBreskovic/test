#include <superkarel.h>

int main(){

    turn_on("empty.kw");
    while(1){
        step();
        if(front_is_blocked())
        {
            turn_left();
            turn_left();
        }

    }
    
    turn_off();
    return 0;

}