#include "DxLib.h"

int WINAPI WinMain(HINSTANCE,HINSTANCE,LPSTR,int){
        ChangeWindowMode(TRUE), DxLib_Init(), SetDrawScreen( DX_SCREEN_BACK ); //ウィンドウモード変更と初期化と裏画面設定

        int x = 0;
        int Handle;     // 画像格納用ハンドル
        Handle = LoadGraph( "画像/キャラクタ01.png" ); // 画像のロード

        // while( 裏画面を表画面に反映, メッセージ処理, 画面クリア )
        while( ScreenFlip()==0 && ProcessMessage()==0 && ClearDrawScreen()==0 ){

                DrawPixel( 320+x , 240 , GetColor( 255,255,255 ) ) ;	// 点を打つ
                x++; // xを1増やす

        }
        
        DxLib_End(); // DXライブラリ終了処理
        return 0;
}  