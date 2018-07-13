#pragma once

#include <event/roomevent.hh>

namespace butler::event
{
    enum RULE {PUBLIC, PRIVATE, INVITE, KNOCK};
    class JoinRulesEvent : RoomEvent
    {
        private:
            RULE rule;
        public: 
            JoinRulesEvent(RULE rule);
            RULE getRule();
    };
}