#include <string>
#include <cstdio>
#include <fstream>
#include <map>
#include <iostream>

using std::string;
using std::map;

#define FUNCDEF 0x1

#define NOP 0x0

struct QylHeader {
	
};

struct QylFunction {
	string Name;
	int Start;
	int End;
};

class Runner {
	string src;

	void Read(char* buf, int count) {
		for (int i = 0; i <= count; i++) {
			buf[i] = src[Position++];
		}
	}

	public:

	int Position;

	QylHeader Header;
	map<string, QylFunction> Functions;

	Runner(string file) {
		FILE* fp = fopen(file.c_str(), "r");

		string name;

		char bytebuf[1];

		int cnt = fread(bytebuf, 1, 1, fp);

		while (cnt > 0) {
			src += bytebuf[0];

			cnt = fread(bytebuf, 1, 1, fp);
		}

		Position = 0;

		char byte = src[Position++];

		while (byte != NOP) {
			if (byte == FUNCDEF) {
				QylFunction func;

				string name;

				while (src[Position] != '\0') {
					name += src[Position++];
				}

				Position++;

				func.Start = *((int*) &src[Position]);
				Position += 4;
				func.End = *((int*) &src[Position]);
				Position += 4;

				Functions.emplace(name, func);
			}

			byte = src[Position++];
		}
	}
};

class Generator {
	public:
	std::ofstream Out;

	void WriteString(string str) {
		Out.write(str.c_str(), str.length() + 1);
	}

	void WriteInt(int num) {
		Out.write((char*) new int [1] { num }, 4);
	}

	void WriteByte(char byte) {
		Out.write(new char[1] { byte }, 1);
	}

	void WriteHeader() {
		WriteByte(FUNCDEF);
		WriteString("Test");
		WriteInt(10);
		WriteInt(20);
		WriteByte(FUNCDEF);
		WriteString("Test2");
		WriteInt(100);
		WriteInt(200);
		WriteByte(NOP);
	}

	void Close() {
		Out.close();
	}

	Generator(string file) {
		Out	= std::ofstream(file, std::ofstream::binary);
	}
};