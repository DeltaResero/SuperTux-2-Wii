/*  see copyright notice in squirrel.h */
#ifndef _SQSTD_NARROW_H_
#define _SQSTD_NARROW_H_

#include <cassert>
#include <utility>

/* a cast the debug build proves the value survives */
template<typename To, typename From>
inline To sqstd_narrow(From v) {
    assert(std::in_range<To>(v));
    return static_cast<To>(v);
}

/* signed, so scaling a length to bytes leaves the arithmetic where it started */
constexpr SQInteger SQ_CHAR_SIZE = static_cast<SQInteger>(sizeof(SQChar));

#endif //_SQSTD_NARROW_H_
