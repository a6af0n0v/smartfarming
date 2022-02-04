import QtQuick 2.14
import QtQuick.Controls 2.14
//import QtQuick.VirtualKeyboard 2.14


ApplicationWindow {
    id: main_window
    width: 480
    height: 600
    visible: true
    title: qsTr("Smart Farming")

    Page1Form{
        id: page1
    }

    Page2Form{
        id: page2
    }

    HomeForm{
        id: homeform
        onData_ready : function(adc, negvcc, current){

            var current_date = new Date();
            page1.history_model.append({"time": current_date,
                                       "adc": adc,
                                       "vccneg": negvcc,
                                       "current": current});
        }
    }

    header: ToolBar {
        contentHeight: toolButton.implicitHeight

        ToolButton {
            id: toolButton
            //text:
            /*Image {
                id: name
                source: "open.png"
            }*/
            icon.source: stackView.depth > 1 ? "close.png" : "open.png"




            font.pixelSize: Qt.application.font.pixelSize * 1.6
            onClicked: {
                if (stackView.depth > 1) {
                    stackView.pop()
                } else {
                    drawer.open()
                }
            }
        }

        Label {
            text: stackView.currentItem.title
            anchors.centerIn: parent
        }
    }

    Drawer {
        id: drawer
        width: main_window.width * 0.66
        height: main_window.height

        Column {
            anchors.fill: parent

            ItemDelegate {
                text: qsTr("History")
                width: parent.width
                onClicked: {
                    stackView.push(page1);//("Page1Form.qml")
                    drawer.close()
                }
            }
            ItemDelegate {
                text: qsTr("Settings")
                width: parent.width
                onClicked: {
                    stackView.push(page2);//("Page2Form.qml")
                    drawer.close()
                }
            }
        }
    }

    StackView {
        id: stackView
        initialItem: homeform//"HomeForm.qml"
        anchors.fill: parent
    }

    /*InputPanel {
        id: inputPanel
        z: 99
        x: 0
        y: main_window.height
        width: main_window.width

        states: State {
            name: "visible"
            when: inputPanel.active
            PropertyChanges {
                target: inputPanel
                y: main_window.height - inputPanel.height
            }
        }
        transitions: Transition {
            from: ""
            to: "visible"
            reversible: true
            ParallelAnimation {
                NumberAnimation {
                    properties: "y"
                    duration: 250
                    easing.type: Easing.InOutQuad
                }
            }
        }
    }*/
}
