#pragma once

#include <string>

namespace butler::event 
{
    class RoomEvent
    {
        private:
            int _age;
            std::string _origneServer;
            std::string _sender;
            std::string _stateKey;
            std::string _roomId;
            std::string _eventId;

        public:
            RoomEvent(int age, std::string origin, std::string sender, std::string statekey, std::string roomid, std::string eventid);
            int getAge();
            std::string getOriginServer();
            std::string getStateKey();
            std::string getRoomId();
            std::string getSender();
            std::string getEventId();
    };
}