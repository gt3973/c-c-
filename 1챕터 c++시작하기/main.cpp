//c와 c++도 전처리기 사용
//전처리기는 컴파일 하기 전에 소스 파일에 대해 미리 어떤 처리를 수행하는 프로그램
#include <iostream>
//#include <iostream.h>


//네임스페이스(namespace) - c++ 새로운 기능
//공간정의 이름 정의  java의 패키지 와 비슷
//iostream.h 대신 iostream을 사용할 때 다음과 같은 이름 공간 지시자를 사용해야 한다.
using namespace std;

//피호출 함수 호출 함수
//main()를 호출하는 부분이  프로그램에 없음
//main()은 프로그램(c++)과 운영 체제를 중개 하기 위해 컴파일러가 프로그램에 추가하는 시동 코드에 의해 호출
//따라서 함수 머리는  main() 과 운영 체제 사이의 인터페이스를 나타낸다

void three();
void See();

int CtoF(int Celsius);
double AstronomicalUnit(double lightYear);
void clock(int a, int b);

int //화이트 스페이스 캐리지 리턴 //화이트 스페이스는 빈칸 캐리지 리턴을 서로 바꾸어서 사용해도됨
main()//화이트 스페이스 빈칸   //int a = sqrt(6.25);  // sqrt(6.25) 함수 호출 -> sqrt() 피호출 함수 ->main() 안에서 sqrt() main를 호출 함수
{
	//헬로 월드
	//int num = 20; //정의 , 대입
	//컴파일러는 그 변수를 위해 메모리 공간을 대입한다. 
	//*참조 선언 구문이라는 것도 있다. 어딘가 다른 곳에서 이미 정의된 변수를 사용할 수 있도록 허용한다.

	//cout이란 문자열(string),수(number),문자(character)들을 포함한 여러가지 다양한 정보들을 출력하는 방법을 알고있는 
	//미리정의된 객체 이다.
	std::cout << "Hello World!" << std::endl;
	int asd;
	int * a = &asd;


	//std::cout << "Hello" << "world!"<< std::endl;
	//std::cout << num<<"Hello World!" << std::endl;
	//std::cout << ' ' << 3.14 << std::endl;
	//std::cin.get();

	//5가지 수 입력 + 출력
	//int a = 0;
	//
	//for (int i = 0; i < 5; i++)
	//{
	//	int num;
	//	std::cin >> num;
	//	a += num;
	//}

	//이름과 전화번호 입력 출력
	//int num; char name[10];
	//
	//cin >> name;
	//cin >> num;
	//
	//cout << num << " " << name << endl;

	//std::cout << a << std::endl;

	//구구단
	int num = 1;
	//cin >> num;
	//for (int i = 1; i <= 9; i++)
	//{
	//	cout << num * i << endl;
	//}

	
	//-1이 입력하기전 급여 계산 while문
	//while (num != -1)
	//{
	//	int number = 50;
	//	cin >> num;
	//	cout << "이번달 급여 :" << number + num * 0.12f << endl;
	//}

	//-1이 입력하기전 급여 계산 for 문
	//int q = 0;
	//for (int i = 0; i <= num; i++)
	//{
	//	num++;
	//	int number = 50;
	//	cin >> q;
	//	if (q == -1)
	//	{
	//		break;
	//	}
	//	cout << "이번달 급여 :" << number + q * 0.12f << endl;
	//}


	/////////
	
	//이름과 주소를 출력하는 c++프로그램
	//int ab = 0;
	//char d[10];
	//std::cin >> ab >> d;
	//
	//cout << d << ab << endl;

	//거리에 대해 마일 단위 입력을 요구하고 킬로미터로 단위를 환산하는 프로젝트
	//int distance;
	//
	//cin >> distance;
	//cout << distance * 1.60934 << endl;

	//실행 결과가 다음과 같은 프로그램 작성 main를 사용한 세개의 사용자 정의함수 사용 
	//three(); 
	//three();
	//See();
	//See();

	//사용자 본인 이름을 입력하도록 하고 나이와 월수를 나타내도록하자
	//const char* name = "YoonGiseong";
	////cin >> name;
	//char nname[20];
	//cin >> nname;
	//int age = 28;
	//
	//cout << nname << ": " << age << age * 12 << endl;

	//섭씨 온도를 매개변수로 전달 받아 화씨 온도로 환산하여 리턴하는 사용자 정의 함수를 main() 함수가 호출하는 프로그램 작성
	//섭씨 온도를 입력하고  Enter 키를 누르십시오:  20
	//섭씨 20도는 화씨로 68도 입니다.
	//int Celsius;
	//cout << "섭씨 온도를 입력하고 Enter 키를 누르십시오 : ";
	//cin >> Celsius;
	//
	//cout << "섭씨" << Celsius << "도는 화씨로 " << CtoF(Celsius) << "도 입니다." << endl;

	//거리를 매개변수로 전달 받아 천문 단위로 환산 하여 리턴하는 사용자 정의 함수 작성
	//double lightyear;
	//cout << "광년 수를 입력하고 Enter 키를 누르십시오 : ";
	//cin >> lightyear;
	//cout << lightyear << " 광년은 " << AstronomicalUnit(lightyear) << "천문 단위입니다." << endl;

	//시간 값과 분 값의 입력을 사용자에게 요청 하는 프로그램
	int c, b;
	cout << "시간 값을 입력하시오 : ";
	cin >> c;
	cout << "분 값을 입력하시오 : ";
	cin >> b;
	clock(c, b);
	cin.get();


	return 0;
}

