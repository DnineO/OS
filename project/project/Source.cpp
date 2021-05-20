/************************************************************************
                          ������������ ������ N1

                                ������ 1.

                              HELLOWIN1.CPP

          ���������� (��� �� ��������������) ���������� Windows

************************************************************************/
#include <windows.h>    // ���������� �������� ������� API, ����������� �����
#include <tchar.h> 
// Windows � �.�.

/* ������ ���������� ���������� �������� ������ WinMain(), ������� ���������
   �� ������������, � ��������� ������ �� ����.
   ������ ���������� ����������� � ������ ����������� ������� API MessageBox(),
   ������� ������� ���� ��������� � ���������� � �������� ���������� ��������
   � ������� ���������. ����� WinMain() �����������, ��������� �� ������ ��-
   ������� ���������� ������� MessageBox().
*/

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    return MessageBox(NULL, _T("Hello, Windows!"), _T("First Windows Program"), MB_OK); 
    // _T  - ������ WinAPI , ������� ��������� ������� ����������� �������
}