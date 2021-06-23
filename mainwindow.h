#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:

    void on_abrirbtn_clicked();
    void on_guardarbtn_clicked();
    void on_salirbtn_clicked();
    void on_analizarbtn_clicked();


private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
