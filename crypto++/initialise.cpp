#include "initialise.h"
#include "CryptoUtils.h"

Define_Module(V2XCommunication);

void V2XCommunication::initialize(int stage) {
    BaseWaveApplLayer::initialize(stage);

}

void V2XCommunication::outGoingMessages(WaveShortMessage* wsm) {

}

void V2XCommunication::handleEncryptedMessage(WaveShortMessage* wsm) {

}


void V2XCommunication::handleSelfMessages(cMessage* msg) {
    BaseWaveApplLayer::handleSelfMsg(msg);
    // This method is for self messages

}

void V2XCommunication::handlePositionUpdate(cObject* obj) {
    BaseWaveApplLayer::handlePositionUpdate(obj);
    // The vehicle has moved. Code that reacts to new positions goes here.
}
