#include "game.h"
#include "ShotDown.h"

namespace
{
	constexpr float kShotSpeedX = 8.0f;
	constexpr float kShotSpeedY = 8.0f;
}

void ShotDown::start(Vec2 pos)
{
	ShotBase::start(pos);

	m_vec.x = -kShotSpeedX;
	m_vec.y = kShotSpeedY;
}

void ShotDown::update()
{
	if (!m_isExist) return;
	m_pos += m_vec;

	if (m_isExist)
	{
		m_vec.y *= 0.9;
	}

	if (m_pos.x > Game::kScreenWidth || m_pos.x < 0 ||
		m_pos.y > Game::kScreenHeight || m_pos.y < 0)
	{
		m_isExist = false;
	}
}