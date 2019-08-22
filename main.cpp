
/** /brief Source file for the gui main function
 * Contains main function that initializes the Gui interface.
 */


#include "maingui.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainGui w;
    w.show();

    return a.exec();
}
