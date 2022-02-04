import QtQuick 2.14
import QtQuick.Controls 2.14
import QtBluetooth 5.12
import com.agafonov.BluetoothAgent 1.0
import QtCharts 2.3
import QtQuick.Extras 1.4

Page {
    //anchors.fill: parent
    id: home_page
    signal data_ready(int adc, int negvcc, double current);
    title: qsTr("Measure")
    property string bt_state: "Connect"
    state: "notConnected"

    states: [
        State {
            name: "notConnected"
            PropertyChanges {
                target: measure_btn
                color: "#636b62"
                border.color: "#535b52"
            }
        },
        State {
            name: "Connecting"
            PropertyChanges {
                target: measure_btn
                color: "#9ffb8d"
                border.color: "#8fab7d"
            }
        },
        State {
            name: "Connected"
            PropertyChanges {
                target: measure_btn
                color: "#3fdb3f"
                border.color: "#2fcb2f"
            }
        },
        State {
            name: "Error"
            PropertyChanges {
                target: measure_btn
                color: "#e46a39"
                border.color: "#d45a29"
            }
        },

        State {
            name: "Measuring"
            PropertyChanges {
                target: measure_btn
                color: "#e46a39"
                border.color: "#d45a29"
            }
        }

    ]

    BluetoothAgent{
        id: bt_agent
        onConnected: {
            console.log("smart farming connected");
            home_page.state = "Connected";
        }
        onFinished: {
            console.log("scan finished");
        }

        onStateChanged: {
            var btn_names = ["Disconnected. Press to connect", "Scanning...", "Smart Farming found", "Connecting...", "Services discovered", "Device connected, press to Measure", "Error. Try again."];
            lb_state.text = btn_names[bt_agent.state];
            switch(bt_agent.state){
                case 0:
                    home_page.state = "notConnected";
                    break;
                case 3:
                case 4:
                case 2:
                case 1:
                    home_page.state = "Connecting";
                    break;
                case 5:
                    home_page.state = "Connected";
                    break;
                case 6:
                    home_page.state = "Error";
                    break;
            }
        }
        onDataReady: {
            tCurrent.text = bt_agent.current.toFixed(2) + " nA";
            data_ready(bt_agent.ADC, bt_agent.NEGVCC, bt_agent.current);
            home_page.state="Connected";
        }
    }

    Rectangle{
        id: measure_btn
        width: home_page.width*0.8
        height: width
        color:  "#86d786"
        anchors.top: parent.top
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.topMargin: 10
        radius: width/2

        border.width: 5
        Label{
            id: lb_state
            text: bt_state
            anchors.centerIn: parent
        }
        MouseArea{
            anchors.fill: parent
            Connections {
                onClicked: {
                    //data_ready(1,2,3);
                    if(bt_agent.state==0)//DISCONNECTED
                    {
                        bt_agent.connect();
                        home_page.state = "Connecting";
                        return;
                    }
                    if (bt_agent.state==5)//CONNECTED
                    {
                        console.log("measuring...");
                        home_page.state= "Measuring";
                        bt_agent.measure();
                        return;
                    }
                }
            }

        }


    }
    Rectangle{
        color: "#b0eab0"
        anchors.top: measure_btn.bottom
        anchors.margins: 10
        width: parent.width
        height: 100
        Text {
            anchors.fill: parent
            id: tCurrent
            text: "0.00 nA"
            font.pointSize: 20
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
        }

    }
}

/*##^##
Designer {
    D{i:0;autoSize:true;formeditorZoom:0.0625;height:480;width:640}
}
##^##*/
