#include "Cluster.h"

using namespace std;

Cluster::Cluster(ResourceType resourceType, std::string id, Point coordinates,
                 int resourceCount) {
    this->resourceType = resourceType;
    this->id = id;
    this->coordinates = coordinates;
    this->resourceCount = resourceCount;
}