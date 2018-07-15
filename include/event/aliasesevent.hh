#pragma once

#include <event/roomevent.hh>

#include <vector>

namespace butler::event
{
    class AliasesEvent : public RoomEvent
    {
        private:
            std::vector<std::string> _aliases;

        public:
            AliasesEvent(int age, std::string origin, std::string sender, std::string statekey, std::string roomid, std::string eventid, std::vector<std::string> aliases);
            std::vector<std::string> getAliases();

    };
}