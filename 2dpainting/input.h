#ifndef INPUT_H
#define INPUT_H
#include <vector>

class Input
{
public:
    Input();
    // w, a, s, d
    std::vector<bool> wasdPressed;
};

#endif // INPUT_H
