//����������������������������������������������
// �t�@�C�����@�@�FSubmarine.h
// �T�v�@�@�@�@�@�F�����͂̃N���X
// �쐬�ҁ@�@�@�@�F20CU0314 �S�R�P��
// �X�V���e�@�@�@�F2021/11/17 �쐬
//����������������������������������������������
#pragma once
#include <vector>
#include <memory>
#include "Define.h"
#include "CObjectBase.h"

class Enemy;
class SceneryObject;
class Bullet;
class Item;
class Player;
class OperationDevice;
class Component;
class MapDevice;
class UI;

class Submarine : public CObjectBase
{
	typedef CObjectBase Super;
public:
	Submarine(GameInfo* _pGameInfo);
	~Submarine();

	// ���t���[���ɂ�鏈��
	void Tick(float _deltaTime);

	// �摜��`�悷��
	void RenderProcess();

	// �����蔻��
	void CollisionProcess(
		vector < shared_ptr < Enemy> >*				_pEnemy,
		vector < shared_ptr < SceneryObject > >*	_pSceneryObject,
		vector < shared_ptr < Bullet > >**			_pBullet,
		vector < shared_ptr < Item > >*				_pItem);
		
	// �����͑S�̂̈ړ�
	void MoveProcess(float _moveDirection);

	// �A�C�e�����擾������̏���
	void GetItem(int _itemType);

private:
	CPicture*					m_pImg;
	XMFLOAT2					m_pos;
	shared_ptr<Player>			m_pPlayer[2];
	shared_ptr<OperationDevice> m_pOperationDevice[NUM_OF_OPERATION_DEVICE];
	shared_ptr<Component>		m_pComponent[NUM_OF_COMPONENT];
	//shared_ptr<MapDevice>		m_pMapDevice;
	vector<shared_ptr<Bullet>>* m_pBullet[4];
	//shared_ptr<UI>				m_pUI;
};