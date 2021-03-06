#ifndef SDBDOCK_H
#define SDBDOCK_H

#include <memory>

#include <QDockWidget>

class MainWindow;
class QTreeWidgetItem;

namespace Ui
{
    class SdbDock;
}

class SdbDock : public QDockWidget
{
    Q_OBJECT

public:
    explicit SdbDock(QWidget *parent = 0);
    ~SdbDock();

private slots:
    void on_treeWidget_itemDoubleClicked(QTreeWidgetItem *item, int column);
    void on_lockButton_clicked();
    void on_treeWidget_itemChanged(QTreeWidgetItem *item, int column);

    void reload(QString _path = nullptr);

private:
    std::unique_ptr<Ui::SdbDock> ui;
    QString path;

};

#endif // SDBDOCK_H
