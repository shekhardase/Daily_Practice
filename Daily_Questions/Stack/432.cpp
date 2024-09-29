// class AllOne {
// public:
//     map<string, int> mp;
//     AllOne() {}

//     void inc(string key) {
//         if (mp.find(key) != mp.end()) {
//             mp[key]++;
//         } else {
//             mp[key] = 1;
//         }
//     }

//     void dec(string key) {
//         if (mp.find(key) != mp.end()) {
//             if (mp[key] > 1) {
//                 mp[key]--;
//             } else {
//                 mp.erase(key);
//             }
//         }
//     }

//     string getMaxKey() {
//         int maxf = INT_MIN;
//         string maxkey = "";

//         for (auto& pair : mp) {
//             if (pair.second > maxf) {
//                 maxf = pair.second;
//                 maxkey = pair.first;
//             }
//         }
//         return maxkey;
//     }

//     string getMinKey() {
//         int minf = INT_MAX;
//         string minkey = "";

//         for (auto& pair : mp) {
//             if (pair.second < minf) {
//                 minf = pair.second;
//                 minkey = pair.first;
//             }
//         }
//         return minkey;
//     }
// };

// /**
//  *Your AllOne object will be instantiated and called as such:
//  *AllOne* obj = new AllOne();
//  *obj->inc(key);
//  *obj->dec(key);
//  *string param_3 = obj->getMaxKey();
//  *string param_4 = obj->getMinKey();
//  */