#ifndef OF_CONTROLLER_H_
#define OF_CONTROLLER_H_

class OF_Controller
{
void OF_Controller::initialize()
void OF_Controller::handleMessage(cMessage *msg)
void OF_Controller::calcAvgQueueSize(int size)
void OF_Controller::processQueuedMsg(cMessage *data_msg)
void OF_Controller::sendHello(Open_Flow_Message *msg)
void OF_Controller::sendFeatureRequest(cMessage *msg)
void OF_Controller::handleFeaturesReply(Open_Flow_Message *of_msg)
void OF_Controller::handlePacketIn(Open_Flow_Message *of_msg)
void OF_Controller::sendPacketOut(Open_Flow_Message *of_msg, TCPSocket *socket)
void OF_Controller::registerConnection(Open_Flow_Message *msg)
}

#endif /* OF_CONTROLLER_H_ */