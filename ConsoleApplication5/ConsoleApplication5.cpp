#include "pch.h"
#include <stdio.h>
#include <dos.h>
#include <windows.h>
#include <math.h>
#include <iostream>
using namespace std;
int main()
{

	HANDLE hIn; /// Objects get somthing from board 
	hIn = GetStdHandle(STD_INPUT_HANDLE); // configuration

	INPUT_RECORD InRec; /// pojects to store information about  any events
	DWORD NumRead; /// data word 64 bit integer

	HANDLE hOut;  /// object to control output panel 
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);// configuration

	COORD KeyWhere; /// position write in console
	KeyWhere.X = 0;
	KeyWhere.Y = 0;

	SetConsoleCursorPosition(hOut, KeyWhere); /// set position by hOut
	cout << "0 0 0 0 0 0 0" ;
	bool Continue = TRUE;
	int x[7] = { 440, 494, 555, 588, 660, 740, 831 }; /// frequncy for sound music do re mi fa so la se do
	int i = 0; 
	while (Continue)
	{
		ReadConsoleInput(hIn, &InRec, 1, &NumRead);///read events from board  and store  information in InRec
												   /////  1 for dealy  NumRead receives the number of button actually read

			char a = InRec.Event.KeyEvent.uChar.AsciiChar; /// get the information for button pressed
			if (a == '1' && i % 2 == 0)
			{
				Beep(x[0], x[0]);
				SetConsoleCursorPosition(hOut, KeyWhere); // return to start line
				
				cout << "1 0 0 0 0 0 0" ;
			}
			else
			if (a == '2' && i % 2 == 0)
			{
				Beep(x[1], x[1]);
				SetConsoleCursorPosition(hOut, KeyWhere);
				cout << "0 1 0 0 0 0 0" ;

			}
			else
			if (a == '3' &&i % 2 == 0)
			{
				Beep(x[2], x[2]);
				SetConsoleCursorPosition(hOut, KeyWhere);
				cout << "0 0 1 0 0 0 0" ;

			}
			else
			if (a == '4' && i % 2 == 0)
			{
				Beep(x[3], x[3]);
				SetConsoleCursorPosition(hOut, KeyWhere);
				cout << "0 0 0 1 0 0 0";

			}
			else
			if (a == '5' && i % 2 == 0)
			{
				Beep(x[4], x[4]);
				SetConsoleCursorPosition(hOut, KeyWhere);
				cout << "0 0 0 0 1 0 0";

			}
			else
			if (a == '6' && i % 2 == 0)
			{
				Beep(x[5], x[5]);
				SetConsoleCursorPosition(hOut, KeyWhere);
				cout << "0 0 0 0 0 1 0" ;
			}
			else
			if (a == '7' && i % 2 == 0)
			{
				Beep(x[6], x[6]);
				SetConsoleCursorPosition(hOut, KeyWhere);
				cout << "0 0 0 0 0 0 1" ;
			}
			else
				if (a == '8' && i % 2 == 0)
				{
					Beep(999, 100);
					SetConsoleCursorPosition(hOut, KeyWhere);
					cout << "0 0 0 0 0 0 1";
				}
				else
					if (a == 'q' && i % 2 == 0)
					{
						Beep(1500, 400);
						SetConsoleCursorPosition(hOut, KeyWhere);
						cout << "0 0 0 0 0 0 1";
					}
				else
					if (a == 'w' && i % 2 == 0)
					{
						Beep(2500, 100);
						
						SetConsoleCursorPosition(hOut, KeyWhere);
						cout << "0 0 0 0 0 0 1";
					}
					else
						if (a == 'e' && i % 2 == 0)
						{
							Beep(2000, 100);
							SetConsoleCursorPosition(hOut, KeyWhere);
							cout << "0 0 0 0 0 0 1";
						}
						else
							if (a == 'r' && i % 2 == 0)
							{
								Beep(1500, 200);
								SetConsoleCursorPosition(hOut, KeyWhere);
								cout << "0 0 0 0 0 0 1";
							}
							else
								if (a == 't' && i % 2 == 0)
								{
									Beep(2000, 200);
									SetConsoleCursorPosition(hOut, KeyWhere);
									cout << "0 0 0 0 0 0 1";
								}
								else
									if (a == 'y' && i % 2 == 0)
									{
										Beep(2500, 200);
										SetConsoleCursorPosition(hOut, KeyWhere);
										cout << "0 0 0 0 0 0 1";
									}
									else
										if (a == 'u' && i % 2 == 0)
										{
											Beep(1000, 200);
											SetConsoleCursorPosition(hOut, KeyWhere);
											cout << "0 0 0 0 0 0 1";
										}
										else
											if (a == 'i' && i % 2 == 0)
											{
												Beep(1000, 500);
												SetConsoleCursorPosition(hOut, KeyWhere);
												cout << "0 0 0 0 0 0 1";
											}
											else
												if (a == 's' && i % 2 == 0)
												{
													Beep(200, 400);
													SetConsoleCursorPosition(hOut, KeyWhere);
													cout << "0 0 0 0 0 0 1";
												}
												else
													if (a == 'a' && i % 2 == 0)
													{
														Beep(100, 400);
														SetConsoleCursorPosition(hOut, KeyWhere);
														cout << "0 0 0 0 0 0 1";
													}
													else
														if (a == 'd' && i % 2 == 0)
														{
															Beep(250, 420);
															SetConsoleCursorPosition(hOut, KeyWhere);
															cout << "0 0 0 0 0 0 1";
														}
														else
															if (a == 'f' && i % 2 == 0)
															{
																Beep(300, 420);
																SetConsoleCursorPosition(hOut, KeyWhere);
																cout << "0 0 0 0 0 0 1";
															}
															else
																if (a == 'g' && i % 2 == 0)
																{
																	Beep(300, 550);
																	SetConsoleCursorPosition(hOut, KeyWhere);
																	cout << "0 0 0 0 0 0 1";
																}
																else
																	if (a == 'h' && i % 2 == 0)
																	{
																		Beep(350, 450);
																		SetConsoleCursorPosition(hOut, KeyWhere);
																		cout << "0 0 0 0 0 0 1";
																	}
																	else
																		if (a == 'j' && i % 2 == 0)
																		{
																			Beep(90, 500);
																			SetConsoleCursorPosition(hOut, KeyWhere);
																			cout << "0 0 0 0 0 0 1";
																		}
							
		i++;
	}
	
	MessageBeep(MB_OK);
	MessageBeep(MB_ICONINFORMATION);
	MessageBeep(MB_ICONQUESTION);
	MessageBeep(MB_ICONWARNING);
	return 0;
}