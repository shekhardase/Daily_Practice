// https://leetcode.com/problems/car-fleet/submissions/1350997435/

// class Solution
// {
//     public:
//         int carFleet(int target, vector<int> &position, vector<int> &speed)
//         {
//             int ans = 0;
//             double slow_car = 0.0;

//             vector<pair<int, int>> cars;

//             for (int i = 0; i < position.size(); i++)
//             {
//                 cars.push_back({ position[i],
//                     speed[i] });
//             }
//             sort(cars.begin(), cars.end(), greater<pair<int, int>> ());

//             for (auto car: cars)
//             {
//                 double eta = static_cast<double> (target - car.first) / car.second;
//                 if (eta > slow_car)
//                 {
//                     ans++;
//                     slow_car = eta;
//                 }
//             }
//             return ans;
//         }
// };