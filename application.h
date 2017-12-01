#include <string>

class Application
{
public:
    Application();
    void run();

private:
	void print(std::string str);
private:
    std::string m_string;
};
