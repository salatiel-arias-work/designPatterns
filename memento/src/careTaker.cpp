#include "careTaker.h"

Memento* CareTaker::getLastState() {

	Memento* lastSnapshot = m_snapshots.back();
	delete lastSnapshot;

	m_snapshots.pop_back();

	return m_snapshots.back();
}

void CareTaker::saveCurrentState(Memento* snapshot) {

	m_snapshots.push_back(snapshot);
}





