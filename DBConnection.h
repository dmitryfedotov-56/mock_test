	#pragma once
	/***********************************************************/
	/*                    DBConnection Definition              */
	/***********************************************************/

	class DBConnection {
	public:
		virtual void open() = 0;
		virtual void close() = 0;
		virtual void execQuery(const char* query) = 0;

		DBConnection() {};
		~DBConnection() {};
	};

	/***********************************************************/

