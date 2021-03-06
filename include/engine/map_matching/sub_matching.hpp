#ifndef MAP_MATCHING_SUB_MATCHING_HPP
#define MAP_MATCHING_SUB_MATCHING_HPP

#include "engine/phantom_node.hpp"

#include <vector>

namespace osrm
{
namespace engine
{
namespace map_matching
{

struct SubMatching
{
    std::vector<PhantomNode> nodes;
    std::vector<unsigned> indices;
    double confidence;
};
}
}
}

#endif
