//Search for:
			if (number(1, 100) <= 50) // 임시로 50% 확률로 적을 끌어온다
				if (DISTANCE_APPROX(ch->GetX() - m_ch->GetX(), ch->GetY() - m_ch->GetY()) < 5000)
					if (ch->CanBeginFight())
						ch->BeginFight(m_ch);

//Change with:
#ifdef PREMIUM
			if (m_ch->FindAffect(AFFECT_PREMIUM_1))
			{
				if (number(1, 100) <= 100) // ÀÓ½Ã·Î 50% È®·ü·Î ÀûÀ» ²ø¾î¿Â´Ù
					if (DISTANCE_APPROX(ch->GetX() - m_ch->GetX(), ch->GetY() - m_ch->GetY()) < 20000) //Change 20000 valor for the one you desire for (Of course less than 20000).
						if (ch->CanBeginFight())
							ch->BeginFight(m_ch);
			}
			else if (!m_ch->FindAffect(AFFECT_PREMIUM_1))
			{
				if (number(1, 100) <= 50) // 임시로 50% 확률로 적을 끌어온다
					if (DISTANCE_APPROX(ch->GetX() - m_ch->GetX(), ch->GetY() - m_ch->GetY()) < 5000)
						if (ch->CanBeginFight())
							ch->BeginFight(m_ch);
			}
#endif