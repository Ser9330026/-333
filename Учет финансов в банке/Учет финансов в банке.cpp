//Учет финансов в банке :
//Спроектируйте класс "БанковскийСчет" с 
//атрибутами счета, баланса и методами для 
//внесения и снятия средств.
//Создайте класс "Клиент", содержащий список 
//банковских счетов и методы для подсчета общего баланса.

#include <iostream>
#include <string>
#include <vector>

class BankScore {
private:
	std::string numberScore;
	double balance = 0;
public:
	BankScore() {};
	BankScore(const std::string& numberScore, double balance) {
		this->numberScore = numberScore;
		this->balance = balance;
	}
	std::string getScore() const {
		return numberScore;
	}
	double getBalance() const {
		return balance;
	}
	double pluse_score(double sum) {
		balance += sum;
		return balance;
	}
	double minus_balance(double sum) {
		balance -= sum;
		return balance;
	}
};

class Client {
private:
	std::vector<BankScore> score;
public:
	void addBalance(const BankScore& bs) {
		score.push_back(bs);
	}

	double balanceFunc() {
		double obschiy = 0.0f;
		for (auto& bs : score) {
			obschiy += bs.getBalance();
		}
		return obschiy;
	}
};

int main() {
	setlocale(LC_ALL, "rus");
	BankScore score("00 00 333", 256.55);
	score.pluse_score(333);
	score.minus_balance(111);

	Client c1;
	c1.addBalance(score);

	std::cout << c1.balanceFunc() << std::endl;



	return 0;
}