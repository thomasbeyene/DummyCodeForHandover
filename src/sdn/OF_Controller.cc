#include <omnetpp.h>
#include "simu5g.sdn.OF_Controller.h"
#include "inet.transportlayer.contract.tcp.TCPCommand_m.h"
#include "inet.transportlayer.tcp.TCPConnection.h"

using namespace std;

#define MSGKIND_BOOTED 150

namespace openflow{

Define_Module(OF_Controller);

OF_Controller::OF_Controller(){

}

void OF_Controller::initialize(){

}


void OF_Controller::handleMessage(cMessage *msg){

}

void OF_Controller::calcAvgQueueSize(int size){

}


void OF_Controller::processQueuedMsg(cMessage *data_msg){

}


void OF_Controller::sendHello(Open_Flow_Message *msg){

}

void OF_Controller::sendFeatureRequest(cMessage *msg){

}

void OF_Controller::handleFeaturesReply(Open_Flow_Message *of_msg){

}

void OF_Controller::handlePacketIn(Open_Flow_Message *of_msg){

}


void OF_Controller::sendPacketOut(Open_Flow_Message *of_msg, TCPSocket *socket){

}

void OF_Controller::registerConnection(Open_Flow_Message *msg){

}


} /*end namespace openflow*/

