#ifndef MEMORYPAGE_H
#define MEMORYPAGE_H

#include <QWidget>
#include <QTabWidget>
#include "qchartviewer.h"
#include "chartdir.h"

QT_BEGIN_NAMESPACE
class QTableView;
class QDialogButtonBox;
class QGroupBox;
QT_END_NAMESPACE

class AppUsageTab;
class SysUsageTab;
class MemMonitorTab;
class MemProtectionTab;

class MemoryPage : public QTabWidget
{
	Q_OBJECT

public:
	MemoryPage(QWidget *parent = 0);
	~MemoryPage();
private slots:
	void onChangeTab(int index);

private:
	MemoryPage& operator=(const MemoryPage& obj);
	MemoryPage(const MemoryPage& obj);
private:
	AppUsageTab* m_appUsage;   // Ӧ�ó�����ڴ�ռ�����
	SysUsageTab* m_sysUsage;   // ����ϵͳ��ռ���ڴ�ʹ�����
	MemMonitorTab* m_memMonitor;  // �ڴ����״���Ķ�̬ͼ��ͳ��ͼ
	MemProtectionTab* m_memProtect;  // �ڴ汣�����߼�����
};

//////////////////////////////////////////////////////////////////////////
// Definition of application memory usage class.
class AppUsageTab : public QWidget
{
	Q_OBJECT

public:
	AppUsageTab(QWidget* parent = 0);
	~AppUsageTab();
private:
	AppUsageTab(const AppUsageTab& obj);
	AppUsageTab& operator=(const AppUsageTab& obj);
private:
	QTableView* m_table;
	QDialogButtonBox* m_btns;
};

//////////////////////////////////////////////////////////////////////////
// Definition of system memory usage class.
class SysUsageTab : public QWidget
{
	Q_OBJECT

public:
	SysUsageTab(QWidget* parent = 0);
	~SysUsageTab();
private:
	SysUsageTab(const SysUsageTab& obj);
	SysUsageTab& operator=(const SysUsageTab& obj);
private:
	QTableView* m_table;
	QDialogButtonBox* m_btns;
};

//////////////////////////////////////////////////////////////////////////
// Definition of memory monitoring class.
class MemMonitorTab : public QWidget
{
	Q_OBJECT

public:
	MemMonitorTab(QWidget* parent = 0);
	~MemMonitorTab();
private:
	MemMonitorTab(const MemMonitorTab& obj);
	MemMonitorTab& operator=(const MemMonitorTab& obj);
private:
	QChartViewer* m_viewer;
	XYChart* m_realTime;
	PieChart* m_stat;
	QGroupBox* m_groupBox;
	QDialogButtonBox* m_btns;
};

//////////////////////////////////////////////////////////////////////////
// Definition of application memory usage class.
class MemProtectionTab : public QWidget
{
	Q_OBJECT

public:
	MemProtectionTab(QWidget* parent = 0);
	~MemProtectionTab();
private:
	MemProtectionTab(const MemProtectionTab& obj);
	MemProtectionTab& operator=(const MemProtectionTab& obj);
private:
	QDialogButtonBox* m_btns;
};

#endif // MEMORYPAGE_H
