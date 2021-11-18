//━━━━━━━━━━━━━━━━━━━━━━━
// ファイル名　　：Submarine.cpp
// 概要　　　　　：潜水艦のクラス
// 作成者　　　　：20CU0314 ゴコケン
// 更新内容　　　：2021/11/17 作成
//━━━━━━━━━━━━━━━━━━━━━━━
#include "Submarine.h"
#include "GameResource.h"
#include "Turret.h"

//━━━━━━━━━━━━━━━━━━━━━━━
// コンストラクタ
// 引数１：ゲームの情報
//━━━━━━━━━━━━━━━━━━━━━━━
Submarine::Submarine(GameInfo* _pGameInfo)
	: Super(_pGameInfo)
{
	m_pImg = CreateSprite(Tex_Submarine, 512.f, 512.f);
	m_pImg->setPos(m_pos);

	// プレイヤーオブジェクトの作成
	/*m_pPlayer[0] = shared_ptr<Player>(new Player());
	m_pPlayer[1] = shared_ptr<Player>(new Player());*/

	// 部品オブジェクトのの作成
	m_pComponent[0] = shared_ptr<Component>(new Turret(m_pGameInfo));
	m_pComponent[1] = shared_ptr<Component>(new Turret(m_pGameInfo));
	m_pComponent[2] = shared_ptr<Component>(new Turret(m_pGameInfo));
	m_pComponent[3] = shared_ptr<Component>(new Turret(m_pGameInfo));
	/*m_pComponent[4] = shared_ptr<Component>(new JetEngine());
	m_pComponent[5] = shared_ptr<Component>(new Barrier());*/

	// 弾の配列のアドレス保存しておく
	for (int i = 0; i < 4; ++i)
	{
		m_pBullet[i] = ((Turret*)(m_pComponent[i].get()))->GetBullet();
	}

	// 操作装置オブジェクトの作成
	/*for (int i = 0; i < NUM_OF_OPERATION_DEVICE; ++i)
	{
		m_pOperationDevice[i] = shared_ptr<OperationDevice>(new OperationDevice());
		m_pOperationDevice[i]->SetComponent(m_pComponent[i]);
	}*/
	
}

//━━━━━━━━━━━━━━━━━━━━━━━
// デストラクタ
//━━━━━━━━━━━━━━━━━━━━━━━
Submarine::~Submarine()
{
	DisposeSprite(m_pImg);
}

//━━━━━━━━━━━━━━━━━━━━━━━
// 毎フレームにやる処理
//━━━━━━━━━━━━━━━━━━━━━━━
void Submarine::Tick(float _deltaTime)
{

}

//━━━━━━━━━━━━━━━━━━━━━━━
// 画像を描画する
//━━━━━━━━━━━━━━━━━━━━━━━
void Submarine::RenderProcess()
{
	RenderSprite(m_pImg);
	for (int i = 0; i < NUM_OF_COMPONENT; ++i)
	{
		m_pComponent[i]->renderSprite();
	}
}

//━━━━━━━━━━━━━━━━━━━━━━━
// 当たり判定
//━━━━━━━━━━━━━━━━━━━━━━━
void Submarine::CollisionProcess(
	vector < shared_ptr < Enemy> >* _pEnemy,
	vector < shared_ptr < SceneryObject > >* _pSceneryObject,
	vector < shared_ptr < Bullet > >** _pBullet,
	vector < shared_ptr < Item > >* _pItem)
{
}

//━━━━━━━━━━━━━━━━━━━━━━━
// 潜水艦全体の移動
//━━━━━━━━━━━━━━━━━━━━━━━
void Submarine::MoveProcess(float _moveDirection)
{
	// テスト用
	if (GetInput()->isKeyPressed(DIK_UPARROW))
	{
		m_pos.y += SUBMARINE_MOVE_SPEED;
	}
	else if (GetInput()->isKeyPressed(DIK_DOWNARROW))
	{
		m_pos.y -= SUBMARINE_MOVE_SPEED;
	}
	else if (GetInput()->isKeyPressed(DIK_LEFTARROW))
	{
		m_pos.x -= SUBMARINE_MOVE_SPEED;
	}
	else if (GetInput()->isKeyPressed(DIK_RIGHTARROW))
	{
		m_pos.x += SUBMARINE_MOVE_SPEED;
	}

	// 潜水艦の位置を設置する
	m_pImg->setPos(m_pos);

	for (int i = 0; i < NUM_OF_COMPONENT; ++i)
	{
		m_pComponent[i]->SetPos(m_pos);
	}
}

//━━━━━━━━━━━━━━━━━━━━━━━
// アイテムを取得した後の処理
//━━━━━━━━━━━━━━━━━━━━━━━
void Submarine::GetItem(int _itemType)
{
}