#ifndef SENSORGPSDATAITEM_H
#define SENSORGPSDATAITEM_H

class SensorGpsDataItem
{
private:
    /* data */
public:
    SensorGpsDataItem(/* args */);
    ~SensorGpsDataItem();

    // 静态成员，默认未初始化的值
    static const double NOT_INITIALIZED;

    // 数据时间戳
    double timestamp;
    // GPS纬度
    double gpsLat;
    // GPS经度
    double gpsLon;
    // GPS海拔
    double gpsAlt;
    // GPS速度
    double gpsSpeed;
    // 东北天坐标系加速度
    double absNorthAcc;
    double absEastAcc;
    double absUpAcc;
};

#endif