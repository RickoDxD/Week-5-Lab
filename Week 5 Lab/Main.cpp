#include <iostream>
using namespace std;

//int Run(); //Function Prototype.

//Init function. Sets up SDL and all subsystems and other (dynamic) memory allocation.
void Init()
{
	cout << "Inializing game......." << endl;
}

// HanndleEvents function. Gets input from user, e.g. mouse/keyboard/gamepad events.
void HandleEvents()
{
	cout << "Getting Input......" << endl;
}

// Update funtion. Moves objects, performs physics, e.g. projectiles, gravity, collisions.
void Update()
{
	cout << "Updating game......" << endl;
}

//Render function. Renders changes in game objects to window. 
void Render()
{
	cout << "Rendering Window......" << endl;
}

//Clean function, De-initialize SDL and se-allocate memory.
void clean()
{
	cout << "Cleaning up.... " << endl;
}


// Run function. Contains the primary game loop.
int Run()
{
	bool isRunning = true;
	char input;

	Init();
	while (isRunning) //Primary game loop. "frame"
	{
		HandleEvents();//Input.
		Update();//Processing.
		Render();//Output.
		cout << "Do you want me to quit? [y/n]: ";
		cin >> input;
		if (input == 'y')
			isRunning = false;
		// 17 - 1 = pause for 18ms
	}
	return 0;
}

int main()
{

	return Run();
}