#pragma once

#include <memory>
using namespace std;

class Mode{
    public:
    virtual ~Mode() = default;
    virtual unique_ptr<Mode> update() = 0;
};  