#include <iostream>

class Heap {
    private:
        int limit;
        int next;
        int *elements;

        void shift_up();
        void shift_down();
    public:
        Heap(const int &size);
        ~Heap();

        bool empty();
        bool full();

        void push(const int &val);
        int top();
        void pop();
};

Heap:: Heap(const int& size) {
    elements = new int[size];
    if(!elements) {
        std::cerr << "Not Enought Memory" << std::endl;
    }
    limit = size;
    next = 1;
}

Heap:: ~Heap() {
    if(!elements) {
        delete[] elements;
    }
}

bool Heap:: empty() {
    return (next == 1);
}

bool Heap:: full() {
    return (next == limit);
}

void Heap:: push(const int &val) {
    if(!full()) {
        elements[next] = val;
        next++;

        shift_up();
    }
}

void Heap:: shift_up() {
    int i = next-1;

    while(i > 1) {
        if(elements[i/2] <= elements[i]) {
            break;
        }
        // Swap
        int tmp = elements[i/2];
        elements[i/2] = elements[i];
        elements[i] = tmp;
        i = i/2;
    }
}

int Heap:: top() {
    if(!empty()) {
        return elements[1];
    }
    return INT_MIN;
}

void Heap:: pop() {
    if(!empty()) {
        elements[1] = elements[next-1];
        next--;

        if(next > 1) {
            shift_down();
        }
    }
}

void Heap:: shift_down() {
    int i = 1;
    while(2*i < next) {
        if(elements[i] <= elements[2*i] && (2*i+1 >= next || elements[i] <= elements[2*i+1])) {
            break;
        }
        if(2*i + 1 >= next || elements[2*i] <= elements[2*i+1]) {
            int tmp = elements[i];
            elements[i] = elements[2*i];
            elements[2*i] = tmp;
            i = 2*i;
        } else {
            int tmp = elements[i];
            elements[i] = elements[2*i+1];
            elements[2*i+1] = tmp;
            i = 2*i + 1;
        }
    }
}
