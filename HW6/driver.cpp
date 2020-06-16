/*
 * CSS501 HW #6: Polymorphism
 * Wilbert Lim Sible
 * wsible@uw.edu
 * 2018/11/18 - fall quarter
 *
 * This is the driver class  which does the functional positive testing and functional negative testing of the functions 
 * of the Creature, Robot, Bear, and Robobear classes. 
 *
 *
 *
 */
#include <iostream>
#include <string>
#include "creature.h"
#include "robot.h"
#include "bear.h"
#include "robobear.h"
using namespace std;

int main()
{
	cout << "//////////Functional Positive Testing//////////" << endl;
	cout << "Meet Robot Alpha!!!" << endl;
	Robot alpha(3,1);
	alpha.sound();
	cout << "Current version: " << alpha.getVersion() << endl;
	cout << "Danger level: " << alpha.getDangerLevel() << endl;
	cout << "Level up!!!" << endl;
	int newVersion = alpha.getVersion();
	newVersion = newVersion++;
	alpha.setVersion(newVersion);
	cout << "New version: " << alpha.getVersion() << endl;
	int alphaDangerLevel = alpha.getDangerLevel();
	alphaDangerLevel = alphaDangerLevel++;
	alpha.setDangerLevel(alphaDangerLevel);
	cout << "Alpha's danger level just went up! Danger level: " << alpha.getDangerLevel() << endl;
	cout << endl;

	cout << "Meet Bear Kuma!!!" << endl;
	Bear kuma(2, "brown");
	kuma.sound();
	cout << "Bear color: " << kuma.getColor() << endl;
	cout << "Danger level: " << kuma.getDangerLevel() << endl;
	cout << "Level up!!!" << endl;
	kuma.setColor("gray");
	cout << "New color: " << kuma.getColor() << endl;
	int kumaDangerLevel = kuma.getDangerLevel();
	kumaDangerLevel = kumaDangerLevel++;
	kuma.setDangerLevel(kumaDangerLevel);
	cout << "Kuma's danger level just went up! Danger level: " << kuma.getDangerLevel() << endl;
	cout << endl;

	cout << "LET'S VOLT IN!!!!" << endl;
	cout << "Meet RoboBear AlphaKuma!!!" << endl;
	Robobear alphaKuma(4, 75, 1, "gray");
	alphaKuma.sound();
	cout << "AlphaKuma color: " << alphaKuma.getColor() << endl;
	cout << "Current version: " << alphaKuma.getVersion() << endl;
	cout << "Percent Bear: " << alphaKuma.getPercentBear() << endl;
	cout << "Danger level: " << alphaKuma.getDangerLevel() << endl;
	cout << "Level up!!!" << endl;
	kuma.setColor("metal");
	int alphaKumaVersion = alphaKuma.getVersion();
	alphaKumaVersion = alphaKumaVersion++;
	alpha.setVersion(newVersion);
	cout << "New color: " << kuma.getColor() << endl;
	int alphaKumaDangerLevel = alphaKuma.getDangerLevel();
	alphaKumaDangerLevel = alphaKumaDangerLevel++;
	alphaKuma.setDangerLevel(alphaKumaDangerLevel);
	cout << "AlphaKuma's danger level just went up! Danger level: " << alphaKuma.getDangerLevel() << endl;
	cout << endl;

	cout << "//////////Functional Negative Testing//////////" << endl;
	cout << "Meet Robot Beta!!!" << endl;
	Robot beta(-1, 0);
	beta.sound();
	cout << "Current version: " << beta.getVersion() << endl;
	cout << "Danger level: " << beta.getDangerLevel() << endl;
	cout << endl;

	cout << "Meet Bear Po!!!" << endl;
	Bear po(0, "brown");
	po.sound();
	cout << "Bear color: " << po.getColor() << endl;
	cout << "Danger level: " << po.getDangerLevel() << endl;
	cout << endl;

	cout << "Meet RoboBear betaPo!!!" << endl;
	Robobear betaPo(-1, -1, -1, "gray");
	betaPo.sound();
	cout << "AlphaKuma color: " << betaPo.getColor() << endl;
	cout << "Current version: " << betaPo.getVersion() << endl;
	cout << "Danger level: " << betaPo.getDangerLevel() << endl;
	
	
	
	
	
	
	system("pause");

}