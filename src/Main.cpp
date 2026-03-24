#include <QApplication>
#include <QWidget>

int main(int ViArgs, char* AcArgs[])
{
    QApplication EqApplication(ViArgs, AcArgs);
    QWidget EqWindow;
    EqWindow.setWindowTitle("Qt");
    EqWindow.resize(400, 300);
    EqWindow.show();
    return EqApplication.exec();
}
