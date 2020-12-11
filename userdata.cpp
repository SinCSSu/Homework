#include "userdata.h"

userNode::userNode()
{
    id.clear();
    passwd.clear();
    phone.clear();
}

userNode::userNode(const QString& id,const QString &passwd,const QString &phone):
    id(id),passwd(passwd),phone(phone)
{

}




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
        if(arr[i].id == "")
            continue;
            //break;
        //qDebug() << arr[i].id <<' '<< arr[i].passwd<<' ' << arr[i].phone<< '\n';
        i++;
    }
    input.close();
    usernum = i;
}

int UserData::SearchData(QString id)
{
    int top,bottom,mid;
    top = 0;
    bottom = usernum - 1;
    while(top <= bottom)
    {
        mid = (top+bottom)/2;
        if(id.toInt() < arr[mid].id.toInt())
        {
            bottom = mid -1;
        }
        else if(id.toInt() > arr[mid].id.toInt())
        {
            top = mid +1;
        }
        else if(id.toInt() == arr[mid].id.toInt())
        {
            return mid;
        }
    }
    return -1;
}

void UserData::_hashcode()
{
    for(int i = 0; i < usernum;i++)
    {
        QByteArray md5_code;
        md5_code = QCryptographicHash::hash(arr[i].passwd.toUtf8(),QCryptographicHash::Md5);
        arr[i].passwd = md5_code.toHex();
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
        usernum--;
        return true;
    }
}

void UserData::AddData(const userNode & node, int pos)
{
    AddElem(node,pos);
    usernum++;
}

void UserData::WriteData()
{
    QFile outout_file("./data/user.txt");
    outout_file.open(QFile::WriteOnly);
    QTextStream output(&outout_file);

    output.setCodec("UTF-8");
    output << QString("用户账号 密码 联系方式") << endl;
    for(int i = 0 ; i< usernum;i++)
    {
        output << arr[i].id << ' ' << arr[i].passwd << ' ' << arr[i].phone << endl;
    }
    outout_file.close();
}


int UserData::size()
{
    return usernum;
}
