// https://leetcode.com/problems/time-based-key-value-store/submissions/1420939581/
// class TimeMap
// {
//     public:
//         unordered_map<string, vector<pair<int, string>>> mp;     // map to store string key their value as vector pair int and string
//     TimeMap() {}

//     void set(string key, string value, int timestamp)
//     {
//         mp[key].push_back({ timestamp,       // simple push in map with key and value pair
//             value });
//     }

//     string get(string key, int timestamp)
//     {
//         if (mp.find(key) == mp.end())
//         {
//             return "";                   // if given key does not exists in map return
//         }
//         int l = 0;
//         int r = mp[key].size() - 1;
//         if (mp[key][0].first > timestamp)
//         {
//             return "";                                      // if key and int is greater than given timestamp return " "
//         }
//         string ans;
//         while (l <= r)
//         {
//             int mid = l + (r - l) / 2;                     // calculate mid

//             if (mp[key][mid].first == timestamp)
//             {
//                 return mp[key][mid].second;                      // if timestamp is found at mid (index with key and its first elemet is same)
//             }                                                       // return that key value pair
//             else if (mp[key][mid].first < timestamp)
//             {
//                 ans = mp[key][mid].second;                  // also keep track of ans we ffound while updating
//                 // else if it is less than given increase start point
//                 l = mid + 1;
//             }
//             else
//             {
//                 r = mid - 1;                    // else lower end point
//             }
//         }
//         return ans;
//     }
// };

// /**
//  *Your TimeMap object will be instantiated and called as such:
//  *TimeMap* obj = new TimeMap();
//  *obj->set(key,value,timestamp);
//  *string param_2 = obj->get(key,timestamp);
//  */