import QtQuick 2.14
import QtQuick.Controls 2.14
import com.agafonov.ApplicationSettings 1.0

Page {
    title: qsTr("Settings")

    ApplicationSettings{
        id: settings
    }


    Column{
        anchors.fill: parent
        anchors.margins: 10
        SettingsInput{
            id: siInterval
            caption: "Interval, ms"
            width: parent.width
            height: 90
            value: settings.Interval
            inputMask: "999999"

        }

        SettingsInput{
            id: siRepeats
            caption: "Number of repeats"
            width: parent.width
            height: 70
            value: settings.Repeats.toString()
            inputMask: "999"

        }

        Switch{
            id: cbCyclic
            text: "Cyclic measurements"
            height: 90
            width: parent.width
            checked: settings.isCyclic

        }

        SettingsInput{
            id: siR
            caption: "R, ohm"
            width: parent.width
            height: 90
            value: settings.R.toString()
            inputMask: "99999999"

        }

        SettingsInput{
            id: siVREF
            caption: "Vref, uV"
            width: parent.width
            height: 90
            value: settings.VREF.toString()
            inputMask: "99999999"

        }

        SettingsInput{
            id: siVNEG
            caption: "Vneg, uV"
            width: parent.width
            height: 90
            value: settings.VNEG.toString()
            inputMask: "99999999"
        }

        RoundButton{
            text: "Save"
            width: parent.width
            onClicked: {
                settings.Interval = parseInt(siInterval.value);
                settings.Repeats = parseInt(siRepeats.value);
                settings.R = parseInt(siR.value);
                settings.VREF = parseInt(siVREF.value);
                settings.VNEG = parseInt(siVNEG.value);
                settings.isCyclic = cbCyclic.checked;
            }
        }
        Rectangle{
            width: parent.width
            height: 100

        }
    }


}

