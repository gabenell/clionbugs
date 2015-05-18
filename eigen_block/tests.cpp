//
// Created by gabe on 5/18/15.
//

#include "gmock/gmock.h"

class MyInterface {
public:
    virtual ~MyInterface() = 0;
    virtual void noArgs() = 0;
    virtual void oneArg(int arg) = 0;
};

class MockInterface : public MyInterface {
public:
    // Parses fine
    MOCK_METHOD0(noArgs, void());

    // Incorrect parse error
    MOCK_METHOD1(oneArg, void(int arg));
};