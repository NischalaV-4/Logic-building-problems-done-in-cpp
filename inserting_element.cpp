#include <iostream>
#include <vector>
int main() {
    std::vector<int> vec = {10, 20, 30, 40};

    // Insert at the end using push_back()
    vec.push_back(50); // the vector is now {10, 20, 30, 40, 50}

    //to be able to insert at aspecific position (e.g., index 2) using insert()
    // myVector.begin() + 2 gives an iterator to the third element (index 2)
    vec.insert(vec.begin() + 2, 25); // vector  {10,20,25,30,40,50}

    // Print the elements
    for (int element : vec) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
