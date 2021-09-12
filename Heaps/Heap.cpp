#include "Heap.h"
using namespace std;

int main() {
    Heap x(10);

    x.push(10);
    cout << x.top() << endl;
    x.push(7);
    cout << x.top() << endl;
    x.push(3);
    cout << x.top() << endl;
    x.push(4);
    cout << x.top() << endl;

    x.pop();
    cout << x.top() << endl;

    return 0;
}
