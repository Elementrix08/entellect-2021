#pragma once

#include <string>

class ResourceType {
  public:
    int cm;    // Points per unit collected
    int pm;    // Points per unit processed
    int pt;    // Processing time
    double qb; // Quota bonus multiplier

    ResourceType();

    ResourceType(int cm, int pm, int pt, double qb);
};