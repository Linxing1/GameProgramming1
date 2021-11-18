//━━━━━━━━━━━━━━━━━━━━━━━
// ファイル名　　：Turret.cpp
// 概要　　　　　：タレットのクラス
// 作成者　　　　：20CU0314 ゴコケン
// 更新内容　　　：2021/11/17 作成
//━━━━━━━━━━━━━━━━━━━━━━━
#include "Turret.h"
#include "Define.h"
#include "GameResource.h"

//━━━━━━━━━━━━━━━━━━━━━━━
// コンストラクタ
// 引数１：ゲームの情報
// 引数２：タレットの初期座標
// 引数３：タレットの座標と潜水艦の座標の差
//━━━━━━━━━━━━━━━━━━━━━━━
Turret::Turret(GameInfo* _pGameInfo, XMFLOAT2 _pos, XMFLOAT2 _relativePos)
	: Super(_pGameInfo, _relativePos)
{
	m_pImg = CreateSprite(Tex_Turret, TURRET_SIZE_X, TURRET_SIZE_Y);
	m_pImg->setPos(_pos);
}

//━━━━━━━━━━━━━━━━━━━━━━━
// デストラクタ
//━━━━━━━━━━━━━━━━━━━━━━━
Turret::~Turret()
{
}

//━━━━━━━━━━━━━━━━━━━━━━━
// 画像を描画する
//━━━━━━━━━━━━━━━━━━━━━━━
void Turret::renderSprite()
{
	RenderSprite(m_pImg);
}

//━━━━━━━━━━━━━━━━━━━━━━━
// プレイヤーの入力処理
//━━━━━━━━━━━━━━━━━━━━━━━
void Turret::InputProcess()
{
	if (GetInput()->isKeyPressed(DIK_LEFTARROW))
	{
		if ((m_angle -= TURRET_ROTATION_SPEED) < m_rotationRange[0])
		{
			m_angle = m_rotationRange[0];
		}
		m_pImg->setAngleZ(m_angle);
	}
	else if (GetInput()->isKeyPressed(DIK_RIGHTARROW))
	{
		if ((m_angle += TURRET_ROTATION_SPEED) > m_rotationRange[1])
		{
			m_angle = m_rotationRange[1];
		}
		m_pImg->setAngleZ(m_angle);
	}

	if (GetInput()->isKeyPressed(DIK_SPACE))
	{
		/*for (unsigned int i = 0; i < m_pBullet.size(); ++i)
		{
			if (m_pBullet[i]->GetActive())
			{
				if (i == m_pBullet.size() - 1)
				{
					m_pBullet.push_back(shared_ptr<Bullet>(new Bullet()));
				}
				continue;
			}
			else
			{
				m_pBullet[i]->SetActive(true);
				m_pBullet[i]->SetPos();
				m_pBullet[i]->SetAngle();
				break;
			}
		}*/
	}
}

//━━━━━━━━━━━━━━━━━━━━━━━
// 弾の配列のアドレスを取得する
//━━━━━━━━━━━━━━━━━━━━━━━
vector<shared_ptr<Bullet>>* Turret::GetBullet()
{
	return &m_pBullet;
}