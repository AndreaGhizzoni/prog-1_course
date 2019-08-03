#include <iostream>
#include <exception>

using namespace std;

class FileManager
{
	private:
		string path;



	public:
		FileManager( string, int );
		~FileManager();
};


FileManager::FileManager( string path, int mode )
{
	if( path.length() == 0 )
		throw( new exception() );
}


FileManager::~FileManager()
{


}