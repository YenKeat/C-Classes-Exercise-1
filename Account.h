#pragma once

class AccountClass {
public:
	explicit AccountClass(float Balance);
	void credit();
	void debit();
	float getBalance() const;
	void Initialize(float balance);

private:
	float Balance;
	float Input;
};