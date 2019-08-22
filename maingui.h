

/** /brief Header file for the gui headers.
 * Initializes the button actions as well as the widgets and windows.
 */

#ifndef MAINGUI_H
#define MAINGUI_H

#include <QMainWindow>

namespace Ui {
class MainGui;
}

class MainGui : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainGui(QWidget *parent = nullptr);
    ~MainGui();

private slots:
    void on_runButton_clicked(); //initialize button action function

    void on_initializeButton_clicked(); //initialize button action function

private:
    Ui::MainGui *ui;
};

#endif // MAINGUI_H
