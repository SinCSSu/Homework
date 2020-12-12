#include "reservequeue.h"

ReserveQueue::ReserveQueue()
{

}

void ReserveQueue::GetData()
{
    QFile input("./data/order.txt");
    input.open(QFile::ReadOnly);
    QTextStream input_data(&input);
    while(!input_data.atEnd())
    {
        queueNode temp;
        input_data >> temp.user >> temp.name >> temp.date;
        if(temp.user != "")
            push(temp);
    }
    pop();
    input.close();
}

void ReserveQueue::WriteData()
{
    QFile output("./order.txt");
    output.open(QFile::WriteOnly);
    QTextStream out(&output);
    out.setCodec("UTF-8");
    out << QString("用户账号 商家名称 预定时间\n");
    ReserveQueue temp = *this;
    while(temp.Size()!=0)
    {
        out << temp.front().user << ' ' << temp.front().name << ' ' << temp.front().date << '\n';
    }
    output.close();

}
