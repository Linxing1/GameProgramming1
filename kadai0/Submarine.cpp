//����������������������������������������������
// �t�@�C�����@�@�FSubmarine.cpp
// �T�v�@�@�@�@�@�F�����͂̃N���X
// �쐬�ҁ@�@�@�@�F20CU0314 �S�R�P��
// �X�V���e�@�@�@�F2021/11/17 �쐬
//����������������������������������������������
#include "Submarine.h"
#include "GameResource.h"
#include "Turret.h"

//����������������������������������������������
// �R���X�g���N�^
// �����P�F�Q�[���̏��
//����������������������������������������������
Submarine::Submarine(GameInfo* _pGameInfo)
	: Super(_pGameInfo)
{
	m_pImg = CreateSprite(Tex_Submarine, 512.f, 512.f);
	m_pImg->setPos(m_pos);

	// �v���C���[�I�u�W�F�N�g�̍쐬
	/*m_pPlayer[0] = shared_ptr<Player>(new Player());
	m_pPlayer[1] = shared_ptr<Player>(new Player());*/

	// ���i�I�u�W�F�N�g�̂̍쐬
	m_pComponent[0] = shared_ptr<Component>(new Turret(m_pGameInfo));
	m_pComponent[1] = shared_ptr<Component>(new Turret(m_pGameInfo));
	m_pComponent[2] = shared_ptr<Component>(new Turret(m_pGameInfo));
	m_pComponent[3] = shared_ptr<Component>(new Turret(m_pGameInfo));
	/*m_pComponent[4] = shared_ptr<Component>(new JetEngine());
	m_pComponent[5] = shared_ptr<Component>(new Barrier());*/

	// �e�̔z��̃A�h���X�ۑ����Ă���
	for (int i = 0; i < 4; ++i)
	{
		m_pBullet[i] = ((Turret*)(m_pComponent[i].get()))->GetBullet();
	}

	// ���쑕�u�I�u�W�F�N�g�̍쐬
	/*for (int i = 0; i < NUM_OF_OPERATION_DEVICE; ++i)
	{
		m_pOperationDevice[i] = shared_ptr<OperationDevice>(new OperationDevice());
		m_pOperationDevice[i]->SetComponent(m_pComponent[i]);
	}*/
	
}

//����������������������������������������������
// �f�X�g���N�^
//����������������������������������������������
Submarine::~Submarine()
{
	DisposeSprite(m_pImg);
}

//����������������������������������������������
// ���t���[���ɂ�鏈��
//����������������������������������������������
void Submarine::Tick(float _deltaTime)
{

}

//����������������������������������������������
// �摜��`�悷��
//����������������������������������������������
void Submarine::RenderProcess()
{
	RenderSprite(m_pImg);
	for (int i = 0; i < NUM_OF_COMPONENT; ++i)
	{
		m_pComponent[i]->renderSprite();
	}
}

//����������������������������������������������
// �����蔻��
//����������������������������������������������
void Submarine::CollisionProcess(
	vector < shared_ptr < Enemy> >* _pEnemy,
	vector < shared_ptr < SceneryObject > >* _pSceneryObject,
	vector < shared_ptr < Bullet > >** _pBullet,
	vector < shared_ptr < Item > >* _pItem)
{
}

//����������������������������������������������
// �����͑S�̂̈ړ�
//����������������������������������������������
void Submarine::MoveProcess(float _moveDirection)
{
	// �e�X�g�p
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

	// �����͂̈ʒu��ݒu����
	m_pImg->setPos(m_pos);

	for (int i = 0; i < NUM_OF_COMPONENT; ++i)
	{
		m_pComponent[i]->SetPos(m_pos);
	}
}

//����������������������������������������������
// �A�C�e�����擾������̏���
//����������������������������������������������
void Submarine::GetItem(int _itemType)
{
}