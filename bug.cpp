std::vector<int> myVector; 
for (int i = 0; i < 10; ++i) {
  myVector.push_back(i); 
}

int* ptr = &myVector[5];
myVector.erase(myVector.begin() + 5);
*ptr = 100; // Undefined behavior