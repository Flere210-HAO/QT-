#ifndef PERSONINFO_H
#define PERSONINFO_H
#include<QString>

class PersonInfo
{
private:
    QString name,relation,nickname;
    int number;
public:
    PersonInfo();
    PersonInfo(QString newname,int newnumber,QString newrelation,QString newnickname)
    {
        name=newname;
        number=newnumber;
        relation=newrelation;
        nickname=newnickname;
    }
    QString getName()
    {
        return name;
    }
    QString getRelation()
    {
        return relation;
    }
    QString getNickname()
    {
        return nickname;
    }
    int getNumber()
    {
        return number;
    }
    void setName(QString newname)
    {
        name=newname;
    }
    void setRelation(QString newrelation)
    {
        relation=newrelation;
    }
    void setNickname(QString newnickname)
    {
        nickname=newnickname;
    }
    void setNumber(int newnumber)
    {
        number=newnumber;
    }
};

#endif // PERSONINFO_H
