#include "vex.h"

using namespace vex;

brain  Brain;

motor shooter = motor(PORT6, ratio6_1, bool(false));
limit limitSense = limit(Brain.ThreeWirePort.A);
