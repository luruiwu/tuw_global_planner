
#ifndef _HEURISTICS_EUCLIDEAN_H
#define _HEURISTICS_EUCLIDEAN_H

#include <global_planner/heuristics.h>
#include <vector>
#include <algorithm>

namespace global_planner {

class HeuristicsEuclidean : public Heuristics
{
    public:
        HeuristicsEuclidean(float heuristics_multiplier) : Heuristics(heuristics_multiplier) {   
        }

	virtual float CalcHeuristic(double act_x, double act_y, double start_x, double start_y, double end_x, double end_y, float neutral_cost);
	virtual float CalcCosts(double act_x, double act_y, double start_x, double start_y, double end_x, double end_y, float lastDistToStart, float neutral_cost, bool diagonal);
	virtual expansion_type getExpansionSize();
};

} //end namespace global_planner
#endif
