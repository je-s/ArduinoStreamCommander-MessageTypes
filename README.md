# ArduinoStreamCommander-MessageTypes
ArduinoStreamCommander-MessageTypes contains a set of standard message types used by the [ArduinoStreamCommander](https://github.com/je-s/ArduinoStreamCommander).

The `MessageType`-Class can be resused in other software written in C++, since it is also compatible to ISO-C++'s `std::string`-container.
# Folder structure
* `src`  contains the source code.
# Installing and using ArduinoStreamCommander-MessageTypes with the Arduino IDE
* To install the library either clone and ZIP the folder, or download one of the releases. After that follow the instructions [here](https://www.arduino.cc/en/Guide/Libraries#toc2).
* In order to use ArduinoStreamCommander-MessageTypes, `<MessageTypes.hpp>` needs to be included.
# Usage
The name (as `String` [Arduino Environment] or as `std::string` [in ISO-C++]) of a particular message type can be accessed by (for example): `MessageType::PING`.

For further information regarding the meanings/intentions of the different message types, please see the [ArduinoStreamCommander](https://github.com/je-s/ArduinoStreamCommander) README file.
