#ifndef UUID_H_
#define UUID_H_

#include <cstddef>

class Uuid
{
public:
    Uuid()
        : _id(_next_id)
    {
        _next_id++;
    }

    size_t id() const { return _id; }

private:
    size_t _id;
    static size_t _next_id;
};

#endif
