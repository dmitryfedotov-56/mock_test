	/***********************************************************/
	/*                    ClassThatUsesDB Test                 */
	/***********************************************************/

	#include <gtest/gtest.h>
	#include <gmock/gmock.h>
	#include "DBConnection.h"
	#include "classthatusesdb.h"

	/***********************************************************/

	class MockDBConnection : public DBConnection {
	public:
		MOCK_METHOD(void, open, (), (override));
		MOCK_METHOD(void, close, (), (override));
		MOCK_METHOD(void, execQuery, (const char* s), (override));
	};

	/***********************************************************/

	TEST(MyTest, test1)
	{
		MockDBConnection connection;
		EXPECT_CALL(connection, open).Times(1);
		EXPECT_CALL(connection, execQuery).Times(::testing::AtLeast(1));
		EXPECT_CALL(connection, close).Times(1);

		ClassThatUsesDB user(&connection);
		user.useConnection();
	};

	/***********************************************************/

	int main(int argc, char* argv[])
	{
		::testing::InitGoogleTest(&argc, argv);
		return RUN_ALL_TESTS();
	}

	/***********************************************************/