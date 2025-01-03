std::vector<int> myVector; 
for (int i = 0; i < 10; ++i) {
  myVector.push_back(i); 
}

std::vector<int>::iterator it = myVector.begin() + 5;
int value = *it; //Store the value before erasing
myVector.erase(it);

//Insert the value again at the same position if needed
myVector.insert(myVector.begin()+5, value);

//Or if you don't need it anymore, ignore the value
//and myVector will have one less element