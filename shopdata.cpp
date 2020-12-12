#include "shopdata.h"

bool shopNode::operator==(const shopNode &node)
{
    return this->shop_name == node.shop_name;
}

void shopNode::ini()
{
    deled = false;
    shop_id.clear();
    shop_name.clear();
    hash_code = 0;
    shop_type.clear();
    shop_passwd.clear();
    avg_score.clear();
    avg_price.clear();
    address.clear();
    phone.clear();
    foods.clear();
    comments.clear();
}

ShopData::ShopData()
{
    data = new hashMap;
    GetData();
}

hashMap::hashMap()
{
    shop_num = 0;
    data = new shopNode[MAX_SIZE];
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
    hash = hash % MAX_SIZE;
    //qDebug() << hash;
    int offset = 0;
    if((data[hash + offset].shop_name != "") && data[hash+offset].deled!=true )
    {
        offset++;
    }
    node.hash_code = hash+offset;
    data[hash+offset] = node;
    shop_num++;
}

void hashMap::DelData(QString shopname)
{
    int hash = Time33(shopname);
    hash = hash % MAX_SIZE;
    int offset = 0;
    if(data[hash + offset].shop_name != shopname && hash+offset < MAX_SIZE)
    {
        offset++;
    }
    if(hash+offset != MAX_SIZE)
    {
        data[hash+offset].deled = true;
    }
    shop_num--;
}

shopNode& hashMap::SearchData(QString shopname)
{
    int hash = Time33(shopname);
    hash = hash % MAX_SIZE;
    int offset = 0;
    if(data[hash + offset].shop_name != shopname && hash+offset < MAX_SIZE)
    {
        offset++;
    }
    if(hash+offset != MAX_SIZE)
    {
        return data[hash+offset];
    }
    else
        return null_node;
}

int hashMap::size()
{
    return shop_num;
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
    buff.append(buff2);

    while(!input.atEnd())
    {
        temp->ini();

        temp->shop_type = buff.right(buff.size() - (buff.indexOf(':') + 2));
        temp->shop_type.remove('\n');
        temp->shop_type.remove('\r');

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
                foodNode *foodtemp = new foodNode;
                auto list = buff.split(' ');
                foodtemp->food_id = list[1].right(list[1].size() - list[1].indexOf(':') + 2);
                foodtemp->food_id = foodtemp->food_id.left(foodtemp->food_id.size() - 1);
                foodtemp->food_name = list[3].right(list[3].size() - list[3].indexOf(':') + 2);
                foodtemp->food_name = foodtemp->food_name.left(foodtemp->food_name.size() - 1);
                foodtemp->food_price = list[5].right(list[5].size() - list[5].indexOf(':') + 2);
                foodtemp->food_price.remove('\r');
                foodtemp->food_price.remove('\n');
                temp->foods.append(*foodtemp);
            }
            else if(buff.contains("Comment"))
            {
                temp->comments.push_back(buff.right(buff.size() - (buff.indexOf(':') + 2)));
            }
        }
        //qDebug() << temp->shop_type;
        data->AddData(*temp);
    }
}

int ShopData::size()
{
    return data->size();
}

void ShopData::AddData(shopNode &node)
{
    data->AddData(node);
}

void ShopData::WriteData()
{
    QFile output("./data/output_test.txt");
    output.open(QFile::WriteOnly);
    QTextStream out(&output);
    out.setCodec("UTF-8");
    for(int i = 0;i < MAX_SIZE;i++)
    {
        if(!(data->data[i] == null_node) && !(data->data[i].deled))
        {
            out << "\{" << '\n';
            out << '\t' <<"\"shoptype\": " <<  '\"' << data->data[i].shop_type << "\",\n";
            out << '\t' <<"\"shopId\": " << "\"" << data->data[i].shop_id << "\",\n";
            out << '\t' <<"\"shopName\": " << "\"" << data->data[i].shop_name << "\",\n";
            out << '\t' <<"\"shopPassword\": " << "\"" << data->data[i].shop_passwd << "\",\n";
            out << '\t' <<"\"avgScore\": " << "\"" << data->data[i].avg_score << "\",\n";
            out << '\t' <<"\"avePrice\": " << "\"" << data->data[i].avg_price << "\",\n";
            out << '\t' <<"\"address\": " << "\"" << data->data[i].address << "\",\n";
            out << '\t' <<"\"phone\": " << "\"" << data->data[i].phone << "\",\n";
            for(int j = 0 ; j < data->data[i].foods.length();j++)
            {
                out << '\t' <<"\{\n";
                out << "\t\t" << "\"food_id\": " << "\"" << data->data[i].foods[j].food_id << "\",\n";
                out << "\t\t" << "\"food_name\": " << "\"" << data->data[i].foods[j].food_name << "\",\n";
                out << "\t\t" << "\"food_price\": " << "\"" << data->data[i].foods[j].food_price << "\",\n";
                out << '\t' << "},\n";
            }
            for(int j = 0; j < data->data[i].comments.size();j++)
            {
                out << '\t' << "\"Comment" << j <<"\": \"" << data->data[i].comments[j] << "\",\n";
            }
            out << '}' << '\n';
        }
    }
    output.close();
}

shopNode ShopData::SearchData(QString name)
{
    return data->SearchData(name);
}

AdjacencyMatrix::AdjacencyMatrix()
{
    shop = new ShopData;
    shop->GetData();

    shopNode *temp = new shopNode;
    temp->shop_name = QString("北林");
    temp->shop_id = QString("512324");

    shop->AddData(*temp);

    //qDebug() << shop->size();

    //qDebug() << "test point 1";

    matrix = new float*[MAX_SIZE];
    for(int i = 0; i< MAX_SIZE;i++)
    {
        matrix[i] = new float[MAX_SIZE];
        memset(matrix[i],inf,sizeof(int)*MAX_SIZE);
        qDebug() << "test point 3";
    }

    //qDebug() << "test point 2";
    dis = new float[MAX_SIZE];
    memset(dis,inf,sizeof(int)*MAX_SIZE);

    //qDebug() << "test point 4";

    GetData();
}

void AdjacencyMatrix::GetData()
{
    QFile input("./data/distance.txt");

    input.open(QFile::ReadOnly);

    char * read = new char[500];

    input.readLine(read,500);

    memset(read,0,sizeof(char)*500);



    while(!input.atEnd())
    {
        input.readLine(read,500);
        QString temp(read);
        QStringList data_list_1,data_list_2;
        temp.remove('\r');
        temp.remove('\n');
        data_list_1 = temp.split(' ');
        data_list_2 = data_list_1[3].split(':');
        data_list_1.pop_back();
        data_list_1 += data_list_2;
        int hash1,hash2;

        hash1 = shop->SearchData(data_list_1[1]).hash_code;
        hash2 = shop->SearchData(data_list_1[3]).hash_code;

        //qDebug() << data_list_1;


        matrix[hash1][hash2] = data_list_1[4].toFloat();

        //qDebug() << hash1 << " " <<hash2 << " " << data_list_1[1] << ' ' <<  data_list_1[3] << ' ' <<  matrix[hash1][hash2];
    }
    input.close();
}

void AdjacencyMatrix::Dijkstra()
{

}
