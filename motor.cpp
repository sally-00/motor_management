#include "motor.h"

state motor::getstate(int time){
    for (auto record_state : motor_state ){
        if (record_state.time_ == time){
            state state_at_time;
            state_at_time.time_ = time;
            state_at_time.encoderCount_ = record_state.encoderCount_;
            state_at_time.existance = true;
            state_at_time.agent_role_ = record_state.agent_role_;
            state_at_time.agent_type_ = record_state.agent_type_;
            return state_at_time;
        }
    }
    state state_at_time;
    state_at_time.time_ = 0;
    state_at_time.encoderCount_ = 0;
    state_at_time.existance = false;
    state_at_time.agent_role_ = " ";
    state_at_time.agent_type_ = " ";
    return state_at_time;

}