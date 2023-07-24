#include "Cluster.h"
#include "ResourceType.h"

#include <map>
#include <queue>
#include <vector>

class ClusterCompare {
    bool operator()(const Cluster &c1, const Cluster &c2);
};

class Solver {
  public:
    int numResources;
    int shipCount;
    int shipCapacity;
    int labCount;
    int materialThreshold;
    int quotaCount;

    std::priority_queue<Cluster, std::vector<Cluster>, ClusterCompare>
        resourceClusters;

    const static std::map<int, ResourceType> resourceTypes;
};