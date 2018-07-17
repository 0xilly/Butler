#pragma once

#include <event/roomevent.hh>

namespace butler::event
{
    enum Rule {PUBLIC, PRIVATE, INVITE, KNOCK};
    
    class JoinRulesEvent : public RoomEvent
    {
        private:
            Rule _joinRule;
        public: 
            JoinRulesEvent(int age, std::string origin, std::string sender, std::string statekey, std::string roomid, std::string eventid, Rule rule);
            Rule getJoinRule();
    };
}