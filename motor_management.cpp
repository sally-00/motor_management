#include <stdio.h>
#include "motor.h"

using namespace std;


int main(){
    vector<motor*> all_motors;
    motor* new_motor;
    int motornum = 10;
    for (int i = 0; i < motornum; i++){
        new_motor = new class motor;
        new_motor->id = i;
        all_motors.push_back(new_motor);
    }


    bool isExperiment = true;
    state reading_state;
    bool existmotor = false;
    while(isExperiment){
        // conduct experiment

        for (int i = 0; i < motornum; i++){
            // read sensor or encoder or whatever
            // for example, at time tau, we read encoder of the nth motor 
            reading_state.time_ = 1;
            reading_state.encoderCount_ = 1;
            for(auto motor : all_motors){
                if (motor->id == i){
                        new_motor = motor;
                        existmotor = true;
                        break;
                }
            }
            new_motor->motor_state.push_back(reading_state);

            // check motor state
            int previousTime;
            new_motor->getstate(previousTime);
        }
    }
}