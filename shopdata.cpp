#include "shopdata.h"

bool shopNode::operator==(const shopNode &node)
{
    return this->shop_name == node.shop_name;
}

ShopData::ShopData()
{
    data = new hashMap;
    GetData();
}

hashMap::hashMap()
{
    shop_num = 0;
    data = new shopNode[MAXSIZE];
}

void hashMap::ini()
{
    shop_num = 0;
    hashmap.clear();
}

int hashMap::Time33(QString str)
{
    int hash = 5381;
    for(int i = 0; i < str.size();i++)
    {
        hash += (hash << 5) + str.at(i).row();
    }
    return (hash & 0x7FFFFFFF);
}

void hashMap::AddData(shopNode node)
{
    int hash = Time33(node.shop_name);
    hash = hash % MAXSIZE;
    int offset = 0;
    if(data[hash + offset].shop_name != "" )
    {
        offset++;
    }
    //hashmap.insert(hash+offset,node);
    data[hash+offset] = node;
    shop_num++;
}

void hashMap::DelData(QString shopname)
{
    int hash = Time33(shopname);
    hash = hash % MAXSIZE;
    int offset = 0;
    if(data[hash + offset].shop_name != shopname && hash+offset < MAXSIZE)
    {
        offset++;
    }
    if(hash+offset != MAXSIZE)
    {
        data[hash+offset].deled = true;
    }
    shop_num--;
}

shopNode& hashMap::SearchData(QString shopname)
{
    int hash = Time33(shopname);
    hash = hash % MAXSIZE;
    int offset = 0;
    if(data[hash + offset].shop_name != shopname && hash+offset < MAXSIZE)
    {
        offset++;
    }
    if(hash+offset != MAXSIZE)
    {
        return data[hash+offset];
    }
    else
        return null_node;
}


void ShopData::GetData()
{
    QFile input("./data/shop.txt");
    input.open(QFile::ReadOnly);

    shopNode * temp = new shopNode;
    QString buff;
    char* buff2 = new char[500];
    memset(buff2,0,sizeof(char)*500);

    input.readLine(buff2,500);

    while(!input.atEnd())
    {
        buff.append(buff2);

        temp->shop_type = buff.right(buff.size() - (buff.indexOf(':')+2));

        while(!input.atEnd())
        {
            memset(buff2,0,sizeof (char)*500);
            buff.clear();

            input.readLine(buff2,500);

            buff.append(buff2);
            if(buff.contains("shoptype"))
                break;
            else if(buff.contains("shopId"))
            {
                temp->shop_id = buff.right(buff.size() - (buff.indexOf(':') + 2));
                temp->shop_id.remove('\r');
                temp->shop_id.remove('\n');
            }
            else if(buff.contains("shopName"))
            {
                temp->shop_name = buff.right(buff.size() - (buff.indexOf(':') + 2));
                temp->shop_name.remove('\r');
                temp->shop_name.remove('\n');
            }
            else if(buff.contains("shopPassword"))
            {
                temp->shop_passwd = buff.right(buff.size() - (buff.indexOf(':') + 2));
                temp->shop_passwd.remove('\r');
                temp->shop_passwd.remove('\n');
            }
            else if(buff.contains("avgScore"))
            {
                temp->avg_score = buff.right(buff.size() - (buff.indexOf(':') + 2));
                temp->avg_score.remove('\r');
                temp->avg_score.remove('\n');
            }
            else if(buff.contains("avePrice"))
            {
                temp->avg_price = buff.right(buff.size() - (buff.indexOf(':') + 2));
                temp->avg_price.remove('\r');
                temp->avg_price.remove('\n');
            }
            else if(buff.contains("address"))
            {
                temp->address = buff.right(buff.size() - (buff.indexOf(':') + 2));
                temp->address.remove('\r');
                temp->address.remove('\n');
            }
            else if(buff.contains("phone"))
            {
                temp->phone = buff.right(buff.size() - (buff.indexOf(':') + 2));
                temp->phone.remove('\r');
                temp->phone.remove('\n');
            }
            else if(buff.contains("food"))
            {
                foodNode foodtemp;
                auto list = buff.split(' ');
                foodtemp.food_id = list[0].right(list[0].size() - list[0].indexOf(':') + 2);
                foodtemp.food_id = foodtemp.food_id.left(foodtemp.food_id.size() - 1);
                foodtemp.food_name = list[1].right(list[1].size() - list[1].indexOf(':') + 2);
                foodtemp.food_name = foodtemp.food_name.left(foodtemp.food_name.size() - 1);
                foodtemp.food_price = list[2].right(list[2].size() - list[2].indexOf(':') + 2);
                temp->foods.push_back(foodtemp);
            }
            else if(buff.contains("Comment"))
            {
                temp->comments.push_back(buff.right(buff.size() - (buff.indexOf(':') + 2)));
            }
        }
        qDebug() << temp->shop_name;
        data->AddData(*temp);
    }


}

shopNode ShopData::SearchData(QString name)
{
    return data->SearchData(name);
}
