#include<bits/stdc++.h>
using namespace std;

class Student {
    private:
        string id, name, address;
        int age;
        float score;
    public:
    // Constructor
    Student() {}
    Student(string i, string n, string a, int ag, float sc) {
        this.id = i;
        this.name = n;
        this.address = a;
        this.age = ag;
        if (sc < 0) this.score = 0;
        else if (sc > 10) this.score = 10;
        else this.score = sc;
    }
    
    // Getter and setter methods
    string getId() { return id; }
    void setId(string id) { id = id; }
    
    string getName() { return name; }
    void setName(string name) { name = name; }
    
    string getAddress() { return address; }
    void setAddress(string address) { address = address; }
    
    int getAge() { return age; }
    void setAge(int age) {
        this.age = age;
    }

    float getScore() { return score; }
    void setScore(float score) {
        if (score < 0) this.score = 0;
        else if (score > 10) this.score = 10;
        else this.score = score;
    }
};

int main() {

}