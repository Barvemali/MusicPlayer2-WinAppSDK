#pragma once
//�Զ�������ļ�
#include <conio.h >
#include <vector>
#include <io.h>
#include <string>
//#include <Windows.h>
#include <fstream>
#include <iostream>
#include <algorithm>
#include <tuple>
#include <deque>
#include <algorithm>
#include <iomanip>
#include <map>
#include <cmath>
#include <unordered_map>
using std::ofstream;
using std::ifstream;
using std::string;
using std::wstring;
using std::vector;
using std::deque;
using std::map;

//����BASS��Ƶ���֧��
#include"bass.h"
//#ifdef _M_X64
//#pragma comment(lib,"bass_x64.lib")
//#else
//#pragma comment(lib,"bass.lib")
//#endif

//�����ҪΪWindows XP���룬��ȥ������һ�д����ע��
//#define COMPILE_IN_WIN_XP

#ifndef COMPILE_IN_WIN_XP
//���ڻ�ȡϵͳ������ɫ
#pragma comment(lib,"Dwmapi.lib")
#endif

#include <afxinet.h>	//����֧��ʹ��������ص���

//�Զ���ĺ�

#ifdef UNICODE
using _tstring = std::wstring;
#else
using _tstring = std::string;
#endif // !UNICODE

//CPlayer�����õ��ĳ���
#define NEXT (-999)		//���塰��һ��������
#define PREVIOUS (-998)		//���塰��һ��������

#define MAX_NUM_LENGTH 5000		//�����ȡ��Ƶ�ļ���Ϣ���������ֵ
#define MAX_SONG_NUM 9999		//�����б����ļ����������ֵ

#define VERSION L"2.66"	//����汾
#define COMPILE_DATE L"2019/08/03"

//������ͼ��ť
#define IDT_PLAY_PAUSE 1321		//����������ͼ������/��ͣ����ť��ID
#define IDT_PREVIOUS 1322		//����������ͼ����һ������ť��ID
#define IDT_NEXT 1323			//����������ͼ����һ������ť��ID


//��ʱ��
#define TIMER_ID 1234			//���嶨ʱ����ID
#define TIMER_ELAPSE 80		//���嶨ʱ����Ӧ��ʱ���������룩
#define TIMER_ID_MINI 1235		//����ģʽ�еĶ�ʱ��ID
#define TIMER_ID_MINI2 1236		//����ģʽ�еĶ�ʱ��ID��������ʾƵ�׷���
#define TIMER_ELAPSE_MINI 200	//��������ģʽ�еĶ�ʱ����Ӧ��ʱ���������룩
#define TIMER_1_SEC 1237
#define TIMER_DESKTOP_LYRIC 1238
#define TIMER_DESKTOP_LYRIC_2 1239

//#define TIMER_ID_SPECTRAL
//#define TIMER_ID_EXIT 1237

//Ƶ�׷���
#define FFT_SAMPLE 128			//Ƶ�׷�����������
//#define FFT_NUM 128			//Ҫʹ�õ�Ƶ�׵ĵ���
#define SPECTRUM_ROW 64			//Ƶ�׷������ε�����������Ϊ2�������η���С�ڻ����FFT_SAMPLE��

#define IDC_SAVE_COMBO_BOX 1990		//�������ӵ�������Ϊ���Ի����е���Ͽ��ID
#define IDC_OPEN_CHECKBOX 1991		//�������ӵ��������ļ��С��Ի����еĸ�ѡ���ID

//���ӵ�ϵͳ�˵��еġ�����ģʽ���˵����ID
#define IDM_MINIMODE 112

//������
#define EQU_CH_NUM 10		//������ͨ��������
const int EQU_STYLE_TABLE[9][EQU_CH_NUM]		//������Ԥ��
{
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },			//��
    { 4, 3, 3, 2, 2, 1, 0, -1, -2, -2 },		//�ŵ�
    { 3, 2, 0, -1, -2, -2, -1, 0, 2, 3 },		//����
    { 2, 1, 0, -1, -1, 1, 3, 5, 3 },		//��ʿ
    { -2, 0, 2, 4, -1, -1, 0, 0, 2, 3 },		//ҡ��
    { 1, 0, 0, 1, 2, 1, -1, -2, -2, -2 },		//���
    { 4, 6, 6, -2, -1, 0, 0, 0, 0, 0 },		//�ص���
    { -5, -5, -3, -2, -2, 0, 0, 0, 0, 0 },		//��������
    { 0, 0, 0, 0, 0, -1, -3, -5, -5, -4 }		//��������
};

#define GRAY(x) RGB(x,x,x)

#define ALBUM_COVER_NAME L"CurrentAlbumCover-MusicPlayer2-jMZB7TMf"
//#define DEFAULT_ALBUM_NAME L"cover"

//#define BACKGROUND_ALPHA 200	//���汳����͸����0~255
#define ALPHA_CHG(alpha) ((alpha)*255/100)		//��͸���ȴ�0~100ӳ�䵽0~255

#define LOCAL_DIR_STR L"%localdir%"
#define DEFAULT_PLAYLIST_NAME L"default_playlist.playlist"
#define FAVOURITE_PLAYLIST_NAME L"favourite.playlist"
#define PLAYLIST_EXTENSION L".playlist"
#define APP_NAME L"MusicPlayer2"

#define WM_OPEN_FILE_COMMAND_LINE (WM_USER+110)		//ͨ�������д��ļ�ʱ������ʵ�����ڷ��͵���Ϣ
#define MY_WM_NOTIFYICON (WM_USER+115)
#define WM_PLAY_SELECTED_BTN_ENABLE (WM_USER+120)
#define WM_SET_MENU_STATE (WM_USER+122)
#define WM_COLOR_SELECTED (WM_USER+123)

#define WM_NEXT_USER_MSG (WM_USER+124)

#define ADD_TO_PLAYLIST_MAX_SIZE 20         //�����ӵ������б����Ӳ˵�����Ŀ��������������ܳ���40��