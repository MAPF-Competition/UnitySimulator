#pragma once

// #include "Agent.hpp"
#include<set>
#include <iostream>
#include<vector>
#include<memory>
#include<queue>
#include"actions.hpp"
#include<map>


class Simulator{
public:
    using point2d=std::pair<int,int>;
    using Config=std::vector<point2d>;
    
  


    Simulator();
    Simulator(std::string config);
    Simulator(int xmax,int ymax,std::vector<point2d> obstacles);

    void step(std::vector<ACTION> actions);
    int addAgent(int x,int y,int direction=-1);
    // void setEnvironment(int x,int y,std::vector<point2d> obstacles={});
    int addObstacle(int x,int y);
    int getNumAgents();
    int getNumObstacles();
    void setEnvSize(int xmax,int ymax);
    bool checkConfigFeasible(const Config&configx);
    Config getPositions();
    point2d getPosition(int agent);
    int getOrientation(int agent);
    void setRotationCost(int rotation_cost);
    // void step_non_rotation(std::vector<ACTION> actions);
    // void step_with_rotation(std::vector<ACTION> actions);




private:
    std::set<point2d> obstacles;
    int xmin=0;
    int xmax=0;
    int ymin=0;
    int ymax=0;
    Config config;
    std::vector<int> directions;
    //0: right 1:down 2:left 3:up
    std::map<point2d,int> pos_dict;
    int rotation_cost=1;
    Config getNextPosition(std::vector<ACTION> actions);
    std::pair<point2d,int> getNextState(int agent,ACTION action);
    // void step(int agent, const Config &next_pos,std::set<point2d>&occupied,std::set<int>&moved);
    Config nextPos;
    std::vector<int> next_directions;
    std::vector<int> rotation_counter;
    // void stopAgent()
    point2d forwardRotateAgent(int agent);
};