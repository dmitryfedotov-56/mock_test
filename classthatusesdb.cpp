/***********************************************************/
/*               ClassThatUsesDB Implementation            */
/***********************************************************/

#include "classthatusesdb.h"

void ClassThatUsesDB::openConnection() { connection->open(); };

void ClassThatUsesDB::closeConnection() { connection->close(); };

ClassThatUsesDB::ClassThatUsesDB(DBConnection* _connection) : connection(_connection) {};

void ClassThatUsesDB::useConnection()
{
	openConnection();
	connection->execQuery("command1");
	connection->execQuery("command2");
	connection->execQuery("command3");
	closeConnection();
};

/***********************************************************/
