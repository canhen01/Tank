#pragma once
class CGame
{
public:
	CGame();
	~CGame();
	void setHandle(HWND hWnd);//设置输出窗口的句柄

	bool EnterFrame(DWORD dwTime);//进入游戏帧

	void OnMouseMove(UINT nFlags, CPoint point);//处理鼠标移动事件
	void OnLButtonUp(UINT nFlags, CPoint point);//处理左键抬起事件
private:
	HWND m_hWnd;//窗口

};

