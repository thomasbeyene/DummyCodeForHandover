#include "veins/modules/application/ieee80211p/BaseWaveApplLayer.h"

const simsignalwrap_t BaseWaveApplLayer::mobilityStateChangedSignal = simsignalwrap_t(MIXIM_SIGNAL_MOBILITY_CHANGE_NAME);
const simsignalwrap_t BaseWaveApplLayer::parkingStateChangedSignal = simsignalwrap_t(TRACI_SIGNAL_PARKING_CHANGE_NAME);

void BaseWaveApplLayer::initialize(int stage) {
    BaseApplLayer::initialize(stage);


}

simtime_t BaseWaveApplLayer::computeAsynchronousSendingTime(simtime_t interval, t_channel chan) {

}

void BaseWaveApplLayer::populateMessage(WaveShortMessage* wsm, int rcvId, int serial) {

}

void BaseWaveApplLayer::handlePositionUpdate(cObject* obj) {

}

void BaseWaveApplLayer::handleSelfMsg(cMessage* msg) {

}


void BaseWaveApplLayer::sendDown(cMessage* msg) {

}

void BaseWaveApplLayer::sendDelayedDown(cMessage* msg, simtime_t delay) {

}

void BaseWaveApplLayer::checkAndTrackPacket(cMessage* msg) {

}