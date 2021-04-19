#include <QCoreApplication>
#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    char theFirstString[100] = "Placeholder";

    std::cout << "This part includes the first " << theFirstString << "\n";
//    std:cin
    return a.exec();
}
