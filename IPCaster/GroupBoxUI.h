#pragma once


#ifndef _UIGROUPBOX_H_
#define _UIGROUPBOX_H_
using namespace DuiLib;
#define  GROUPBOX_TEXT_OFFSET        40        //����GroupBox�е�Text�������ߵ�ƫ��

const TCHAR kGroupBoxUIClassName[] = _T("GroupBoxUI");
const TCHAR kGroupBoxUIInterFace[] = _T("GroupBox");


class CGroupBoxUI :public CContainerUI
{
public:
	CGroupBoxUI();

	~CGroupBoxUI();

	virtual LPCTSTR GetClass() const;

	virtual LPVOID GetInterface(LPCTSTR pstrName);

	virtual void SetAttribute(LPCTSTR pstrName, LPCTSTR pstrValue);

	void PaintText(HDC hDC);

	void PaintBorder(HDC hDC);

	void SetTextColor(DWORD dwTextColor);

	void SetFont(int iFont);

	void SetShowHtml(bool bShowHtml);

private:
	DWORD    m_dwTextColor;        ///������ɫ
	int        m_iFont;            ///����ţ���С
	bool    m_bShowHtml;        ///�Ƿ���ʾHTML����
	int        m_iTextWidth;        ///Text���ֿ�
	int        m_iTextHeigh;        ///Text���ָ�
	int		m_nBorderSize = 1;
};

#endif//_UIGROUPBOX_H_

