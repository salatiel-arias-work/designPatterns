#include "memento.h"

Memento::Memento(Position position) : m_position{position} {}

Position Memento::getState() {
	return m_position;
}
