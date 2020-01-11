#include <iostream>
#include "Polygon.hpp"
#include "list.hpp"
#include <string.h>
#include <algorithm>
#include "my_allocator.hpp"

int main() {
    char str[10];
    containers::list<Rectangle, my_alloc::my_allocator<Rectangle, 330> > l;

    while (std::cin >> str) {
        if (strcmp(str, "push") == 0) {
            Rectangle rectangle;
            rectangle.scan(std::cin);
            l.add(rectangle);
        } else if (strcmp(str, "delete") == 0) {
            int t;
            std::cin >> t;
            l.erase(l.begin() + t);
            std::cout << "\n";
        } else if (strcmp(str, "front") == 0) {
            l.front().print(std::cout);
            std::cout << "\n";
        }
        if (strcmp(str, "get") == 0) {
            int r;
            std::cin >> r;
            l[r].print(std::cout);
            std::cout << "\n";
        } else if (strcmp(str, "end") == 0) {
            l.End().print(std::cout);
        } else if (strcmp(str, "insert") == 0) {
            int r;
            std::cin >> r;
            Rectangle rectangle;
            rectangle.scan(std::cin);
            l.insert(l.begin() + r, rectangle);
        } else if (strcmp(str, "all") == 0) {
            if (l.begin() != nullptr) {
                std::for_each(l.begin(), l.end(), [](Rectangle f) { f.print(std::cout); });
                std::cout << "\n";
            } else {
                std::cout << "Empty" << std::endl;
            }
        }
    }
}