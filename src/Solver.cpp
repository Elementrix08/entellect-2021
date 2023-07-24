#include "Solver.h"

using namespace std;

const map<int, ResourceType> Solver::resourceTypes = {
    {1, ResourceType(1, 2, 2, 1.5)}, {2, ResourceType(1, 2, 2, 2)},
    {3, ResourceType(1, 2, 3, 2.5)}, {4, ResourceType(2, 4, 3, 4)},
    {5, ResourceType(2, 4, 3, 3)},   {6, ResourceType(2, 4, 4, 4)},
    {7, ResourceType(3, 6, 4, 4.5)}, {8, ResourceType(3, 6, 5, 4.5)},
    {9, ResourceType(4, 8, 6, 6)},   {10, ResourceType(5, 10, 8, 5)},
};

bool ClusterCompare::operator()(const Cluster &c1, const Cluster &c2) {
    return c1.resourceCount > c2.resourceCount;
}
