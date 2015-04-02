#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "items/image/Pixmap.h"
#include "items/text/Text.h"

namespace Ui {
class MainWindow;
}

namespace Qi {
class CacheSpaceAnimationAbstract;
class ListColumnsResizer;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_pushButton_clicked();
    void on_shiftRightBttn_clicked();

    void on_shiftLeftBttn_clicked();

    void on_shiftRandomBttn_clicked();

private:
    void shuffleRows();

    Ui::MainWindow *ui;
    QSharedPointer<Qi::ModelPixmap> m_images;
    QSharedPointer<Qi::ModelText> m_names;
    QSharedPointer<Qi::ModelText> m_descriptions;
    QSharedPointer<Qi::ListColumnsResizer> m_resizer;

    Qi::CacheSpaceAnimationAbstract* m_backAnimation;
};

#endif // MAINWINDOW_H
