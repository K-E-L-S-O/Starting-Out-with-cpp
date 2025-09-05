// 2.12 Land Calculation pg.81
#include <iostream>

int main() {
    float acreInFt = 43560;
    float acresInLand = 391876;
    float numberOfAcres = acresInLand / acreInFt;

    std::cout << "One acre of land is equivalent to " << acreInFt << " square feet\n"
        << "The number of acres in a tract of land with " << acresInLand << "\n"
        << "square feet is " << numberOfAcres;

    return 0;
}

