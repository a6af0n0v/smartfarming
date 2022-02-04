import QtQuick 2.0
import QtQuick.Controls 2.14

Item {
    property alias caption: tCaption.text
    property alias value: tfValue.text
    property alias inputMask: tfValue.inputMask
    signal tFValueChanged();

    Column{
        anchors.fill: parent
        Text{
            id: tCaption
        }

        TextField{
            id: tfValue
            height: 50
            width: parent.width
            onTextChanged: {
                tFValueChanged();
            }

            background:     Rectangle
            {
                    radius:         5
                    anchors.fill:   parent
                    color:  "#e5f3df"
                    anchors.leftMargin:-5

            }
        }
    }
}
