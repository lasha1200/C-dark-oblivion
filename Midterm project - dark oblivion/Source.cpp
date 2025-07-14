//Lasha Mermanishvili
//CIS1111
//Midterm Project
//Dark Oblivion(Post apocoliptic decions based video-game)


#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	//Hidden Game Rules
	// point multiplier effect: Win = original points multiplied by the amount of decisons made
	//pont multiplier effect: Loss = original points multiplied by the amount of decisions made - 20 points
	//cure + 15 points

	//Intro
	cout << "Welcome to the year 2043, the HC3 virus has pushed civilization to the end of days. \nMindless beasts roam the street at night while looters and raiders fill the town during the day. \n\nYou must make the right decisions to survive. You may even find a cure! But if you are too risky in your choices, you might not survive the night. \n\n***SURVIVE AS LONG AS YOU CAN***\n\n(Difficulty: Hard)\n\n(Wait until the end for high score)\n\n";

	string city1 = "Metropolis", city2 = "Atlantis", plyrname;
	float Survivor = 20.0, Scavenger = 20.0;
	int Survivor1 = 1, Scavenger1 = 2, cha, choice;
	cout << " 1. Survivor\n 2. Scavanger\n\nChoose your character to begin (Enter Number for all choices): ";
	cin >> cha;
	cout << "Enter your first name: ";
	cin >> plyrname;
	if (cha == 1)//Character choice 1

	{
		cout << "\n\nYou selected Survivor, you have tactical skill and firepower you need to survive this, but be careful, one wrong move and you're lunch!\n\n";//character selection
		cout << " You have entered the city of " << city1 << ". The sun is directly over you and you need to find shade.\n You spot a nearby building where you can recover but you hear noises coming from the building.\n\n(1)Do you enter, or \n\n(2)look for another hideout : ";//first decision
		cin >> choice;
		if (choice == 1)

		{
			cout << "\n\nYou have entered and found a horde. You are bruised up and spent half of your ammo but you managed to clear the hideout of the horde.\n\n";
			cout << "\n\nIt is night time and you are getting hungry. You need your energy for the day coming so you need to eat, but it is risky going out at night due to increased flow of zombies. Do you: \n\n(1)head out or \n\n(2)Stay put until morning: ";
			cin >> choice;
			if (choice == 1)
			{
				cout << "\n\nYou left your hideout... You hear screams and screaches all around you as you walk down the abandoned street.\n You spot a building called 'Research and Development' but it looks vacated.\n Do you: \n\n(1)enter or \n\n(2)keep going: ";
				cin >> choice;
				if (choice == 1)

					cout << "\n\nYou have entered the building. A group of raiders have ambushed you! they have taken your belongings and you are left outside. Sorry... you've been turned into zombie lunch!\n\n (GAME OVER)\n\n Player: " << plyrname << " high score is " << Survivor - 20 << " points!\n\n"; //(END 1) 
				if (choice == 2)

				{
					cout << "\n\nYou kept going and found what looks to be a small group of people in your path but they don't look like raiders. Do you \n\n(1)confront or \n\n(2) sneak attack: ";

					cin >> choice;
					if (choice == 1)

						cout << "\n\nYou have verified that the group of people are friendly. They ask you to join their small organization in rebuilding society.\n\n (VICTORY) \n\n" "Player: " << plyrname << " high score is " << Survivor * 4 << " points! \n\n";//(END 2)
					if (choice == 2)

						cout << "\n\nYou tried attacking but you have limited resources and fall short... \n\n (GAME OVER) \n\n" << "Player: " << plyrname << " high score is " << (Survivor * 4) - 20 << " points!"; //(END 3)
				}
			}

			if (choice == 2)

			{
				cout << "\nYou're out of energy but you survived the night.\n You leave the hideout and keep going to find a building labeled 'Research and Development'\n Do you \n\n(1)Enter and explore the place for survivors or \n\n(2)keep going \n";
				cin >> choice;
				if (choice == 1)
					cout << "\n\n You entered the building and found an incomplete set of documents labeled 'Research for HC3 Virus' \n You exit the buidlidng after finding a few more minor resources. You are aware that the documents you have with you may be the cure to the virus. Your next mission begins in finding the right people to finish the cure. \n\n(VICTORY)\n\n" << "Player: " << plyrname << " high score is " << (Survivor * 6) + 15 << " points! \n\n"; //(END 4)//special multiplier - part of cure found
				if (choice == 2)
				{
					cout << "\n\n You keep going to discover a small cabin near a river. Do you \n\n(1)Enter and explore for resources or \n\n(2)Try fishing for food with the fishing rod outside the cabin. ";
					cin >> choice;
					if (choice == 1)
						cout << "\n\nThis seems like a safe place for the time being. You find more resources in the cabin to last you for the rest of the month!\n\n(VICTORY)\n\n" << "Player: " << plyrname << " high score is " << Survivor * 3 << " points! \n\n"; //(END 5)
					if (choice == 2)
						cout << "\n\nYou fish and catch a 16 oz blue gill. You throw it over the fire and eat the delicious meal.\n Later in the evening you feel a strange sensation. You search up the river for a help as you feel even stranger. You collapse while reading 'WARINING: Water Contaminated' sign next up the river... \n\n(GAME OVER)\n\n" << "Player: " << plyrname << " high score is " << (Survivor * 3) - 20 << " points! \n\n"; //(END 6)
				}
			}
		}
		if (choice == 2)
		{
			cout << "\n\nYou kept going to search for another hideout. You stumble across the remains of what looks like a hospital.\n There are noises coming from there but you also hear a group of people around the corner.\n Do you \n\n(1)Enter the hospital remains or \n\n(2)Confront the group aproaching\n";
			cin >> choice;
			if (choice == 1)
				cout << "You have entered the hospital to discover nightcrawlers(advance breed of zombies), you stand no chance with your available resources... \n\n (GAME OVER) \n\n" << "Player: " << plyrname << " high score is " << (Survivor * 3) - 20 << " points! \n\n"; //(END 7) 
			if (choice == 2)
				cout << "You confronted the group to discover they are survivors like you, headed to nearby shelter. They invite you to come with them and help rebuild society. \n\n(VICTORY)\n\n" << "Player: " << plyrname << " high score is " << Survivor * 3 << " points! \n\n"; //(END 8)
		}
	}
	if (cha == 2) //Character choice 2
	{
		cout << "\n\nYou selected Scavenger, you have greater luck in discovering resources but lighter firepower.\n Lets see what runs out first, food or ammo.\n\n";//character selection


		cout << "\n\nYou have entered the city of " << city2 << ", the moon is to the west and the stars above you. It is night-time. \nYou get spotted by a horde and they start to chase after you, you need to find shelter NOW. \n You see a small hideout where you can dip off to. \n As you watch the horde sprint past you, you're faced with a new decision: \n\n(1)Go back out and look for resources that you need now or \n\n(2)Go hungry tonight and look for food in the morning: ";
		cin >> choice;//first decision
		if (choice == 1)
		{
			cout << "\n\nThe noise has died down around you and you go back out in the street.\n You spot an unattended suitcase across the street. It looks abandoned. Yet, it could also be a trap set out by looters.\n Do you: \n\n(1)Secure the suitcase or \n\n(2)Walk off: ";
			cin >> choice;
			if (choice == 1)
			{
				cout << "\n\nYou discovered ammo and medical supplies! Now you are well armed to face the dangers ahead of you. \n As you continue down the street you hear somebody scream 'HELP!'\n Do you: \n\n(1)Mind your business or \n\n(2)Rush to help: ";
				cin >> choice;
				if (choice == 1)
				{
					cout << "\n\n You kept walking and left the city, saying to yourself 'The hard part is over'\n You discover what looks to be an abandoned cabin near the river.\n\n Do you: \n\n(1)Enter the cabin \n\n(2)Try fishing for food with the fishing rod outside the cabin. \n";
					cin >> choice;
					if (choice == 1)
						cout << "\n\nThis seems like a safe place for the time being. You find more resources in the cabin to last you for the rest of the month!\n\n(VICTORY)\n\n" << "Player: " << plyrname << " high score is " << Scavenger * 4 << " points! \n\n";//(END 1) 

					if (choice == 2)
						cout << "\n\nYou fish and catch a 24 oz blue gill. You throw it over the fire and eat the delicious meal.\n Later in the evening you feel a strange sensation. You search up the river for a help as you feel even stranger. You collapse while reading 'WARINING: Water Contaminated' sign next up the river... \n\n(GAME OVER)\n\n""Player: " << plyrname << " high score is " << (Scavenger * 4) - 20 << " points! \n\n";//(END 2)
				}
				if (choice == 2)
				{
					cout << "\n\nYou rush to save the people in need.\n They are being attacked by nightcrawlers (advanced breed of the infected) but you found supplies earlier that you could use to protect the survivors. \n\n\n You fought off the nightcrawlers.\n The survivors being extremely grateful invited you to come with them to stay at their shelter and you go in the attempts to help rebuild the civilization. \n\n(VICTORY)\n\n" << "Player: " << plyrname << " high score is " << Scavenger * 3 << " points! \n\n"; cin.ignore(choice); //(END 3)
				}
			}
			if (choice == 2)
			{
				cout << "\n\n You kept walking and left the city, saying to yourself 'The hard part is over'\n You discover what looks to be an abandoned cabin near the river.\n\n Do you: \n\n(1)Enter the cabin \n\n(2)Try fishing for food with the fishing rod outside the cabin. \n";
				cin >> choice;
				if (choice == 1)
					cout << "\n\nThis seems like a safe place for the time being. You find more resources in the cabin to last you for the rest of the month!\n\n(VICTORY)\n\n" << "Player: " << plyrname << " high score is " << Scavenger * 5 << " points! \n\n";//(END 4) 

				if (choice == 2)
					cout << "\n\nYou fish and catch a 24 oz blue gill. You throw it over the fire and eat the delicious meal.\n Later in the evening you feel a strange sensation. You search up the river for a help as you feel even stranger. You collapse while reading 'WARINING: Water Contaminated' sign next up the river... \n\n(GAME OVER)\n\n""Player: " << plyrname << " high score is " << (Scavenger * 5) - 20 << " points! \n\n";//(END 5)
			}
		}
		if (choice == 2)
		{
			cout << "You Wake up hungry but you're in one piece. \n You crawl out of the hideout to search for food. You smell something cooking not too far from you. \n You discover a campfire that looks abandoned.\n Do you \n\n(1)Investigate or \n\n(2)Look for other sources of food: ";
			cin >> choice;
			if (choice == 1)
				cout << "\n\nYou got too close to a raider camp and they discovered you.\n They took your belongings and left you to a horde of zombies... \n\n (GAME OVER)\n\n" << "Player: " << plyrname << " high score is " << (Scavenger * 3) - 20 << " points! \n\n";;//(END 6)
			if (choice == 2)

			{
				cout << "\n\nYou kept looking and found a cabin near a river.\n It looks abandoned and you're still hungry.\n Do you: \n\n(1) Search the cabin for food or \n\n(2)Grab the fishing rod next to the cabin and try fishing. \n";
				cin >> choice;
				if (choice == 1)
					cout << "\n\nThis seems like a safe place for the time being. You find more resources in the cabin to last you for the rest of the month!\n\n(VICTORY)\n\n" << "Player: " << plyrname << " high score is " << Scavenger * 4 << " points! \n\n";//(END 7)
				if (choice == 2)
					cout << "You fish and catch a 24 oz blue gill. You throw it over the fire and eat the delicious meal.\n Later in the evening you feel a strange sensation.\n\n You search up the river for a help as you feel even stranger.\n\n You collapse while reading 'WARINING: Water Contaminated' sign next up the river... \n\n(GAME OVER)\n\n" << "Player: " << plyrname << " high score is " << (Scavenger * 4) - 20 << " points! \n\n"; //(END 8)


			}
		}

	}
	return 0;
}