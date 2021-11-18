/**
 * �����ł��ꂼ��̉摜��UV���W���w�肷��
 */
#pragma once

#include "stdafx.h"
#include "Common3DType.h"

//��������������������������������������������������������������������������������������������
// �T���v��
//��������������������������������������������������������������������������������������������
// const std::vector <QuadrangleTexel>   kTexelSamples = {
// 	//	����					����					�E��					�E��
// 	{ { 0.0f / 4.0f, 1.0f }, { 0.0f / 4.0f, 0.0f }, { 1.0f / 4.0f, 1.0f }, { 1.0f / 4.0f, 0.0f } },
// };
//��������������������������������������������������������������������������������������������

const std::vector <QuadrangleTexel>  singleTexels =
{
	{ { 0.f, 1.f },{ 0.f, 0.f },{ 1.f, 1.f },{ 1.f, 0.f } }	//!< �w�肷��UV���W�̔z�񂪈�̔z��
};

const std::vector <QuadrangleTexel>  kTexelText =
{
	// ����
	{ { 0.0f       , 5.0f / 6.0f },{ 0.0f       , 4.0f / 6.0f },{ 1.0f / 7.0f, 5.0f / 6.0f },{ 1.0f / 7.0f, 4.0f / 6.0f } },	//!< �@�O�[���O
	{ { 1.0f / 7.0f, 5.0f / 6.0f },{ 1.0f / 7.0f, 4.0f / 6.0f },{ 2.0f / 7.0f, 5.0f / 6.0f },{ 2.0f / 7.0f, 4.0f / 6.0f } },	//!< �@�P�[���P
	{ { 2.0f / 7.0f, 5.0f / 6.0f },{ 2.0f / 7.0f, 4.0f / 6.0f },{ 3.0f / 7.0f, 5.0f / 6.0f },{ 3.0f / 7.0f, 4.0f / 6.0f } },	//!< �@�Q�[���Q
	{ { 3.0f / 7.0f, 5.0f / 6.0f },{ 3.0f / 7.0f, 4.0f / 6.0f },{ 4.0f / 7.0f, 5.0f / 6.0f },{ 4.0f / 7.0f, 4.0f / 6.0f } },	//!< �@�R�[���R
	{ { 4.0f / 7.0f, 5.0f / 6.0f },{ 4.0f / 7.0f, 4.0f / 6.0f },{ 5.0f / 7.0f, 5.0f / 6.0f },{ 5.0f / 7.0f, 4.0f / 6.0f } },	//!< �@�S�|���S

	{ { 0.0f       , 1.0f        },{ 0.0f       , 5.0f / 6.0f },{ 1.0f / 7.0f, 1.0f        },{ 1.0f / 7.0f, 5.0f / 6.0f } },	//!< �@�T�[���T
	{ { 1.0f / 7.0f, 1.0f        },{ 1.0f / 7.0f, 5.0f / 6.0f },{ 2.0f / 7.0f, 1.0f        },{ 2.0f / 7.0f, 5.0f / 6.0f } },	//!< �@�U�[���U
	{ { 2.0f / 7.0f, 1.0f        },{ 2.0f / 7.0f, 5.0f / 6.0f },{ 3.0f / 7.0f, 1.0f        },{ 3.0f / 7.0f, 5.0f / 6.0f } },	//!< �@�V�[���V
	{ { 3.0f / 7.0f, 1.0f        },{ 3.0f / 7.0f, 5.0f / 6.0f },{ 4.0f / 7.0f, 1.0f        },{ 4.0f / 7.0f, 5.0f / 6.0f } },	//!< �@�W�[���W
	{ { 4.0f / 7.0f, 1.0f        },{ 4.0f / 7.0f, 5.0f / 6.0f },{ 5.0f / 7.0f, 1.0f        },{ 5.0f / 7.0f, 5.0f / 6.0f } },	//!< �@�X�|���X

	// �A���t�@�x�b�g
	{ { 0.0f       , 1.0f / 6.0f },{ 0.0f       , 0.0f },{ 1.0f / 7.0f, 1.0f / 6.0f },{ 1.0f / 7.0f, 0.0f } },					//!< �P�O�[��A
	{ { 1.0f / 7.0f, 1.0f / 6.0f },{ 1.0f / 7.0f, 0.0f },{ 2.0f / 7.0f, 1.0f / 6.0f },{ 2.0f / 7.0f, 0.0f } },					//!< �P�P�[��B
	{ { 2.0f / 7.0f, 1.0f / 6.0f },{ 2.0f / 7.0f, 0.0f },{ 3.0f / 7.0f, 1.0f / 6.0f },{ 3.0f / 7.0f, 0.0f } },					//!< �P�Q�[��C
	{ { 3.0f / 7.0f, 1.0f / 6.0f },{ 3.0f / 7.0f, 0.0f },{ 4.0f / 7.0f, 1.0f / 6.0f },{ 4.0f / 7.0f, 0.0f } },					//!< �P�R�[��D
	{ { 4.0f / 7.0f, 1.0f / 6.0f },{ 4.0f / 7.0f, 0.0f },{ 5.0f / 7.0f, 1.0f / 6.0f },{ 5.0f / 7.0f, 0.0f } },					//!< �P�S�|��E
	{ { 5.0f / 7.0f, 1.0f / 6.0f },{ 5.0f / 7.0f, 0.0f },{ 6.0f / 7.0f, 1.0f / 6.0f },{ 6.0f / 7.0f, 0.0f } },					//!< �P�T�|��F
	{ { 6.0f / 7.0f, 1.0f / 6.0f },{ 6.0f / 7.0f, 0.0f },{ 1.0f       , 1.0f / 6.0f },{ 1.0f       , 0.0f } },					//!< �P�U�|��G
							
	{ { 0.0f       , 2.0f / 6.0f },{ 0.0f       , 1.0f / 6.0f },{ 1.0f / 7.0f, 2.0f / 6.0f },{ 1.0f / 7.0f, 1.0f / 6.0f } },	//!< �P�V�[��H
	{ { 1.0f / 7.0f, 2.0f / 6.0f },{ 1.0f / 7.0f, 1.0f / 6.0f },{ 2.0f / 7.0f, 2.0f / 6.0f },{ 2.0f / 7.0f, 1.0f / 6.0f } },	//!< �P�W�[��I
	{ { 2.0f / 7.0f, 2.0f / 6.0f },{ 2.0f / 7.0f, 1.0f / 6.0f },{ 3.0f / 7.0f, 2.0f / 6.0f },{ 3.0f / 7.0f, 1.0f / 6.0f } },	//!< �P�X�[��J
	{ { 3.0f / 7.0f, 2.0f / 6.0f },{ 3.0f / 7.0f, 1.0f / 6.0f },{ 4.0f / 7.0f, 2.0f / 6.0f },{ 4.0f / 7.0f, 1.0f / 6.0f } },	//!< �Q�O�[��K
	{ { 4.0f / 7.0f, 2.0f / 6.0f },{ 4.0f / 7.0f, 1.0f / 6.0f },{ 5.0f / 7.0f, 2.0f / 6.0f },{ 5.0f / 7.0f, 1.0f / 6.0f } },	//!< �Q�P�|��L
	{ { 5.0f / 7.0f, 2.0f / 6.0f },{ 5.0f / 7.0f, 1.0f / 6.0f },{ 6.0f / 7.0f, 2.0f / 6.0f },{ 6.0f / 7.0f, 1.0f / 6.0f } },	//!< �Q�Q�|��M
	{ { 6.0f / 7.0f, 2.0f / 6.0f },{ 6.0f / 7.0f, 1.0f / 6.0f },{ 1.0f       , 2.0f / 6.0f },{ 1.0f       , 1.0f / 6.0f } },	//!< �Q�R�|��N
														 							  
	{ { 0.0f       , 3.0f / 6.0f },{ 0.0f       , 2.0f / 6.0f },{ 1.0f / 7.0f, 3.0f / 6.0f },{ 1.0f / 7.0f, 2.0f / 6.0f } },	//!< �Q�S�[��O
	{ { 1.0f / 7.0f, 3.0f / 6.0f },{ 1.0f / 7.0f, 2.0f / 6.0f },{ 2.0f / 7.0f, 3.0f / 6.0f },{ 2.0f / 7.0f, 2.0f / 6.0f } },	//!< �Q�T�[��P
	{ { 2.0f / 7.0f, 3.0f / 6.0f },{ 2.0f / 7.0f, 2.0f / 6.0f },{ 3.0f / 7.0f, 3.0f / 6.0f },{ 3.0f / 7.0f, 2.0f / 6.0f } },	//!< �Q�U�[��Q
	{ { 3.0f / 7.0f, 3.0f / 6.0f },{ 3.0f / 7.0f, 2.0f / 6.0f },{ 4.0f / 7.0f, 3.0f / 6.0f },{ 4.0f / 7.0f, 2.0f / 6.0f } },	//!< �Q�V�[��R
	{ { 4.0f / 7.0f, 3.0f / 6.0f },{ 4.0f / 7.0f, 2.0f / 6.0f },{ 5.0f / 7.0f, 3.0f / 6.0f },{ 5.0f / 7.0f, 2.0f / 6.0f } },	//!< �Q�W�|��S
	{ { 5.0f / 7.0f, 3.0f / 6.0f },{ 5.0f / 7.0f, 2.0f / 6.0f },{ 6.0f / 7.0f, 3.0f / 6.0f },{ 6.0f / 7.0f, 2.0f / 6.0f } },	//!< �Q�X�|��T
	{ { 6.0f / 7.0f, 3.0f / 6.0f },{ 6.0f / 7.0f, 2.0f / 6.0f },{ 1.0f       , 3.0f / 6.0f },{ 1.0f       , 2.0f / 6.0f } },	//!< �R�O�|��U
														 							  
	{ { 0.0f       , 4.0f / 6.0f },{ 0.0f       , 3.0f / 6.0f },{ 1.0f / 7.0f, 4.0f / 6.0f },{ 1.0f / 7.0f, 3.0f / 6.0f } },	//!< �R�P�[��V
	{ { 1.0f / 7.0f, 4.0f / 6.0f },{ 1.0f / 7.0f, 3.0f / 6.0f },{ 2.0f / 7.0f, 4.0f / 6.0f },{ 2.0f / 7.0f, 3.0f / 6.0f } },	//!< �R�Q�[��W
	{ { 2.0f / 7.0f, 4.0f / 6.0f },{ 2.0f / 7.0f, 3.0f / 6.0f },{ 3.0f / 7.0f, 4.0f / 6.0f },{ 3.0f / 7.0f, 3.0f / 6.0f } },	//!< �R�R�[��X
	{ { 3.0f / 7.0f, 4.0f / 6.0f },{ 3.0f / 7.0f, 3.0f / 6.0f },{ 4.0f / 7.0f, 4.0f / 6.0f },{ 4.0f / 7.0f, 3.0f / 6.0f } },	//!< �R�S�[��Y
	{ { 4.0f / 7.0f, 4.0f / 6.0f },{ 4.0f / 7.0f, 3.0f / 6.0f },{ 5.0f / 7.0f, 4.0f / 6.0f },{ 5.0f / 7.0f, 3.0f / 6.0f } },	//!< �R�T�|��Z

	// ����
	{ { 5.0f / 7.0f, 4.0f / 6.0f },{ 5.0f / 7.0f, 3.0f / 6.0f },{ 6.0f / 7.0f, 4.0f / 6.0f },{ 6.0f / 7.0f, 3.0f / 6.0f } },	//!< �R�U�[��"
	{ { 6.0f / 7.0f, 4.0f / 6.0f },{ 6.0f / 7.0f, 3.0f / 6.0f },{ 1.0f       , 4.0f / 6.0f },{ 1.0f       , 3.0f / 6.0f } },	//!< �R�V�[��,
	{ { 5.0f / 7.0f, 5.0f / 6.0f },{ 5.0f / 7.0f, 4.0f / 6.0f },{ 6.0f / 7.0f, 5.0f / 6.0f },{ 6.0f / 7.0f, 4.0f / 6.0f } },	//!< �R�W�[��.
	{ { 6.0f / 7.0f, 5.0f / 6.0f },{ 6.0f / 7.0f, 4.0f / 6.0f },{ 1.0f       , 5.0f / 6.0f },{ 1.0f       , 4.0f / 6.0f } },	//!< �R�X�[�����C
	{ { 5.0f / 7.0f, 1.0f        },{ 5.0f / 7.0f, 5.0f / 6.0f },{ 6.0f / 7.0f, 1.0f        },{ 6.0f / 7.0f, 5.0f / 6.0f } },	//!< �S�O�[���[�i�n�C�t���j
	{ { 6.0f / 7.0f, 1.0f        },{ 6.0f / 7.0f, 5.0f / 6.0f },{ 1.0f       , 1.0f        },{ 1.0f       , 5.0f / 6.0f } },	//!< �S�P�[���I
};

