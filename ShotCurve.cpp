#include "game.h"
#include "ShotCurve.h"

namespace
{
	constexpr float kShotSpeedX = 5.0f;
	constexpr float kShotSpeedY = 10.0f;
	// d—Í
	constexpr float kGrabity = 0.5f;
}

void ShotCurve::start(Vec2 pos)
{
	ShotBase::start(pos);

	m_vec.x = kShotSpeedX;
	m_vec.y = -kShotSpeedY;
}

void ShotCurve::update()
{
	if (!m_isExist) return;
	m_pos += m_vec;
	if (m_isExist)
	{
		m_vec.y += kGrabity;
	}
	
	if (m_pos.x > Game::kScreenWidth || m_pos.x < 0 ||
		m_pos.y > Game::kScreenHeight /* || m_pos.y < 0*/)
	{
		m_isExist = false;
	}
}