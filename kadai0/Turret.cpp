//����������������������������������������������
// �t�@�C�����@�@�FTurret.cpp
// �T�v�@�@�@�@�@�F�^���b�g�̃N���X
// �쐬�ҁ@�@�@�@�F20CU0314 �S�R�P��
// �X�V���e�@�@�@�F2021/11/17 �쐬
//����������������������������������������������
#include "Turret.h"
#include "Define.h"
#include "GameResource.h"

//����������������������������������������������
// �R���X�g���N�^
// �����P�F�Q�[���̏��
// �����Q�F�^���b�g�̏������W
// �����R�F�^���b�g�̍��W�Ɛ����͂̍��W�̍�
//����������������������������������������������
Turret::Turret(GameInfo* _pGameInfo, XMFLOAT2 _pos, XMFLOAT2 _relativePos)
	: Super(_pGameInfo, _relativePos)
{
	m_pImg = CreateSprite(Tex_Turret, TURRET_SIZE_X, TURRET_SIZE_Y);
	m_pImg->setPos(_pos);
}

//����������������������������������������������
// �f�X�g���N�^
//����������������������������������������������
Turret::~Turret()
{
}

//����������������������������������������������
// �摜��`�悷��
//����������������������������������������������
void Turret::renderSprite()
{
	RenderSprite(m_pImg);
}

//����������������������������������������������
// �v���C���[�̓��͏���
//����������������������������������������������
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

//����������������������������������������������
// �e�̔z��̃A�h���X���擾����
//����������������������������������������������
vector<shared_ptr<Bullet>>* Turret::GetBullet()
{
	return &m_pBullet;
}