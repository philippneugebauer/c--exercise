#include <iostream>

using std::cout;

template <class T, int N>
class array {
    T memblock [N];

  public:
    void setmember (int x, T value) {
       memblock[x]=value;
    }

    T getmember (int x) {
      return memblock[x];
    }
};

int main () {
  array <int,5> myints;
  array <float,5> myfloats;
  myints.setmember (0,100);
  myfloats.setmember (3,3.1416);
  cout << myints.getmember(0) << '\n';
  cout << myfloats.getmember(3) << '\n';
  return 0;
}
