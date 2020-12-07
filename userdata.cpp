#include "userdata.h"

UserData::UserData():List<userNode>(MAX_USER_NUM)
{
    //Create(MAX_USER_NUM);
}

void UserData::GetData()
{
    //qDebug() << "2" ;
    QFile input("./data/user.txt");
    input.open(QFile::ReadOnly);
    QTextStream data(&input);
    int i = 0;
    data >> arr[i].id >> arr[i].passwd >> arr[i].phone;
    while(!data.atEnd())
    {
        data >> arr[i].id >> arr[i].passwd >> arr[i].phone;
        //qDebug() << arr[i].id <<' '<< arr[i].passwd<<' ' << arr[i].phone<< '\n';
        i++;
    }
    usernum = i;
}

int UserData::SearchData(QString id)
{
    int i;
    for(i = 0;i < usernum;i++)
    {
        if(id==arr[i].id)
        {
            break;
        }
    }
    if(i == usernum)
    {
        return -1;
    }
    else
    {
        return i;
    }
}

bool UserData::DelData(int pos)
{
    if(pos <0||pos >= usernum)
    {
        return false;
    }
    else
    {
        RmData(pos);
        return true;
    }
}