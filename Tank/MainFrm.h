
// MainFrm.h: CMainFrame 类的接口
//

#pragma once


class CMainFrame : public CFrameWnd  //窗口类
{
	
public:
	CMainFrame() noexcept;
protected: 
	DECLARE_DYNAMIC(CMainFrame)

// 特性
public:

// 操作
public:

// 重写
public:
	

// 实现
public:
	virtual ~CMainFrame();


// 生成的消息映射函数
protected:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	DECLARE_MESSAGE_MAP()

	int m_iwidth = 800;
	int m_iheight = 600;
};


