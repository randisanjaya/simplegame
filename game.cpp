#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

int main () {
	string jawaban;
	
	//opening
	cout<<"Welcome to the Game! \n";
	cout<<"Created by. Sanjaya Kenji \n";
	cout<<"Press Enter to continue \n";
	cout<<endl;
	getch();
	
	//isi
	cout<<"Di game kali ini, akan ada 5 pertanyaan yang kalian harus jawab. Jawablah dengan benar, \n";
	cout<<"jika menjawab salah maka anda gagal. Jika anda mengulang game ini, anda kembali menjawab pertanyaan pertama. \n";
	cout<<"(Press Enter to Continue) \n";
	getch();
	cout<<"Pertanyaan ini terkait tentang seorang vtuber bernama Aika Sakuraba (Press Enter to Continue) \n";
	getch();
	persetujuan:
	cout<<"Apakah anda bersedia untuk bermain game ini?"<<endl;
	cout<<"Jawaban (Y/T): ";
	cin >> jawaban;
	
	/*
	* Ini adalah sesi proses output yang dilakukan oleh player ataupun user.
	* Jika menginput Y/y, maka akan masuk ke pertanyaan pertama.
	* Jika menginput T/t, maka akan masuk di sesi output penutupan.
	* Jika salah menginput, maka akan kembali ke pertanyaan persetujuan kembali.
	*/
	if ((jawaban == "Y") || (jawaban == "y")) {
		awal:
		system("cls");
		cout<<"Mari kita masuk ke pertanyaan Pertama (Press Enter to Continue)"<<endl;
		getch();
		/*
		* Jawaban yang benar adalah D.
		* Jika menjawab D, maka akan masuk ke pertanyaan selanjutnya.
		* Jika menjawab selain D, maka jawabanya salah dan player ataupun user akan diberi pilihan.
		* Jika memilih lanjut, maka dia akan kembali ke pertanyaan awal.
		* Jika memilih tidak, maka akan masuk di sesi output penutupan.
		* Jika salah menginput, maka akan kembali ke pertanyaan persetujuan kembali.
		*/
		cout<<"Pertanyaan 1 \n";
		cout<<"Apa makanan kesukaan Aika? \n";
		cout<<"A. Sate Kelinci \n";
		cout<<"B. Sate Kambing \n";
		cout<<"C. Martabak Telor \n";
		cout<<"D. Es Krim \n";
		
		cout<<endl;
		cout<<"Jawaban : ";
		cin >> jawaban;
		
		if ((jawaban == "D") || (jawaban == "d")) {
			cout<<"Jawaban anda Benar! (Press Enter to Continue)"<<endl;
			getch();
			system("cls");
			cout<<"Mari kita lanjut ke pertanyaan selanjutnya (Press Enter to Continue)"<<endl;
			getch();
			/*
			* Jawaban yang benar adalah A.
			* Jika menjawab A, maka akan masuk ke pertanyaan selanjutnya.
			* Jika menjawab selain A, maka jawabanya salah dan player ataupun user akan diberi pilihan.
			* Jika memilih lanjut, maka dia akan kembali ke pertanyaan awal.
			* Jika memilih tidak, maka akan masuk di sesi output penutupan.
			* Jika salah menginput, maka akan kembali ke pertanyaan persetujuan kembali.
			*/
			cout<<"Pertanyaan 2 \n";
			cout<<"Siapa nama Manager Aika Sakuraba? \n";
			cout<<"A. Not Gemigen \n";
			cout<<"B. Mang Fawwaz \n";
			cout<<"C. crow \n";
			cout<<"D. Semua Benar \n";
			
			cout<<endl;
			cout<<"Jawaban : ";
			cin >> jawaban;
			
			if ((jawaban == "A") || (jawaban == "a")) {
				cout<<"Jawaban anda Benar! (Press Enter to Continue)"<<endl;
				getch();
				system("cls");
				cout<<"Mari kita lanjut ke pertanyaan selanjutnya (Press Enter to Continue)"<<endl;
				getch();
				
				/*
				* Jawaban yang benar adalah G.
				* Jika menjawab G, maka akan masuk ke pertanyaan selanjutnya.
				* Jika menjawab selain G, maka jawabanya salah dan player ataupun user akan diberi pilihan.
				* Jika memilih lanjut, maka dia akan kembali ke pertanyaan awal.
				* Jika memilih tidak, maka akan masuk di sesi output penutupan.
				* Jika salah menginput, maka akan kembali ke pertanyaan persetujuan kembali.
				*/
				cout<<"Pertanyaan 3 \n";
				cout<<"Siapa nama moderator dari Aika Sakuraba? \n";
				cout<<"A. Not Gemigen \n";
				cout<<"B. Mang Fawwaz \n";
				cout<<"C. crow \n";
				cout<<"D. Sanjaya Kenji \n";
				cout<<"E. Danzel Nanatsuki \n";
				cout<<"F. Mr. Pain \n";
				cout<<"G. Semua Benar \n";
				
				cout<<endl;
				cout<<"Jawaban : ";
				cin >> jawaban;
				
				if ((jawaban == "G") || (jawaban == "g")) {
					cout<<"Jawaban anda Benar! (Press Enter to Continue)"<<endl;
					getch();
					system("cls");
					cout<<"Mari kita lanjut ke pertanyaan selanjutnya (Press Enter to Continue)"<<endl;
					getch();
					
					/*
					* Jawaban yang benar adalah A.
					* Jika menjawab A, maka akan masuk ke pertanyaan selanjutnya.
					* Jika menjawab selain A, maka jawabanya salah dan player ataupun user akan diberi pilihan.
					* Jika memilih lanjut, maka dia akan kembali ke pertanyaan awal.
					* Jika memilih tidak, maka akan masuk di sesi output penutupan.
					* Jika salah menginput, maka akan kembali ke pertanyaan persetujuan kembali.
					*/
					cout<<"Pertanyaan 4 \n";
					cout<<"Siapa nama teman dari Aika Sakuraba? \n";
					cout<<"A. Semua Benar \n";
					cout<<"B. Not Gemigen \n";
					cout<<"C. Mang Fawwaz \n";
					cout<<"D. Danzel Nanatsuki \n";
					cout<<"E. Shekuma \n";
					cout<<"F. Makotoshi \n";
					
					cout<<endl;
					cout<<"Jawaban : ";
					cin >> jawaban;
					
					if ((jawaban == "A") || (jawaban == "a")) {
						cout<<"Jawaban anda Benar! (Press Enter to Continue)"<<endl;
						getch();
						system("cls");
						cout<<"Mari kita lanjut ke pertanyaan selanjutnya (Press Enter to Continue)"<<endl;
						getch();
						
						/*
						* Jawaban yang benar adalah C.
						* Jika menjawab C, maka akan masuk ke pertanyaan selanjutnya.
						* Jika menjawab selain C, maka jawabanya salah dan player ataupun user akan diberi pilihan.
						* Jika memilih lanjut, maka dia akan kembali ke pertanyaan awal.
						* Jika memilih tidak, maka akan masuk di sesi output penutupan.
						* Jika salah menginput, maka akan kembali ke pertanyaan persetujuan kembali.
						*/
						cout<<"Pertanyaan 5 \n";
						cout<<"Apa yang tidak disukai dari Aika Sakuraba? \n";
						cout<<"A. Mengkalong (Bergadang) \n";
						cout<<"B. Es krim \n";
						cout<<"C. Sate Kelinci \n";
						cout<<"D. Dibully \n";
						cout<<"E. Semua Benar \n";
						cout<<"F. Semua Salah \n";
						
						cout<<endl;
						cout<<"Jawaban : ";
						cin >> jawaban;
						
						if ((jawaban == "C") || (jawaban == "c")) {
							cout<<"Jawaban anda Benar! (Press Enter to Continue)"<<endl;
							getch();
							system("cls");
							cout<<"Game Passed. 5 pertanyaan terjawab semua. (Press Enter to Continue)"<<endl;
							getch();
							cout<<"Terima Kasih sudah mengunjungi game ini. \n";
							cout<<"Jangan lupa untuk Like, Comment, Share juga Subscribe Channel YouTube Sanjaya Kenji \n";
							cout<<endl;
							getch();
							cout<<"Support gw melalui: \n";
							getch();
							cout<<"Karyakarsa: https//karyakarsa.com/sanjayakenji \n";
							cout<<"Trakteer.id: https//trakteer.id/sanjayakenji \n";
							cout<<"Saweria: https//saweria.co/sanjayakenji \n";
							getch();
						}
						
						else {
							cout<<"Maaf, Jawaban anda Salah! (Press Enter to Continue)"<<endl;
							getch();
							cout<<"Jawaban yang benar, adalah: "<<endl;
							cout<<"C. Sate Kelinci (Press Enter to Continue)"<<endl;
							getch();
							ulang5:
							cout<<"Apakah anda ingin bermain lagi?"<<endl;
							cout<<"Jawaban (Y/T): ";
							cin >> jawaban;
								if ((jawaban == "Y") || (jawaban == "y")) {
								goto awal;
								}
								else if ((jawaban == "T") || (jawaban == "t")) {
									cout<<"Terima Kasih sudah mengunjungi game ini. \n";
									cout<<"Jangan lupa untuk Like, Comment, Share juga Subscribe Channel YouTube Sanjaya Kenji \n";
									cout<<endl;
									getch();
									cout<<"Support gw melalui: \n";
									getch();
									cout<<"Karyakarsa: https//karyakarsa.com/sanjayakenji \n";
									cout<<"Trakteer.id: https//trakteer.id/sanjayakenji \n";
									cout<<"Saweria: https//saweria.co/sanjayakenji \n";
									getch();
								}
								else {
									system("cls");
									cout<<"Maaf, keyword yang anda masukan salah. Silahkam masukan kembali keyword yang benar";
									cout<<endl;
									goto ulang5;
								}
						}
					}
					else {
						cout<<"Maaf, Jawaban anda Salah! (Press Enter to Continue)"<<endl;
						getch();
						cout<<"Jawaban yang benar, adalah: "<<endl;
						cout<<"A. Semua Benar (Press Enter to Continue)"<<endl;
						getch();
						ulang4:
						cout<<"Apakah anda ingin bermain lagi?"<<endl;
						cout<<"Jawaban (Y/T): ";
						cin >> jawaban;
						if ((jawaban == "Y") || (jawaban == "y")) {
							goto awal;
						}
						else if ((jawaban == "T") || (jawaban == "t")) {
							cout<<"Terima Kasih sudah mengunjungi game ini. \n";
							cout<<"Jangan lupa untuk Like, Comment, Share juga Subscribe Channel YouTube Sanjaya Kenji \n";
							cout<<endl;
							getch();
							cout<<"Support gw melalui: \n";
							getch();
							cout<<"Karyakarsa: https//karyakarsa.com/sanjayakenji \n";
							cout<<"Trakteer.id: https//trakteer.id/sanjayakenji \n";
							cout<<"Saweria: https//saweria.co/sanjayakenji \n";
							getch();
						}
						else {
							system("cls");
							cout<<"Maaf, keyword yang anda masukan salah. Silahkam masukan kembali keyword yang benar";
							cout<<endl;
							goto ulang4;
						}
					}
				}
					else {
						cout<<"Maaf, Jawaban anda Salah! (Press Enter to Continue)"<<endl;
						getch();
						cout<<"Jawaban yang benar, adalah: "<<endl;
						cout<<"G. Semua Benar (Press Enter to Continue)"<<endl;
						getch();
						ulang3:
						cout<<"Apakah anda ingin bermain lagi?"<<endl;
						cout<<"Jawaban (Y/T): ";
						cin >> jawaban;
							if ((jawaban == "Y") || (jawaban == "y")) {
							goto awal;
							}
							else if ((jawaban == "T") || (jawaban == "t")) {
								cout<<"Terima Kasih sudah mengunjungi game ini. \n";
								cout<<"Jangan lupa untuk Like, Comment, Share juga Subscribe Channel YouTube Sanjaya Kenji \n";
								cout<<endl;
								getch();
								cout<<"Support gw melalui: \n";
								getch();
								cout<<"Karyakarsa: https//karyakarsa.com/sanjayakenji \n";
								cout<<"Trakteer.id: https//trakteer.id/sanjayakenji \n";
								cout<<"Saweria: https//saweria.co/sanjayakenji \n";
								getch();
							}
							else {
								system("cls");
								cout<<"Maaf, keyword yang anda masukan salah. Silahkam masukan kembali keyword yang benar";
								cout<<endl;
								goto ulang3;
							}
					}
			}
			else {
				cout<<"Maaf, Jawaban anda Salah! (Press Enter to Continue)"<<endl;
				getch();
				cout<<"Jawaban yang benar, adalah: "<<endl;
				cout<<"A. Not Gemigen (Press Enter to Continue)"<<endl;
				getch();
				ulang2:
				cout<<"Apakah anda ingin bermain lagi?"<<endl;
				cout<<"Jawaban (Y/T): ";
				cin >> jawaban;
					if ((jawaban == "Y") || (jawaban == "y")) {
					goto awal;
				}
				else if ((jawaban == "T") || (jawaban == "t")) {
					cout<<"Terima Kasih sudah mengunjungi game ini. \n";
					cout<<"Jangan lupa untuk Like, Comment, Share juga Subscribe Channel YouTube Sanjaya Kenji \n";
					cout<<endl;
					getch();
					cout<<"Support gw melalui: \n";
					getch();
					cout<<"Karyakarsa: https//karyakarsa.com/sanjayakenji \n";
					cout<<"Trakteer.id: https//trakteer.id/sanjayakenji \n";
					cout<<"Saweria: https//saweria.co/sanjayakenji \n";
					getch();
				}
				else {
					system("cls");
					cout<<"Maaf, keyword yang anda masukan salah. Silahkam masukan kembali keyword yang benar";
					cout<<endl;
					goto ulang2;
				}
			}
		}
		else {
			cout<<"Maaf, Jawaban anda Salah! (Press Enter to Continue)"<<endl;
			getch();
			cout<<"Jawaban yang benar, adalah: "<<endl;
			cout<<"D. Es Krim (Press Enter to Continue)"<<endl;
			getch();
			ulang1:
			cout<<"Apakah anda ingin bermain lagi?"<<endl;
			cout<<"Jawaban (Y/T): ";
			cin >> jawaban;
			if ((jawaban == "Y") || (jawaban == "y")) {
				goto awal;
			}
			else if ((jawaban == "T") || (jawaban == "t")) {
				cout<<"Terima Kasih sudah mengunjungi game ini. \n";
				cout<<"Jangan lupa untuk Like, Comment, Share juga Subscribe Channel YouTube Sanjaya Kenji \n";
				cout<<endl;
				getch();
				cout<<"Support gw melalui: \n";
				getch();
				cout<<"Karyakarsa: https//karyakarsa.com/sanjayakenji \n";
				cout<<"Trakteer.id: https//trakteer.id/sanjayakenji \n";
				cout<<"Saweria: https//saweria.co/sanjayakenji \n";
				getch();
			}
			else {
				system("cls");
				cout<<"Maaf, keyword yang anda masukan salah. Silahkam masukan kembali keyword yang benar";
				cout<<endl;
				goto ulang1;
			}
		}
	}
	else if ((jawaban == "T") || (jawaban == "t")) {
		cout<<"Terima Kasih sudah mengunjungi game ini. \n";
		cout<<"Jangan lupa untuk Like, Comment, Share juga Subscribe Channel YouTube Sanjaya Kenji \n";
		cout<<endl;
		getch();
		cout<<"Support gw melalui: \n";
		getch();
		cout<<"Karyakarsa: https//karyakarsa.com/sanjayakenji \n";
		cout<<"Trakteer.id: https//trakteer.id/sanjayakenji \n";
		cout<<"Saweria: https//saweria.co/sanjayakenji \n";
		getch();
	}
	else {
		system("cls");
		cout<<"Maaf, keyword yang anda masukan salah. Silahkam masukan kembali keyword yang benar";
		cout<<endl;
		goto persetujuan;
	}
}