#include "DxLib.h"

int WINAPI WinMain(HINSTANCE,HINSTANCE,LPSTR,int){
        ChangeWindowMode(TRUE), DxLib_Init(), SetDrawScreen( DX_SCREEN_BACK ); //�E�B���h�E���[�h�ύX�Ə������Ɨ���ʐݒ�

        int x = 0;
        int Handle;     // �摜�i�[�p�n���h��
        Handle = LoadGraph( "�摜/�L�����N�^01.png" ); // �摜�̃��[�h

        // while( ����ʂ�\��ʂɔ��f, ���b�Z�[�W����, ��ʃN���A )
        while( ScreenFlip()==0 && ProcessMessage()==0 && ClearDrawScreen()==0 ){

                DrawPixel( 320+x , 240 , GetColor( 255,255,255 ) ) ;	// �_��ł�
                x++; // x��1���₷

        }
        
        DxLib_End(); // DX���C�u�����I������
        return 0;
}  