//━━━━━━━━━━━━━━━━━━━━━━━
// ファイル名　　：Turret.h
// 概要　　　　　：タレットのクラス
// 作成者　　　　：20CU0314 ゴコケン
// 更新内容　　　：2021/11/17 作成
//━━━━━━━━━━━━━━━━━━━━━━━
#pragma once
#include "Component.h"

class Bullet;

class Turret : public Component
{
	typedef Component Super;
public:
	Turret(GameInfo* _pGameInfo, XMFLOAT2 _pos = {0.f, 0.f}, XMFLOAT2 _relativePos = { 0.f, 0.f });
	~Turret();

	void renderSprite();						// 画像を描画する
	void InputProcess();						// プレイヤーの入力処理
	vector<shared_ptr<Bullet>>* GetBullet();	// 弾の配列のアドレスを取得する

private:
	vector<shared_ptr<Bullet>> m_pBullet;		// 弾の配列
	float m_angle;								// タレットの角度
	float m_rotationRange[2];					// タレットが回転できる範囲
};