#include <iostream>

class Queue {
public:
    int Rear = 0;
    int Front = 0;
    int ArrayLength;

    Queue(int Length) {
        ArrayLength = Length;
        STORAGE = new int[ArrayLength];
    }

    void AddQ(int Input) {
        if (Front == (Rear + 1) % ArrayLength) {
            std::cout << "Queue is full!" << std::endl;
            exit(0);
        }
        else {
            Rear = (Rear + 1) % ArrayLength;
            STORAGE[Rear] = Input;
            std::cout << "Item added:  " << Input << std::endl;
        }
    }
    int DelQ() {
        if (Front == Rear) {
            std::cout << "Queue is empty 1 " << std::endl;
            exit(0);
        }
        else {
            Front = (Front + 1) % ArrayLength;
            return STORAGE[Front];
        }
    }

private:
    int* STORAGE;
};

void main()
{
    Queue Q1(5);

    for (int i = 1; i <= 2; i++)
    {
        Q1.AddQ(i);
    }
    std::cout << "Deleted : " << Q1.DelQ() << std::endl;
    std::cout << "Deleted : " << Q1.DelQ() << std::endl;

    Q1.AddQ(5);
    Q1.AddQ(51);
    Q1.AddQ(51);
    Q1.AddQ(51);
    Q1.AddQ(51);
}