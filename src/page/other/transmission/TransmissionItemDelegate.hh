﻿/*
 * Copyright (C) 2019 wuuhii. All rights reserved.
 *
 * The file is encoding with utf-8 (with BOM). It is a part of QtSwissArmyKnife
 * project. The project is a open source project, you can get the source from:
 *     https://github.com/wuuhii/QtSwissArmyKnife
 *     https://gitee.com/wuuhii/QtSwissArmyKnife
 *
 * If you want to know more about the project, please join our QQ group(952218522).
 * In addition, the email address of the project author is wuuhii@outlook.com.
 */
#ifndef TRANSMISSIONITEMDELEGATE_HH
#define TRANSMISSIONITEMDELEGATE_HH

#include <QListWidget>
#include <QAbstractItemDelegate>

class SAKDebugPage;

class TransmissionItemDelegate:public QAbstractItemDelegate
{
    Q_OBJECT
public:
    TransmissionItemDelegate(SAKDebugPage *debugPage, QObject *parent = nullptr);

    enum TransmissionItemType {
        SerialPortType,
        UdpType,
        TcpType
    };
private:
    SAKDebugPage *_debugPage;
    TransmissionItemType transmissionItemType = SerialPortType;
};

#endif
