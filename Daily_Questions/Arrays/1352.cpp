// https://leetcode.com/problems/product-of-the-last-k-numbers/description/?envType=daily-question&envId=2025-02-14


// class ProductOfNumbers {
//     private:
//         vector<int> prefixProducts;
    
//     public:
//         ProductOfNumbers() {}
    
//         void add(int num) {
//             if (num == 0) {
//                 prefixProducts.clear();
//             } else {
//                 if (prefixProducts.empty()) {
//                     prefixProducts.push_back(num);
//                 } else {
//                     prefixProducts.push_back(prefixProducts.back() * num);
//                 }
//             }
//         }
    
//         int getProduct(int k) {
//             int n = prefixProducts.size();
//             if (k > n) {
//                 return 0;
//             }
//             if (k == n) {
//                 return prefixProducts.back();
//             }
//             return prefixProducts.back() / prefixProducts[n - k - 1];
//         }
//     };
    
//     /**
//      * Your ProductOfNumbers object will be instantiated and called as such:
//      * ProductOfNumbers* obj = new ProductOfNumbers();
//      * obj->add(num);
//      * int param_2 = obj->getProduct(k);
//      */