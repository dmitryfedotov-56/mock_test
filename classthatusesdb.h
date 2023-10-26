	#pragma once
	/***********************************************************/
	/*                 ClassThatUsesDB Definition              */
	/***********************************************************/

	#include "DBConnection.h"

	class ClassThatUsesDB {
	private:
		DBConnection* connection = nullptr;
	public:

		void openConnection();
		void useConnection();
		void closeConnection();

		ClassThatUsesDB(DBConnection* connection);
		~ClassThatUsesDB() {};
	};

	/***********************************************************/



