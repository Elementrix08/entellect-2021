#include "ResourceType.h"

using namespace std;

ResourceType::ResourceType() {
    this->cm = 0;
    this->pm = 0;
    this->pt = 0;
    this->qb = 0;
}

ResourceType::ResourceType(int cm, int pm, int pt, double qb) {
    this->cm = cm;
    this->pm = pm;
    this->pt = pt;
    this->qb = qb;
}