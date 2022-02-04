import QtQuick 2.14
import QtQuick.Controls 2.14
import com.agafonov.CSVSaver 1.0
Page {
    id: history_page
    property alias history_model: history_model
    CSVSaver{
        id: csvSaver
    }
    title: qsTr("History")
    ListModel{
        id: history_model

    }
    Component{
        id: list_delegate
        Item{
            id: list_item
            width: list_view.width
            height: 50

                Rectangle{
                    id: rec1
                    color: index %2 ==0 ?"#e5f3df":"white"
                    width: parent.width*0.4
                    height: parent.height



                    Text {
                        id: time_stamp
                        text: time
                        anchors.fill: parent
                        anchors.margins: 5
                        verticalAlignment: Text.AlignVCenter
                    }

                }
                Rectangle{
                    id: rec2
                    width: parent.width*0.2
                    anchors.left: rec1.right
                    height: parent.height
                    color: index %2==0 ?"#e5f3df":"white"
                    Text {
                        id: current_field
                        text: current.toFixed(1)
                        anchors.fill: parent
                        anchors.margins: 5
                        verticalAlignment: Text.AlignVCenter
                    }
                }
                Rectangle{
                    id: rec3
                    width: parent.width*0.2
                    anchors.left: rec2.right
                    height: parent.height
                    color: index %2 ==0?"#e5f3df":"white"
                    Text {
                        id: vccneg_field
                        text: vccneg
                        anchors.fill: parent
                        anchors.margins: 5
                        verticalAlignment: Text.AlignVCenter
                    }
                }

                Rectangle{
                    id: rec4
                    width: parent.width*0.2
                    anchors.left: rec3.right
                    height: parent.height
                    color: index %2 ==0?"#e5f3df":"white"
                    Text {
                        id: adc_field
                        text: adc
                        anchors.fill: parent
                        anchors.margins: 5
                        verticalAlignment: Text.AlignVCenter
                    }
                }
        }
    }


    Component{
        id: list_header
        Item{
            width: list_view.width
            height: 50

                Rectangle{
                    id: header_rec1
                    width: parent.width*0.4
                    height: parent.height
                    color: "#a2eaa8"

                    Text {

                        text: "Time"
                        anchors.fill: parent
                        anchors.margins: 5
                        verticalAlignment: Text.AlignVCenter
                    }

                }
                Rectangle{
                    id: header_rec2
                    width: parent.width*0.2
                    anchors.left: header_rec1.right
                    height: parent.height
                    color: "#a2eaa8"
                    Text {

                        text: "I, nA"
                        anchors.fill: parent
                        anchors.margins: 5
                        verticalAlignment: Text.AlignVCenter
                    }
                }
                Rectangle{
                    id: header_rec3
                    width: parent.width*0.2
                    anchors.left: header_rec2.right
                    height: parent.height
                    color: "#a2eaa8"
                    Text {

                        text: "Vcc, uV"
                        anchors.fill: parent
                        anchors.margins: 5
                        verticalAlignment: Text.AlignVCenter
                    }
                }

                Rectangle{
                    id: header_rec4
                    width: parent.width*0.2
                    anchors.left: header_rec3.right
                    height: parent.height
                    color: "#a2eaa8"
                    Text {

                        text: "ADC, uV"
                        anchors.fill: parent
                        anchors.margins: 5
                        verticalAlignment: Text.AlignVCenter
                    }
                }
        }
    }


    RoundButton{
        id: btnSave
        anchors.bottom: parent.bottom
        anchors.margins: 15
        height: 50
        width: parent.width
        text: "Save to CSV"
        //font.pointSize: 6;
        onClicked:
        {
            csvSaver.clean();

            for(var i=0; i<history_model.count;i++)
            {
                var date_time = history_model.data(history_model.index(i,0),0);
                var current = history_model.data(history_model.index(i,0),1);
                var vneg = history_model.data(history_model.index(i,0),2);
                var adc = history_model.data(history_model.index(i,0),3);
                csvSaver.add_data(date_time, current, vneg, adc);

            }
            csvSaver.save_to_file( date_time+".csv");
            //csvSaver.save_to_file("Download/" + date_time+".csv");
            //csvSaver.save_to_file("Phone/Download/" + date_time+".csv");
            //csvSaver.save_to_file("Documents/" + date_time+".csv");
        }

    }


    RoundButton{
        id: btnClear
        anchors.bottom: btnSave.top
        anchors.margins: 15
        height: 50
        width: parent.width
        text: "Clear List"
        onClicked: {
            history_model.clear();
        }
    }

    ListView{
        id:list_view
        header: list_header
        anchors.top: parent.top
        anchors.bottom: btnClear.top
        width:  parent.width
        model: history_model
        delegate: list_delegate
        highlight: Rectangle { color: "lightsteelblue"; radius: 5 }
        visible: true

    }


}
