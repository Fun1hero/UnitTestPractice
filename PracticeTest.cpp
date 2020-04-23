/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};


// isPalindrome
TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("aa");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_complex_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("aAcllallcAa");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_complex_falty_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("aAcllcallcAa");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_special_char_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome(" a ");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_more_special_char_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome(" ++a--a++ ");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_more_special_char_falty_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome(" ++a-0&-a++ ");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_extra_leading_space_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome(" a");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_extra_trailing_space_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("a ");
    ASSERT_TRUE(actual);
}


// sortDescending
TEST(PracticeTest, is_sorted_descending)
{
	int a = 2, b = 6, c = 9;

    Practice obj;
    obj.sortDescending(a, b, c);
	
	ASSERT_EQ(a, 9);
	ASSERT_EQ(b, 6);
	ASSERT_EQ(c, 2);
}

TEST(PracticeTest, is_sorted_not_changed_descending)
{
	int a = 9, b = 6, c = 1;

    Practice obj;
	obj.sortDescending(a, b, c);
	
	ASSERT_EQ(a, 9);
	ASSERT_EQ(b, 6);
	ASSERT_EQ(c, 1);
}