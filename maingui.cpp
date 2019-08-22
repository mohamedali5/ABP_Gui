
/** /brief Source file for the gui controller code
 * Contains functions that deal with button clicks.
 * Contains functions that print onto the Gui text containers.
 */

#include "maingui.h"
#include "ui_maingui.h"
#include <QWidget>
#include <stdio.h>
#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

static unsigned long counter = 5;
static vector<string> vect;

MainGui::MainGui(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainGui)
{
    ui->setupUi(this);
}

MainGui::~MainGui()
{
    delete ui;
}

/**
 * Reads the file specified by the path and adds the contents, word by word, into a vector of string.
 */
void readFile()
{
    ifstream file;
    file.open ("../AlternateBitProtocolSimulator-simulator-improvement-E/data/top_model/abp_output_transform.txt"); //change to file location of ABP output file
    if (!file.is_open()) return;

    std::string word;
    while (file >> word)
    {
        vect.push_back(word);
    }
}

/**
 * When the initialize button is clicked, invoke this fuction.
 * This function will invoke the readFile() function.
 */
void MainGui::on_initializeButton_clicked()
{
    readFile();
}

/**
 * When the run button is clicked, invoke this fuction.
 * This function will loop through the vector of words and
 * print the text into the designated text boxes.
 * Whenever run simulation button is clicked, a new line of output is
 * printed to the text boxes.
 */
void MainGui::on_runButton_clicked()
{
    if((counter + 3)< vect.size()){
        QString time = QString::fromStdString(vect.at(counter));
        QString value = QString::fromStdString(vect.at(counter+1));
        QString port = QString::fromStdString(vect.at(counter+2));
        QString component = QString::fromStdString(vect.at(counter+3));
           ui -> textBrowser -> setText(time);
           ui -> textBrowser_2 -> setText(value);
           ui -> textBrowser_3 -> setText(port);
           ui -> textBrowser_4 -> setText(component);
           counter += 4;
    }

}