const std::vector <QuadrangleTexel>  kTexelNumber =
{
	{ { 0.0f       , 1.0f / 2.0f },{ 0.0f       , 0.0f },{ 1.0f / 5.0f, 1.0f / 2.0f },{ 1.0f / 5.0f, 0.0f } },		//!< �@�O
	{ { 1.0f / 5.0f, 1.0f / 2.0f },{ 1.0f / 5.0f, 0.0f },{ 2.0f / 5.0f, 1.0f / 2.0f },{ 2.0f / 5.0f, 0.0f } },		//!< �@�P
	{ { 2.0f / 5.0f, 1.0f / 2.0f },{ 2.0f / 5.0f, 0.0f },{ 3.0f / 5.0f, 1.0f / 2.0f },{ 3.0f / 5.0f, 0.0f } },		//!< �@�Q
	{ { 3.0f / 5.0f, 1.0f / 2.0f },{ 3.0f / 5.0f, 0.0f },{ 4.0f / 5.0f, 1.0f / 2.0f },{ 4.0f / 5.0f, 0.0f } },		//!< �@�R
	{ { 4.0f / 5.0f, 1.0f / 2.0f },{ 4.0f / 5.0f, 0.0f },{ 5.0f / 5.0f, 1.0f / 2.0f },{ 5.0f / 5.0f, 0.0f } },		//!< �@�S

	{ { 0.0f       , 1.0f },{ 0.0f       , 1.0f / 2.0f },{ 1.0f / 5.0f, 1.0f },{ 1.0f / 5.0f, 1.0f / 2.0f } },		//!< �@�T
	{ { 1.0f / 5.0f, 1.0f },{ 1.0f / 5.0f, 1.0f / 2.0f },{ 2.0f / 5.0f, 1.0f },{ 2.0f / 5.0f, 1.0f / 2.0f } },		//!< �@�U
	{ { 2.0f / 5.0f, 1.0f },{ 2.0f / 5.0f, 1.0f / 2.0f },{ 3.0f / 5.0f, 1.0f },{ 3.0f / 5.0f, 1.0f / 2.0f } },		//!< �@�V
	{ { 3.0f / 5.0f, 1.0f },{ 3.0f / 5.0f, 1.0f / 2.0f },{ 4.0f / 5.0f, 1.0f },{ 4.0f / 5.0f, 1.0f / 2.0f } },		//!< �@�W
	{ { 4.0f / 5.0f, 1.0f },{ 4.0f / 5.0f, 1.0f / 2.0f },{ 5.0f / 5.0f, 1.0f },{ 5.0f / 5.0f, 1.0f / 2.0f } },		//!< �@�X
};