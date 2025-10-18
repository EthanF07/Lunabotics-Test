// NOTHING IS FINAL OR BALANCED, conceptual code for now about the logic flow for the robot to choose a 2D path to take

#include "iostream"
#include "optional"

// Temp class to demonstrate Paths with cost variables tied to them
// Likely will have a provided Path object from Algorithm later
// Already done by Dstar woops
class Path {
private:
    int Cost;

public:
    Path(int cost){
        Cost = cost;
    }

    int Get_Cost(){
        return Cost;
    }
};

Path path1(2);
Path path2(3);
Path path3(99);

Path map_list[] = {path1, path2, path3};

// Choosing the path based on lowest cost value
Path chosen_path(Path map_list[]) {
    Path ideal_path();
    int lowest_cost = 99999;
    for (int i = 0; i<=3; i++){
        if (map_list[i].Get_Cost() < lowest_cost){
            ideal_path() = map_list[i];
            lowest_cost = map_list[i].Get_Cost();
        }
        else {
            
        }
    }
    return ideal_path();
};