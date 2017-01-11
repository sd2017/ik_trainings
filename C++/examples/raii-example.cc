#include <iostream>

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

class FileWrapper
{
public:
	FileWrapper(const char* fname)
        : fd_(-1)
	{
		fd_ = open(fname, O_RDONLY);
		if (fd_ == -1) {
			throw "open failed";
		}
	}

	~FileWrapper()
	{
		if (fd_ != -1) {
			close(fd_);
		}
	}

public:
	void readFile()
	{
		char buffer[1024] = {0};

		while (read(fd_, &buffer, sizeof(buffer)) > 0) {
			std::cout << buffer;
		}
	}

	void closeFile()
	{
		close(fd_);
        fd_ = -1;
	}

private:
	int fd_;
    char* fname_;
};

void example_with_RAII()
{
	try {
		FileWrapper file("./echo.txt");
		file.readFile();
	} catch (const char* err) {
		std::cout << "catch exception" << err << std::endl;
	}
}

void example_without_RAII()
{
	int fd = open("./echo.txt", O_RDONLY);
	if (fd > 0) {
		char buffer[1024] = {0};

		while (read(fd, &buffer, sizeof(buffer)) > 0) {
			std::cout << buffer;
		}
		close(fd);
	} else {
		std::cout << "file not exist" << std::endl;
	}
}

int main()
{
	example_with_RAII();
	example_without_RAII();
}
