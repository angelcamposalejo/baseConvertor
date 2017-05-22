#include "stdafx.h"  //________________________________________ BaseConvertor.cpp
#include "BaseConvertor.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	BaseConvertor app;
	return app.BeginDialog(IDI_BaseConvertor, hInstance);
}

void BaseConvertor::Window_Open(Win::Event& e)
{

}

void BaseConvertor::btConvertir_Click(Win::Event& e)
{
	const int entrada = tbxEntrada.IntValue;
	const int base = tbxBaseC.IntValue;
	tbxConvert.Text = convert(entrada, base);
}
wstring BaseConvertor::convert(int entrada, int base)
{
	int digito;
	wstring salida=L"";
	while (entrada!= 0)
	{
		digito = entrada % base;
		entrada = entrada / base;
		Sys::Format(salida, L"%d", digito);
		tbxConvert.Text += salida;
	}
	salida = tbxConvert.Text;
	std::reverse(salida.begin(), salida.end());
	return salida;
}

