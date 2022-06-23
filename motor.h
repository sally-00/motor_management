#include <vector>
#include <string>

using namespace std;

class state{

public:
    int time_ = 0;
    double encoderCount_ = 0;
    bool existance = false;
    string agent_role_ = "none";
    string agent_type_ = "none";
};

class motor {
public:
    state getstate(int time);
    int id;
    std::vector<state> motor_state;

};