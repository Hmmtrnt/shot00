#pragma once

#include <vector>
#include "player.h"
#include "ShotBase.h"

class SceneMain
{
public:
	SceneMain();
	virtual ~SceneMain();

	// ������
	void init();
	// �I������
	void end();

	// ���t���[���̏���
	void update();
	// ���t���[���̕`��
	void draw();

	// �e�̐���
	bool createShotNormal(Vec2 pos);
	bool createShotCurve(Vec2 pos);
	bool createShotCrawl(Vec2 pos);
	
private:
	// �V���b�g�̍ő吔
	static constexpr int kShotMax = 64;

private:

	// �v���C���[�̃O���t�B�b�N�n���h��
	int m_hPlayerGraphic;
	int m_hShotGraphic;
	
	// �T�E���h�n���h��
	int m_hTestSound;
	int m_hBgmSound;
	
	// �v���C���[
	Player m_player;
	// �V���b�g
	std::vector<ShotBase*>m_pShotVt;
	//ShotBase* m_pShot[kShotMax];
};