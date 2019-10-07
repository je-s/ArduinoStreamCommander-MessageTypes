/*  
    Copyright 2019 Jan-Eric Schober

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

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