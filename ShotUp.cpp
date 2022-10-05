#include "game.h"
#include "ShotUp.h"

namespace
{
	constexpr float kShotSpeedX = 8.0f;
	constexpr float kShotSpeedY = 1.0f;
}

void ShotUp::start(Vec2 pos)
{
	ShotBase::start(pos);

	m_vec.x = kShotSpeedX;
	m_vec.y = -kShotSpeedY;
}

void ShotUp::update()
{
	if (!m_isExist) return;
	m_pos += m_vec;

	if (m_isExist)
	{
		m_vec.y *= 1.1;
	}
	

	if (m_pos.x > Game::kScreenWidth || m_pos.x < 0 ||
		m_pos.y > Game::kScreenHeight + 1000 || m_pos.y < -1000)
	{
		m_isExist = false;
	}
}