#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlEngine>
#include <QQmlContext>
#include <memory>
#include "mousememory.h"
#include <iostream>

using std::unique_ptr;

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    unique_ptr<Mousememory> mouse(new Mousememory());

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    engine.rootContext()->setContextProperty("mouse", mouse.get());




    return app.exec();

    while(true){
        std::cout<<"testaam";
        break;
    }
}
