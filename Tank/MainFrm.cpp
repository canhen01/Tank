
// MainFrm.cpp: CMainFrame 类的实现
//

#include "pch.h"
#include "framework.h"
#include "Tank.h"

#include "MainFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

#define GAME_WIN_W    (800)
#define GAME_WIN_H    (600)
// CMainFrame

IMPLEMENT_DYNAMIC(CMainFrame, CFrameWnd)

BEGIN_MESSAGE_MAP(CMainFrame, CFrameWnd)
	ON_WM_CREATE()
	ON_WM_SETFOCUS()
END_MESSAGE_MAP()

// CMainFrame 构造/析构

CMainFrame::CMainFrame() noexcept
{
	// TODO: 在此添加成员初始化代码
#define MY_STYLE (WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU | \
		WS_MINIMIZEBOX | FWS_ADDTOTITLE)
	//创建窗口
	Create(NULL, _T("大汇堂-坦克大战"), MY_STYLE, CRect(0, 0, GAME_WIN_W, GAME_WIN_H));
	//设置客户区大小
	{
		CRect rcCli;

		GetClientRect(rcCli);		//获得客户区大小

		RECT rcFramr = {0,0,		//计算边框的大小，并设置
						m_iwidth + m_iwidth - rcCli.right,
						m_iheight + m_iheight - rcCli.bottom
		};
		MoveWindow(&rcFramr, TRUE);//调用API设置窗口位置大小
	}
}

CMainFrame::~CMainFrame()
{
}

int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CFrameWnd::OnCreate(lpCreateStruct) == -1)
		return -1;


	return 0;
}


