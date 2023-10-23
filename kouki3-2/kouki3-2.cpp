// kouki3-2.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
using namespace std;
class Hero
{
private:
	char* name = new char;
	int h_hp=0;
	int h_atk=0;
	int h_def=0;
	int item=0;
	int critical=10;
public:
	void heroattack(int h_atk,int def);
	void heroheal();
	void Status();
	void StatusSettings();
	void openStatus();
};
class enemy
{
private:
	char* name = new char;
	int hp=0;
	int atk=0;
	int def=0;
public:

	void doragonSet();
	void slimeSet();
	void enemyattack(int atk,int h_def);
	void enemyBegattack(int atk,int h_def);

};

void Hero::Status() {
	int StatusSet = 0 ,end=0;
	do
	{

		do
		{
			cout << "何をしますか？" << endl
				<< "1：ステータスの設定　2：ステータスの表示　3：終わる" << flush;
			cin >> StatusSet;
		} while (StatusSet > 0 && StatusSet < 4);

		switch (StatusSet)
		{
		case 1:
			StatusSettings();

			break;
		case 2:
			openStatus();
			break;

		case 3:
			end = 1;
			break;

		default:

			break;
		}
	} while (end == 1);

}

void Hero::StatusSettings() {

	cout << "勇者の名前を教えてください" << flush;
	cin >> Hero::name;
	cout << "勇者の体力を教えてください" << flush;
	cin >> Hero::h_hp; 
	cout << "勇者の攻撃力を教えてください" << flush;
	cin >> Hero::h_atk;
	cout << "勇者の防御力を教えてください" << flush;
	cin >> Hero::h_def;
	cout << "勇者の回復アイテムの数を教えてください" << flush;
	cin >> Hero::item;

	if (Hero::h_hp>1000|| Hero::h_atk>500|| Hero::h_def>500|| Hero::item>20) {
		cout << "強欲ですね..." << endl;
	}
}
void Hero::openStatus() {

	cout << "なまえ：" << Hero::name << endl
		<< "たいりょく：" << Hero::h_hp << endl
		<< "ぱわー" << Hero::h_atk << endl
		<< "かたさ" << Hero::h_def << endl
		<< "かいふくやく" << Hero::item;
}
int main() {
	int Select = 0, end = 0;
	Hero hero;
	do
	{
		do
		{
			cout << "なにするの" << endl
				<<"1：ステータス設定　2：敵の設定　3：たたかう　4：終わる>"<<flush;
			cin >> Select;

		} while (Select > 0 && Select < 4);
		switch (Select) {
		case 1:
			Hero::Status;

			break;

		case 2:
			break;

		case 3:
			break;

		case 4:
			end = 1;

			break;

		case 5:
			break;

		default:
			break;
			



		} 

	} while (end == 1);
}

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
