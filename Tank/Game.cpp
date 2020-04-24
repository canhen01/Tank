#include "pch.h"
#include "Game.h"
CGame::CGame() {

}

CGame::~CGame() {

}

void CGame::setHandle(HWND hWnd) {
	m_hWnd = hWnd;
}

bool CGame::EnterFrame(DWORD dwTime) {
	return false;
}

void CGame::OnMouseMove(UINT nFlags, CPoint point) {

}

void CGame::OnLButtonUp(UINT nFlags, CPoint point) {

}