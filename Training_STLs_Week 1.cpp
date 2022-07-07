// Training_STLs_week1.cpp

#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <stack>
#include <deque>
#include <queue>
#include <map>

#include <algorithm>
#pragma warning(disable : 4996)
//#include <bits/stdc++.h>

using namespace std;


// Argus 
struct Node
{
	int ID, period, t;
	bool operator<(Node b) const
	{
		if (t != b.t)
			return t > b.t;
		else
			return ID > b.ID;
	}
};


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	/*
			// Easy Stack

			int NumofOperations;
			//cin >> NumofOperations;
			scanf("%d", &NumofOperations);

			//int arr[2];
			stack <int> My_numbers;


			while (NumofOperations--)
			{
				//cin >> arr[0];
				int N;
				scanf("%d", &N);

				if (N == 1)
				{
					//cin >> arr[1];
					scanf("%d", &N);
					My_numbers.push(N);
				}
				else
				{
					if (N == 2)
					{
						if (!My_numbers.empty())
							My_numbers.pop();
					}
					else // if (N == 3)
					{
						if (My_numbers.empty())
							//cout << "Empty!";
							printf("Empty!\n");
						else
						{
							//Number = My_numbers.top();
							//cout << Number << endl;
							//My_numbers.pop();
							printf("%d\n", My_numbers.top());
						}
					}
				}
			}
			return 0;
			*/

			/*
							//Boy or Girl

							string name;
							cin >> name;

							set<char> NameLetters;
							for (int i = 0; i < name.size(); i++)
							{
								NameLetters.insert(name[i]);
							}
							if (NameLetters.size() % 2 != 0)
							{
								cout << "IGNORE HIM!";
							}
							else
							{
								cout << "CHAT WITH HER!";
							}
							*/


							/*
													//Ada and Queue
													deque <int> Queue;
													int N;

													scanf("%d", &N);

													char Opp[100];

													int cnt = 2, temp = 0;

													while (N--) {
														scanf("%s", Opp);

														if (Opp[0] == 'b')
														{
															if (Queue.empty())
															{
																printf("No job for Ada?\n");
															}
															else
															{
																if (cnt % 2)
																{
																	printf("%d\n", Queue.back());
																	//cout << Queue.back() << '\n';
																	Queue.pop_back();

																}
																else
																{
																	printf("%d\n", Queue.front());
																	//cout << Queue.front() << '\n';
																	Queue.pop_front();
																}
															}
														}
														else if (Opp[0] == 'f')
														{
															if (Queue.empty())
															{
																printf("No job for Ada?\n");
															}
															else
															{
																if (cnt % 2)
																{
																	printf("%d\n", Queue.front());
																	//cout << Queue.front() << '\n';
																	Queue.pop_front();
																}
																else
																{
																	printf("%d\n", Queue.back());
																	//cout << Queue.back() << '\n';
																	Queue.pop_back();
																}
															}
														}

														else if (Opp[0] == 'r')
															cnt++;

														else if (Opp[0] == 'p')
														{
															scanf("%d", &temp);

															if (cnt % 2)
																Queue.push_back(temp);
															else
																Queue.push_front(temp);
														}
														else if (Opp[0] == 't')
														{
															scanf("%d", &temp);

															if (cnt % 2)
																Queue.push_front(temp);
															else
																Queue.push_back(temp);
														}
													}
													return 0;
													*/


													/*
																				//Diverse Team


																				// Wrong trial
																				// not applicable as you want the index of the id not the id it self

																				int arr[100] = { 0 };
																				int arr2[100] = { 0 };

																				set<int> Student_ID;
																				//	set<int > ::iterator it;

																				int Number_OF_Teams, Number_OF_Students;
																				cin >> Number_OF_Students >> Number_OF_Teams;
																				//int ID;
																				for (int i = 0; i < Number_OF_Students; i++) {
																					//cin >> ID;
																					//Student_ID.insert(ID);

																			cin >> arr[i];
																			Student_ID.insert(arr[i]);
																			arr2[arr[i]]++;
																				}
																				int q = 0;
																				if (Student_ID.size() >= Number_OF_Teams) {
																					cout << "YES\n";

																					for (int i = 0; i < Number_OF_Students && q < Number_OF_Teams; i++)
																					{
																						if (arr2[arr[i]] != -1) {
																							cout << i + 1 << " ";
																							arr2[arr[i]] = -1;
																							q++;
																						}
																					}
																					//// declare iterator to help us iterate over our set
																					//set<int>::iterator j;

																					//// print the contents of our set
																					//for (j = Student_ID.begin(); j != Student_ID.end(); ++j)
																					//	cout << *j << " ";

																				}
																				else {

																					cout << "NO";
																				}
																				return 0;

																			*/

																			/*
																										//Points in Segments

																										int start, end;
																										cin >> start >> end;
																										set <int> Myset;
																										set <int>::iterator it;

																										for (int i = 1; i <= end; i++)
																										{
																											Myset.insert(i);
																										}
																										while (start--)
																										{
																											int s, e;
																											cin >> s >> e;
																											for (int j = s; j <= e; j++)
																											{
																												Myset.erase(j);
																											}
																										}
																										cout << Myset.size() << "\n";
																										for (it = Myset.begin(); it != Myset.end(); it++)
																											cout << *it << " ";
																									*/

																									/*
																																//E - Free spots

																																// [x][y]
																																bool taken[505][505] = {0};

																																int W, H, N;
																																while (scanf("%d %d %d", &W, &H, &N), W)
																																{
																																	while (N--)
																																	{
																																		int X1, Y1, X2, Y2;
																																		scanf("%d %d %d %d", &X1, &Y1, &X2, &Y2);
																																		//cin >> X1 >> Y1 >> X2 >> Y2;
																																		if (X1 > X2)
																																			swap(X1, X2);
																																		if (Y1 > Y2)
																																			swap(Y1, Y2);

																																		for (int y = Y1 - 1; y < Y2; y++)

																																			for (int x = X1 - 1; x < X2; x++)

																																				taken[x][y] = true;
																																	}
																																	int count = 0;

																																	for (int y = 0; y < H; y++)
																																	{
																																		for (int x = 0; x < W; x++)
																																		{
																																			if (!taken[x][y])
																																				++count;
																																			else
																																				taken[x][y] = false;
																																		}
																																	}
																																	if (count == 0)
																																		printf("There is no empty spots.\n");
																																		//cout << "There is no empty spots.\n";
																																	else if (count == 1)
																																		printf("There is one empty spot.\n");
																																		//cout << "There is one empty spot.\n";
																																	else
																																		printf("There are %d empty spots.\n", count);
																																		//cout << "There are " << count << " empty spots.\n";
																																}

																															*/


																															/*
																																					//Error Correction
																																					int size;
																																					scanf("%d", &size);

																																					int Matrix[100][100] = {0};

																																					for (int Row = 0; Row < size; Row++)
																																					{
																																						for (int column = 0; column < size; column++)
																																							scanf("%d", Matrix[Row][column]);
																																					}
																																					*/

																																					/*
																																											//I Can Guess the Data Structure!

																																											int N;
																																											int state, X;


																																											while (scanf("%d", &N) != EOF)
																																											{
																																												stack<int> S;
																																												queue<int> Q;
																																												priority_queue<int> pQ;

																																												bool isStack = true, isQueue = true, isPQueue = true;

																																												for (int i = 0; i < N; i++)
																																												{
																																													scanf("%d %d", &state, &X);

																																													switch (state)
																																													{
																																													case (1):
																																														S.push(X);
																																														Q.push(X);
																																														pQ.push(X);

																																														break;
																																													case (2):

																																														if (!Q.empty() && Q.front() == X)
																																															Q.pop();
																																														else
																																															isQueue = false;

																																														if (!S.empty() && S.top() == X)
																																															S.pop();
																																														else
																																															isStack = false;

																																														if (!pQ.empty() && pQ.top() == X)
																																															pQ.pop();
																																														else
																																															isPQueue = false;

																																														break;
																																													default:
																																														break;
																																													}
																																												}

																																												if (isStack == true && isQueue == false && isPQueue == false)
																																													printf("stack\n");
																																												else if (isStack == false && isQueue == true && isPQueue == false)
																																													printf("queue\n");
																																												else if (isStack == false && isQueue == false && isPQueue == true)
																																													printf("priority queue\n");
																																												else if (isStack == false && isQueue == false && isPQueue == false)
																																													printf("impossible\n");
																																												else
																																													printf("not sure\n");

																																											}
																																											*/


																																											/*
																																																	//Registration System

																																																	// wrong attempet
																																																	//int N;
																																																	//scanf("%d", &N);
																																																	//
																																																	//set<string> S;
																																																	//
																																																	//string Name;
																																																	//
																																																	//int size = S.size();
																																																	//
																																																	//for (int i = 0; i < N; i++)
																																																	//{
																																																	//	scanf("%s", &Name);
																																																	//	S.insert(Name);
																																																	//
																																																	//	if (S.size() == size)
																																																	//	{
																																																	//		printf("%s1\n", Name);
																																																	//		S.insert(Name + "1");
																																																	//		size = S.size();
																																																	//	}
																																																	//	else
																																																	//	{
																																																	//		size = S.size();
																																																	//		printf("OK\n");
																																																	//	}
																																																	//}

																																																	map<string, int> map;

																																																	int size = 0;
																																																	cin >> size;

																																																	for (int i = 0; i < size; i++)
																																																	{
																																																		string name;
																																																		cin >> name;

																																																		if (map[name] == 0)
																																																		{
																																																			map[name] = 1;
																																																			cout << "OK\n";
																																																		}
																																																		else
																																																		{
																																																			cout << name << map[name] << "\n";
																																																			map[name]++;
																																																		}
																																																	}
																																																	*/


																																																	/*
																																																							// CD

																																																							while (true)
																																																							{
																																																								int N = 0, M = 0, count = 0, cd = 0;
																																																								scanf("%d %d", &N, &M);
																																																								vector<int> V(N);
																																																								vector<int>::iterator it;

																																																								if (N == 0 && M == 0)
																																																									break;

																																																								for (int i = 0; i < N; i++)
																																																								{
																																																									scanf("%d", &cd);
																																																									V[i] = cd;
																																																								}

																																																								it = V.begin();


																																																								for (int j = 0; j < M; j++) {

																																																									scanf("%d", &cd);

																																																									if (binary_search(it, V.end(), cd))
																																																										count++;

																																																								}

																																																								printf("%d\n", count);
																																																							}
																																																							*/

																																																							/*
																																																													// CD

																																																													//Second trial

																																																													#include <iostream>
																																																													#include <string>
																																																													#include <set>
																																																													#include <vector>
																																																													#include <stack>
																																																													#include <deque>
																																																													#include <queue>
																																																													#include <map>

																																																													#include <algorithm>
																																																													#pragma warning(disable : 4996)
																																																													//#include <bits/stdc++.h>

																																																													using namespace std;

																																																													int main()
																																																													{
																																																														ios_base::sync_with_stdio(false);
																																																														cin.tie(NULL);

																																																													while (true)
																																																													{
																																																														int N = 0, M = 0, count = 0, cd = 0;
																																																														scanf("%d %d", &N, &M);
																																																														vector<int> V;
																																																														vector<int>::iterator it;

																																																														if (N != 0 && M != 0)
																																																														{
																																																															for (int i = 0; i < N + M; i++)
																																																															{
																																																																scanf("%d", &cd);
																																																																V.push_back(cd);
																																																															}

																																																															it = V.begin();
																																																															sort(it, V.end());

																																																															for (; it != V.end() - 1; it++)
																																																															{
																																																																auto newit = it;
																																																																if (it == V.end())
																																																																	break;
																																																																else
																																																																	newit = it++;
																																																																if (*it == *newit)
																																																																	count++;
																																																															}

																																																															printf("%d \n", count);
																																																															V.clear();
																																																														}

																																																													}
																																																													*/

																																																													/*
																																																																			// CD

																																																																			// Third trial
																																																																			#include <iostream>
																																																																			#include <string>
																																																																			#include <vector>

																																																																			#include <algorithm>
																																																																			#pragma warning(disable : 4996)
																																																																			//#include <bits/stdc++.h>

																																																																			using namespace std;

																																																																			int main()
																																																																			{
																																																																				ios_base::sync_with_stdio(false);
																																																																				cin.tie(NULL);
																																																																			while (true)
																																																																			{
																																																																				int N = 0, M = 0, count = 0, cd = 0;
																																																																				scanf("%d %d", &N, &M);
																																																																				vector<int> V(N);
																																																																				vector<int>::iterator it;

																																																																				if (N == 0 && M == 0)
																																																																					break;

																																																																				for (int i = 0; i < N; i++)
																																																																				{
																																																																					scanf("%d", &cd);
																																																																					V[i] = cd;
																																																																					//V.push_back(cd);
																																																																				}

																																																																				it = V.begin();

																																																																			for (int j = 0; j < M; j++) {

																																																																				scanf("%d", &cd);

																																																																				if (binary_search(it, V.end(), cd))
																																																																					count++;

																																																																			}

																																																																			printf("%d \n", count);
																																																																			V.clear();
																																																																			}

																																																																			*/

																																																																			/*
																																																																			// Argus
																																																																			string Name = "";
																																																																			priority_queue<Node> PQueue;
																																																																			while (cin >> Name && Name != "#")
																																																																			{
																																																																				//if (Name != "#")
																																																																				//	break;
																																																																				Node node;
																																																																				scanf("%d %d", &node.ID, &node.period);
																																																																				//cin >> node.ID >> node.period;
																																																																				node.t = node.period;
																																																																				PQueue.push(node);
																																																																			}

																																																																			int N = 0;
																																																																			scanf("%d", &N);
																																																																			//cin >> N;
																																																																			while (N--)
																																																																			{
																																																																				Node node = PQueue.top();
																																																																				PQueue.pop();
																																																																				printf("%d\n", node.ID);
																																																																				//cout << node.ID << endl;
																																																																				node.t += node.period;
																																																																				PQueue.push(node);
																																																																			}
																																																																			*/


	int Number;
	scanf("%d", &Number);

	set<int> Myset;
	set<int>::iterator it;
	for (int i = 0; i < Number; i++)
	{
		int x;
		scanf("%d", &x);
		Myset.insert(x);
	}

	it = Myset.begin();
	printf("%d", it++);





	return 0;
}


