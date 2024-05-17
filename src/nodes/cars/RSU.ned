package simu5g.nodes.RSU;

import inet.applications.contract.IApp;
import inet.mobility.contract.IMobility;
import inet.networklayer.common.InterfaceTable;
import inet.networklayer.contract.IRoutingTable;
import inet.networklayer.contract.INetworkLayer;
import inet.networklayer.configurator.ipv4.HostAutoConfigurator;
import inet.transportlayer.tcp.Tcp;
import inet.transportlayer.udp.Udp;
import inet.common.MessageDispatcher;
import simu5g.nodes.Ue;
import simu5g.nodes.NR.NRUe;

import org.car2x.veins.base.modules.*;

module RSU extends Ue
{
    parameters:

        @display("i=device/RSU");

        //# Mobility
        mobilityType = default("VeinsInetMobility");

        //# Network Layer specs
        *.routingTableModule = default(absPath(".ipv4.routingTable"));
        
        ipv4.configurator.typename = "HostAutoConfigurator";
        ipv4.configurator.interfaces = "wlan";
        
    submodules:
        configurator: HostAutoConfigurator {
            @display("p=126.4,413.96");
        }
}

