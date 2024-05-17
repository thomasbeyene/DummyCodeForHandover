#ifndef __VEINS_MYVEINSAPP_H_
#define __VEINS_MYVEINSAPP_H_

#include <omnetpp.h>
#include "veins/modules/application/ieee80211p/BaseWaveApplLayer.h"

using namespace omnetpp;


class V2XCommunication : public BaseWaveApplLayer {
    public:
        virtual void initialize(int stage);

    protected:
        virtual void outGoingMessages(WaveShortMessage* wsm)
        virtual void handleEncryptedMessage(WaveShortMessage* wsm) 
        virtual void handleSelfMessages(cMessage* msg);
        virtual void handlePositionUpdate(cObject* obj);
    };

#endif