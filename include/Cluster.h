#pragma once
#include "Point.h"
#include "ResourceType.h"
#include <string>

class Cluster {
  public:
    std::string id;
    ResourceType resourceType;
    Point coordinates;
    int resourceCount;

    Cluster(ResourceType resourceType, std::string id, Point coordinates,
            int resourceCount);
};