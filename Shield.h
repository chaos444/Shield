
#pragma once

#ifndef __AFXWIN_H__
	#error "Oops!"
#endif




void GetGameWindowRect();
class COverx64App : public CWinApp
{
public:

	COverx64App();
public:
	virtual BOOL InitInstance();
	virtual void MyCreateWindow();









	DECLARE_MESSAGE_MAP()
};
extern COverx64App theApp;