void three()
{
	cout << "Three blind mice" << endl;
}

void See()
{
	cout << "See how thry run" << endl;
}

int CtoF(int Celsius)
{
	int Fahrenheit = 1.8 * Celsius + 32.0;
	return Fahrenheit;
}

double AstronomicalUnit(double lightYear)
{
	double AU;
	AU = lightYear * 63240;
	return AU;
}

void clock(int a, int b)
{
	cout << "시각 : " << a << " : " << b << endl;
}



//요약 
/*
C++프로그램은 함수라고 부르는 하나 또는 그 이상의 모듈들로 이루어진다.

프로그램은 main()이라는 함수 부터 실행이 시작된다.(무족건 main()함수 하나 존재)

함수는 함수 머리 함수 몸체로 이루어진다.
머리는 함수가 어떤 데이터형의 값을 리턴하고 어떤 데이터형 정보를 매개변수로 받는지 나타낸다
몸체는 {}로 둘러 싸인 c++ 구문들로 이루어진다.

클래스는 사용자가 정의하는 데이터 형식이다.
클래스에는 정보를 어떻게 표현할 것이며 그 정보를 대상으로 수행할 수 있는 동작은 무엇인지가 함께 정의된다.
간단한 변수를 생성하는 것과 마친가지로 , 객체는 클래스의 속성을 사용하여 실제로 생성하는 구체물이다.

c++에서는 입출력에 cin과 cout이라는 두 개의 미리 정의된 객체를 사용한다.
istream ostream 클래스의 속성으로 생성된 객체
iostream파일에 정의되어있다.
이 클래스들은 입력과 출력을 연속된 문자들의 스트림(stream)이라고 간주한다.
삽입 연산자(<<)는 ostream클래스에 정의 되어 있으며 데이터를 출력 스트림에 삽입한다.
추출 연산자(>>)는 istream클래스에 정의되어 있으며 입력 스트림으로부터 정보를 추출한다.
영리한 객체이기 때문에 문맥에 따라 한 형식을 다른 형식으로 자동으로 변환할 수 있다.

c++은 방대한 양의 c 라이브러리 함수를 사용할 수 있다.
사용하려면 헤더 파일을 프로그램에 포함시켜야 한다 #include



*/