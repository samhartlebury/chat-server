#include "ChatterBoxServer.h"
#include <QCoreApplication>

int main(int argc, char **argv)
{
    QCoreApplication app(argc, argv);

    ChatterBoxServer *server = new ChatterBoxServer();
    bool success = server->listen(QHostAddress::Any, 9999);
    if(!success)
        qFatal("Could not listen on port 9999!");

    qDebug() << "Ready";

    return app.exec();
}
