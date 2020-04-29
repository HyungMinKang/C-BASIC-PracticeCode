#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Employee //���� Ŭ����
{
private:
	char name[100]; //�̸�

public:
	Employee(char* name)
	{
		strcpy(this->name, name);
	}
	void ShowYourName() const
	{
		cout << "name: " << name << endl;
	}

	virtual int GetPay() const = 0; //���� �����Լ�
	
	virtual void ShowSalaryInfo() const = 0;
};

class PermanentWorker : public Employee  //������
{
private:
	int salary; //�� �޿�

public:
	PermanentWorker(char*name, int money): Employee(name), salary(money){}

	int GetPay() const
	{
		return salary;
	}

	void ShowSalaryInfo() const
	{	
		ShowYourName();
		cout << "salary: " << GetPay() << endl<<endl;
	}
};


class TemporaryWorker : public Employee //�ӽ��� - �޿�= �ð�* �ñ�
{
private:
	int workTime; //���ѽð�
	int payPerHour;  //�ð��� �޿�

public:
	TemporaryWorker(char* name, int pay) : Employee(name), workTime(0), payPerHour(pay){}
	void AddWorkTime(int time)
	{
		workTime += time;
	}
	int GetPay() const
	{
		return workTime * payPerHour;
	}
	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary: " << GetPay() << endl << endl; 

	}
};

class SalesWorker : public PermanentWorker //�������� ������ ���- �޿�= �⺻�޿�+ (�ǸŽ���* �󿩱ݺ���= �μ�Ƽ��)
{
private:
	int salesResult; //�� �ǸŽ���
	double bonusRatio; //�󿩱� ����

public:
	SalesWorker(char*name, int money, double ratio): PermanentWorker(name,money), salesResult(0), bonusRatio(ratio)
	{}

	void AddSalesResult(int value)
	{
		salesResult += value;
	}

	int GetPay() const
	{
		return PermanentWorker::GetPay() + (int)(salesResult * bonusRatio); //�⺻�޿�+ �μ�Ƽ��
	}

	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary: " << GetPay() << endl << endl; 
	}
};

namespace RISK_LEVEL
{
	enum { RISK_A = 30, RISK_B = 20, RISK_C = 30 };
}

class ForeignSalesWorker : public SalesWorker
{
private:
	const int riskLevel;
public:
	ForeignSalesWorker(char* name, int money, double ratio, int risk) : SalesWorker(name, money, ratio), riskLevel(risk)
	{}
	
	int GetRiskPay() const
	{
		return (int)(SalesWorker::GetPay() * (riskLevel / 100.0)); 
	}

	int GetPay() const
	{
		return SalesWorker::GetPay() + GetRiskPay();
	}

	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary: " << SalesWorker::GetPay() << endl;
		cout << "risk pay: " << GetRiskPay() << endl;
		cout << "sum: " << GetPay() << endl << endl;
	}

};

class EmployeeHandler //���� Ŭ����
{
private:
	Employee* empList[50];
	int empNum;

public:
	EmployeeHandler(): empNum(0){}
	void AddEmployee(Employee* emp)
	{
		empList[empNum++] = emp;
	}

	void ShowAllSalrayInfo() const
	{	
		for (int i = 0; i < empNum; i++)
		{
			empList[i]->ShowSalaryInfo();
		}
		
	}

	void ShowTotalSalary() const
	{
		int sum = 0;
		
		for(int i=0; i<empNum;i++)
			sum+=empList[i]->GetPay();
		
		cout << "salary sum: " << sum << endl;
	}

	~EmployeeHandler()
	{
		for (int i = 0; i < empNum; i++)
		{
			delete empList[i];
		}
	}

};

int main(void)
{
	//���� ������ �������� ����� ��Ʈ�� Ŭ�����ǰ�ü����
	EmployeeHandler handler;

	//������ ���;
	PermanentWorker* man = new PermanentWorker("KIM", 1000);
	handler.AddEmployee(man);
	
	
	//�ӽ��� ���
	TemporaryWorker* alba = new TemporaryWorker("Jung", 700);
	alba->AddWorkTime(5); //5�ð� ����
	handler.AddEmployee(alba);

	//������ ���
	SalesWorker* seller = new SalesWorker("Hong", 1000, 0.1);
	seller->AddSalesResult(7000); //���� ���� 
	handler.AddEmployee(seller);
	
	
	//�̹��޿� �����ؾ� �� �޿��� ����
	handler.ShowAllSalrayInfo();

	//�̹� �޿� �����ؾ� �� �޿��� ����
	handler.ShowTotalSalary();
	return 0;
}