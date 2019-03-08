#include <QString>
#include <QtTest>
#include <QCoreApplication>

class MyTest : public QObject
{
    Q_OBJECT

public:
    MyTest();

private Q_SLOTS:
    void testQString_data();
    void testQString();
};

MyTest::MyTest()
{
}

void MyTest::testQString_data()
{
    QTest::addColumn<QString>("string");
    QTest::addColumn<QString>("result");
    QTest::newRow("lower")<<"hello"<<"HELLO";
    QTest::newRow("mix")<<"hello"<<"HELLO";
    QTest::newRow("upper")<<"hello"<<"HELLO";
}

void MyTest::testQString()
{
    QFETCH(QString, string);
    QFETCH(QString, result);
    QCOMPARE(string.toUpper(), result);
    QBENCHMARK {
        string.toUpper();
    }
}

QTEST_MAIN(MyTest)

#include "tst_mytest.moc"
