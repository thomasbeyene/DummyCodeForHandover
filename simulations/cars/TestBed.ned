
package simu5g.simulations.cars;

import inet.networklayer.configurator.ipv4.Ipv4NetworkConfigurator;
import inet.networklayer.ipv4.RoutingTableRecorder;
import inet.node.inet.AdhocHost;
import inet.node.inet.Router;
import inet.node.inet.StandardHost;
import inet.node.ethernet.Eth10G;

import simu5g.world.radio.LteChannelControl;
import simu5g.common.carrierAggregation.CarrierAggregation;
import simu5g.nodes.PgwStandard;
import simu5g.common.binder.Binder;
import simu5g.nodes.eNodeB;
import simu5g.nodes.Ue;
import simu5g.nodes.cars.Car;
improt simu5g.nodes.cars.RSU;

import simu5g.sdn.OpenFlowController;
import simu5g.sdn.OpenFlowSwitch;


import org.car2x.veins.subprojects.veins_inet.VeinsInetManager;

network TestBed
{
    parameters:
        double playgroundSizeX @unit(m); // x size of the area the nodes are in (in meters)
        double playgroundSizeY @unit(m); // y size of the area the nodes are in (in meters)
        double playgroundSizeZ @unit(m); // z size of the area the nodes are in (in meters)
        @display("bgb=732,483");

    submodules:

        routingRecorder: RoutingTableRecorder {
            @display("p=50,75;is=s");
        }
        configurator: Ipv4NetworkConfigurator {
            @display("p=50,125");
            config = xmldoc("demo.xml");
        }

        //# Veins manager module
        veinsManager: VeinsInetManager {
            @display("p=50,227;is=s");
        }

        //# LTE modules
        channelControl: LteChannelControl {
            @display("p=50,25;is=s");
        }
        binder: Binder {
            @display("p=50,175;is=s");
        }
        carrierAggregation: CarrierAggregation {
            @display("p=50.993748,258.7;is=s");
        }
        server: StandardHost {
            @display("p=660,136;is=n;i=device/server");
        }
        router: Router {
            @display("p=561,135;i=device/smallrouter");
        }
        pgw: PgwStandard {
            @display("p=462,136;is=l");
        }
        eNodeB1: eNodeB {
            @display("p=156,136;is=vl");
        }
        eNodeB2: eNodeB {
            @display("p=391,313;is=vl");
        }

        car1: Car {
            @display("p=200,200;i=device/car");
        }

        car2: Car {
            @display("p=250,200;i=device/car");
        }

        rsu1: RSU {
            @display("p=300,200;i=device/rsu");
        }

        rsu2: RSU {
            @display("p=350,200;i=device/rsu");
        }

        ofController: OpenFlowController {
            @display("p=150,50;i=device/server");
        }
        ofSwitch1: OpenFlowSwitch {
            @display("p=250,50;i=device/switch");
        }
        ofSwitch2: OpenFlowSwitch {
            @display("p=350,50;i=device/switch");
        }


    connections allowunconnected:
        server.pppg++ <--> Eth10G <--> router.pppg++;
        router.pppg++ <--> Eth10G <--> pgw.filterGate;
        pgw.pppg++ <--> Eth10G <--> eNodeB1.ppp;
        pgw.pppg++ <--> Eth10G <--> eNodeB2.ppp;
        eNodeB1.x2++ <--> Eth10G <--> eNodeB2.x2++;
        eNodeB1.x2++ <--> Eth10G <--> eNodeB2.x2++;
        ofController.ethg++ <--> Eth10G <--> ofSwitch1.ethg++;
        ofController.ethg++ <--> Eth10G <--> ofSwitch2.ethg++;

}

