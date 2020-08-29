//
// Created by max on 18.08.2020.
//

#ifndef _CONTAINER_H
#define _CONTAINER_H


class Container {
public:
    Container() : data(nullptr), size(0), capacity(0){}

private:
    char* data;
    int size;
    int capacity;
};


#endif
