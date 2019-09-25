#ifndef MESSAGETYPES_HPP
#define MESSAGETYPES_HPP

// Check whether we're in an Arduino-Environment or not
#ifdef ARDUINO
#include "WString.h"
#define T_STRING String
#else
#include <string>
#define T_STRING std::string
#endif

class MessageType
{
public:
    static const T_STRING RESPONSE;
    static const T_STRING INFO;
    static const T_STRING ERROR;
    static const T_STRING PING;
    static const T_STRING STATUS;
    static const T_STRING ID;
    static const T_STRING ACTIVE;
    static const T_STRING ECHO;
    static const T_STRING COMMANDS;
    static const T_STRING COMMAND;
};

#endif // MESSAGETYPES_HPP