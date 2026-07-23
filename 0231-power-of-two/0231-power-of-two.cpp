class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0)
            return false;             //Bit manupulation use(optimal) 
            return (n & (n-1))== 0;
        }
    };

//         for(int i = 0 ; i<=30; i++){
//             int ans= pow(2 , i);
//             if(ans == n){                   if else condition use(brute force)
//                 return true;
//             }
//         }
//         return false;
//     }
// };