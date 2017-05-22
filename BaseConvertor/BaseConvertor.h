#pragma once  //______________________________________ BaseConvertor.h  
#include "Resource.h"
class BaseConvertor : public Win::Dialog
{
public:
	BaseConvertor()
	{
	}
	~BaseConvertor()
	{
	}
	wstring convert(int entrada, int base);
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Button gbox1;
	Win::Label lb1;
	Win::Label lb2;
	Win::Textbox tbxBase;
	Win::Textbox tbxEntrada;
	Win::Button gbox2;
	Win::Label lb3;
	Win::Textbox tbxBaseC;
	Win::Label lb4;
	Win::Textbox tbxConvert;
	Win::Button btConvertir;
protected:
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(472);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(141);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"BaseConvertor";
		gbox1.Create(WS_EX_TRANSPARENT, L"Entrada", WS_CHILD | WS_VISIBLE | BS_GROUPBOX, 22, 22, 178, 111, hWnd, 1000);
		lb1.Create(NULL, L"Base:", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 29, 45, 65, 25, hWnd, 1001);
		lb2.Create(NULL, L"Número", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 29, 82, 64, 25, hWnd, 1002);
		tbxBase.Create(WS_EX_CLIENTEDGE, L"10", WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_READONLY | ES_LEFT | ES_WINNORMALCASE, 105, 45, 79, 25, hWnd, 1003);
		tbxEntrada.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 104, 81, 79, 25, hWnd, 1004);
		gbox2.Create(WS_EX_TRANSPARENT, NULL, WS_CHILD | WS_VISIBLE | BS_GROUPBOX, 287, 24, 178, 110, hWnd, 1005);
		lb3.Create(NULL, L"Base:", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 297, 42, 65, 25, hWnd, 1006);
		tbxBaseC.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 373, 43, 84, 25, hWnd, 1007);
		lb4.Create(NULL, L"Número", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 298, 82, 64, 25, hWnd, 1008);
		tbxConvert.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_READONLY | ES_LEFT | ES_WINNORMALCASE, 373, 81, 85, 25, hWnd, 1009);
		btConvertir.Create(NULL, L"Convertir", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 210, 62, 69, 28, hWnd, 1010);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		gbox1.Font = fontArial014A;
		lb1.Font = fontArial014A;
		lb2.Font = fontArial014A;
		tbxBase.Font = fontArial014A;
		tbxEntrada.Font = fontArial014A;
		gbox2.Font = fontArial014A;
		lb3.Font = fontArial014A;
		tbxBaseC.Font = fontArial014A;
		lb4.Font = fontArial014A;
		tbxConvert.Font = fontArial014A;
		btConvertir.Font = fontArial014A;
	}
	//_________________________________________________
	void btConvertir_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btConvertir.IsEvent(e, BN_CLICKED)) { btConvertir_Click(e); return true; }
		return false;
	}
};
