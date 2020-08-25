#ifndef H_MEMENTO
#define H_MEMENTO

struct Position {
	int x_coordinate;
	int y_coordinate;
};

//A Memento instance is nothing but a snapshot of 
//the "state" of another class instance, here
//a Car instance
class Memento {
public:
	//sets the state of the Car instance that created 
	//a Memento instance
	Memento(Position position);

	//Returns the saved state of a Car instance 
	Position getState();

private:
	//the state of a Car instance is defined by its position
	Position m_position;

};




#endif