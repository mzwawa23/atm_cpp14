#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("/ATM_Cpp14/src/ATM.cxx");
CPPTEST_TEST_SUITE_INCLUDED_TO("/ATM_Cpp14/src/ATM.cxx");

class TestSuite_ATM_cxx_a1e971d1 : public CppTest_TestSuite
{
    public:
        CPPTEST_TEST_SUITE(TestSuite_ATM_cxx_a1e971d1);
        CPPTEST_TEST_SUITE_SETUP(testSuiteSetUp);
        CPPTEST_TEST(test_ATM_1);
        CPPTEST_TEST(test_ATM_2);
        CPPTEST_TEST(test_ATM_3);
        CPPTEST_TEST(test_ATM_4);
        CPPTEST_TEST(test_fillUserRequest_1);
        CPPTEST_TEST(test_fillUserRequest_10);
        CPPTEST_TEST(test_fillUserRequest_2);
        CPPTEST_TEST(test_fillUserRequest_3);
        CPPTEST_TEST(test_fillUserRequest_4);
        CPPTEST_TEST(test_fillUserRequest_5);
        CPPTEST_TEST(test_fillUserRequest_6);
        CPPTEST_TEST(test_fillUserRequest_7);
        CPPTEST_TEST(test_fillUserRequest_8);
        CPPTEST_TEST(test_fillUserRequest_9);
        CPPTEST_TEST(test_viewAccount_1);
        CPPTEST_TEST(test_viewAccount_10);
        CPPTEST_TEST(test_viewAccount_2);
        CPPTEST_TEST(test_viewAccount_3);
        CPPTEST_TEST(test_viewAccount_4);
        CPPTEST_TEST(test_viewAccount_5);
        CPPTEST_TEST(test_viewAccount_6);
        CPPTEST_TEST(test_viewAccount_7);
        CPPTEST_TEST(test_viewAccount_8);
        CPPTEST_TEST(test_viewAccount_9);
        CPPTEST_TEST_SUITE_TEARDOWN(testSuiteTearDown);
        CPPTEST_TEST_SUITE_END();
        
        static void testSuiteSetUp();
        static void testSuiteTearDown();

        void setUp();
        void tearDown();

        void test_ATM_1();
        void test_ATM_2();
        void test_ATM_3();
        void test_ATM_4();
        void test_fillUserRequest_1();
        void test_fillUserRequest_10();
        void test_fillUserRequest_2();
        void test_fillUserRequest_3();
        void test_fillUserRequest_4();
        void test_fillUserRequest_5();
        void test_fillUserRequest_6();
        void test_fillUserRequest_7();
        void test_fillUserRequest_8();
        void test_fillUserRequest_9();
        void test_viewAccount_1();
        void test_viewAccount_10();
        void test_viewAccount_2();
        void test_viewAccount_3();
        void test_viewAccount_4();
        void test_viewAccount_5();
        void test_viewAccount_6();
        void test_viewAccount_7();
        void test_viewAccount_8();
        void test_viewAccount_9();
};

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_ATM_cxx_a1e971d1);

void TestSuite_ATM_cxx_a1e971d1::testSuiteSetUp()
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_ATM_cxx_a1e971d1::testSuiteTearDown()
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_ATM_cxx_a1e971d1::setUp()
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_ATM_cxx_a1e971d1::tearDown()
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}

/* CPPTEST_TEST_CASE_BEGIN test_ATM_1 */
/* CPPTEST_TEST_CASE_CONTEXT ATM::ATM(Bank *, BaseDisplay *) */
void TestSuite_ATM_cxx_a1e971d1::test_ATM_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (bank) */ 
    ::Bank * _bank  = 0 ;
    /* Initializing argument 2 (display) */ 
    ::BaseDisplay * _display  = 0 ;
    /* Testing constructor. */
    ::ATM _return(_bank, _display);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _return.myCurrentAccount ", ( _return.myCurrentAccount ));
    CPPTEST_POST_CONDITION_PTR("Bank * _return.myBank ", ( _return.myBank ));
    CPPTEST_POST_CONDITION_PTR("BaseDisplay * _return.myDisplay ", ( _return.myDisplay ));
    CPPTEST_POST_CONDITION_PTR("Bank * _bank ", ( _bank ));
    CPPTEST_POST_CONDITION_PTR("BaseDisplay * _display ", ( _display ));
}
/* CPPTEST_TEST_CASE_END test_ATM_1 */

/* CPPTEST_TEST_CASE_BEGIN test_ATM_2 */
/* CPPTEST_TEST_CASE_CONTEXT ATM::ATM(Bank *, BaseDisplay *) */
void TestSuite_ATM_cxx_a1e971d1::test_ATM_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (bank) */ 
    ::Bank _bank_0 ;
    ::Bank * _bank  = & _bank_0;
    /* Initializing argument 2 (display) */ 
    ::BaseDisplay * _display  = 0 ;
    /* Testing constructor. */
    ::ATM _return(_bank, _display);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _return.myCurrentAccount ", ( _return.myCurrentAccount ));
    CPPTEST_POST_CONDITION_PTR("Bank * _return.myBank ", ( _return.myBank ));
    CPPTEST_POST_CONDITION_PTR("BaseDisplay * _return.myDisplay ", ( _return.myDisplay ));
    CPPTEST_POST_CONDITION_PTR("Bank * _bank ", ( _bank ));
    CPPTEST_POST_CONDITION_PTR("BaseDisplay * _display ", ( _display ));
}
/* CPPTEST_TEST_CASE_END test_ATM_2 */

/* CPPTEST_TEST_CASE_BEGIN test_ATM_3 */
/* CPPTEST_TEST_CASE_CONTEXT ATM::ATM(Bank *, BaseDisplay *) */
void TestSuite_ATM_cxx_a1e971d1::test_ATM_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (bank) */ 
    ::Bank * _bank  = 0 ;
    /* Initializing argument 2 (display) */ 
    ::BaseDisplay _display_0 ;
    ::BaseDisplay * _display  = & _display_0;
    /* Testing constructor. */
    ::ATM _return(_bank, _display);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _return.myCurrentAccount ", ( _return.myCurrentAccount ));
    CPPTEST_POST_CONDITION_PTR("Bank * _return.myBank ", ( _return.myBank ));
    CPPTEST_POST_CONDITION_PTR("BaseDisplay * _return.myDisplay ", ( _return.myDisplay ));
    CPPTEST_POST_CONDITION_PTR("Bank * _bank ", ( _bank ));
    CPPTEST_POST_CONDITION_PTR("BaseDisplay * _display ", ( _display ));
}
/* CPPTEST_TEST_CASE_END test_ATM_3 */

/* CPPTEST_TEST_CASE_BEGIN test_ATM_4 */
/* CPPTEST_TEST_CASE_CONTEXT ATM::ATM(Bank *, BaseDisplay *) */
void TestSuite_ATM_cxx_a1e971d1::test_ATM_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (bank) */ 
    ::Bank _bank_0 ;
    ::Bank * _bank  = & _bank_0;
    /* Initializing argument 2 (display) */ 
    ::BaseDisplay _display_1 ;
    ::BaseDisplay * _display  = & _display_1;
    /* Testing constructor. */
    ::ATM _return(_bank, _display);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _return.myCurrentAccount ", ( _return.myCurrentAccount ));
    CPPTEST_POST_CONDITION_PTR("Bank * _return.myBank ", ( _return.myBank ));
    CPPTEST_POST_CONDITION_PTR("BaseDisplay * _return.myDisplay ", ( _return.myDisplay ));
    CPPTEST_POST_CONDITION_PTR("Bank * _bank ", ( _bank ));
    CPPTEST_POST_CONDITION_PTR("BaseDisplay * _display ", ( _display ));
}
/* CPPTEST_TEST_CASE_END test_ATM_4 */

/* CPPTEST_TEST_CASE_BEGIN test_fillUserRequest_1 */
/* CPPTEST_TEST_CASE_CONTEXT void ATM::fillUserRequest(UserRequest, double) */
void TestSuite_ATM_cxx_a1e971d1::test_fillUserRequest_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (bank) */ 
        ::Bank * _bank_0  = 0 ;
        /* Initializing constructor argument 2 (display) */ 
        ::BaseDisplay * _display_0  = 0 ;
    ::ATM _cpptest_TestObject (_bank_0, _display_0);

    /* Initializing argument 1 (request) */ 
    ::UserRequest _request  = ::UserRequest::REQUEST_INVALID;
    /* Initializing argument 2 (amount) */ 
    double _amount  = -1.0;
    /* Tested function call */
    _cpptest_TestObject.fillUserRequest(_request, _amount);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _cpptest_TestObject.myCurrentAccount ", ( _cpptest_TestObject.myCurrentAccount ));
    CPPTEST_POST_CONDITION_PTR("Bank * _cpptest_TestObject.myBank ", ( _cpptest_TestObject.myBank ));
    CPPTEST_POST_CONDITION_PTR("BaseDisplay * _cpptest_TestObject.myDisplay ", ( _cpptest_TestObject.myDisplay ));
}
/* CPPTEST_TEST_CASE_END test_fillUserRequest_1 */

/* CPPTEST_TEST_CASE_BEGIN test_fillUserRequest_10 */
// @REQ REQ-123, REQ-345
/* CPPTEST_TEST_CASE_CONTEXT void ATM::fillUserRequest(UserRequest, double) */
void TestSuite_ATM_cxx_a1e971d1::test_fillUserRequest_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (bank) */ 
        ::Bank * _bank_0  = 0 ;
        /* Initializing constructor argument 2 (display) */ 
        ::BaseDisplay * _display_0  = 0 ;
    ::ATM _cpptest_TestObject (_bank_0, _display_0);

    /* Initializing argument 1 (request) */ 
    ::UserRequest _request  = ::UserRequest::REQUEST_BALANCE;
    /* Initializing argument 2 (amount) */ 
    double _amount  = cpptestLimitsGetMaxNegDouble();
    /* Tested function call */
    _cpptest_TestObject.fillUserRequest(_request, _amount);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _cpptest_TestObject.myCurrentAccount ", ( _cpptest_TestObject.myCurrentAccount ));
    CPPTEST_POST_CONDITION_PTR("Bank * _cpptest_TestObject.myBank ", ( _cpptest_TestObject.myBank ));
    CPPTEST_POST_CONDITION_PTR("BaseDisplay * _cpptest_TestObject.myDisplay ", ( _cpptest_TestObject.myDisplay ));
}
/* CPPTEST_TEST_CASE_END test_fillUserRequest_10 */

/* CPPTEST_TEST_CASE_BEGIN test_fillUserRequest_2 */
/* CPPTEST_TEST_CASE_CONTEXT void ATM::fillUserRequest(UserRequest, double) */
void TestSuite_ATM_cxx_a1e971d1::test_fillUserRequest_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (bank) */ 
        ::Bank _bank_0_1 ;
        ::Bank * _bank_0  = & _bank_0_1;
        /* Initializing constructor argument 2 (display) */ 
        ::BaseDisplay * _display_0  = 0 ;
    ::ATM _cpptest_TestObject (_bank_0, _display_0);

    /* Initializing argument 1 (request) */ 
    ::UserRequest _request  = ::UserRequest::REQUEST_INVALID;
    /* Initializing argument 2 (amount) */ 
    double _amount  = -1.0;
    /* Tested function call */
    _cpptest_TestObject.fillUserRequest(_request, _amount);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _cpptest_TestObject.myCurrentAccount ", ( _cpptest_TestObject.myCurrentAccount ));
    CPPTEST_POST_CONDITION_PTR("Bank * _cpptest_TestObject.myBank ", ( _cpptest_TestObject.myBank ));
    CPPTEST_POST_CONDITION_PTR("BaseDisplay * _cpptest_TestObject.myDisplay ", ( _cpptest_TestObject.myDisplay ));
}
/* CPPTEST_TEST_CASE_END test_fillUserRequest_2 */

/* CPPTEST_TEST_CASE_BEGIN test_fillUserRequest_3 */
// @REQ REQ-345
/* CPPTEST_TEST_CASE_CONTEXT void ATM::fillUserRequest(UserRequest, double) */
void TestSuite_ATM_cxx_a1e971d1::test_fillUserRequest_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (bank) */ 
        ::Bank * _bank_0  = 0 ;
        /* Initializing constructor argument 2 (display) */ 
        ::BaseDisplay * _display_0  = 0 ;
    ::ATM _cpptest_TestObject (_bank_0, _display_0);

    /* Initializing argument 1 (request) */ 
    ::UserRequest _request  = ::UserRequest::REQUEST_TRANSACTIONS;
    /* Initializing argument 2 (amount) */ 
    double _amount  = -1.0;
    /* Tested function call */
    _cpptest_TestObject.fillUserRequest(_request, _amount);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _cpptest_TestObject.myCurrentAccount ", ( _cpptest_TestObject.myCurrentAccount ));
    CPPTEST_POST_CONDITION_PTR("Bank * _cpptest_TestObject.myBank ", ( _cpptest_TestObject.myBank ));
    CPPTEST_POST_CONDITION_PTR("BaseDisplay * _cpptest_TestObject.myDisplay ", ( _cpptest_TestObject.myDisplay ));
}
/* CPPTEST_TEST_CASE_END test_fillUserRequest_3 */

/* CPPTEST_TEST_CASE_BEGIN test_fillUserRequest_4 */
/* CPPTEST_TEST_CASE_CONTEXT void ATM::fillUserRequest(UserRequest, double) */
void TestSuite_ATM_cxx_a1e971d1::test_fillUserRequest_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (bank) */ 
        ::Bank _bank_0_1 ;
        ::Bank * _bank_0  = & _bank_0_1;
        /* Initializing constructor argument 2 (display) */ 
        ::BaseDisplay _display_0_2 ;
        ::BaseDisplay * _display_0  = & _display_0_2;
    ::ATM _cpptest_TestObject (_bank_0, _display_0);

    /* Initializing argument 1 (request) */ 
    ::UserRequest _request  = ::UserRequest::REQUEST_DEPOSIT;
    /* Initializing argument 2 (amount) */ 
    double _amount  = 1.0;
    /* Tested function call */
    _cpptest_TestObject.fillUserRequest(_request, _amount);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _cpptest_TestObject.myCurrentAccount ", ( _cpptest_TestObject.myCurrentAccount ));
    CPPTEST_POST_CONDITION_PTR("Bank * _cpptest_TestObject.myBank ", ( _cpptest_TestObject.myBank ));
    CPPTEST_POST_CONDITION_PTR("BaseDisplay * _cpptest_TestObject.myDisplay ", ( _cpptest_TestObject.myDisplay ));
}
/* CPPTEST_TEST_CASE_END test_fillUserRequest_4 */

/* CPPTEST_TEST_CASE_BEGIN test_fillUserRequest_5 */
/* CPPTEST_TEST_CASE_CONTEXT void ATM::fillUserRequest(UserRequest, double) */
void TestSuite_ATM_cxx_a1e971d1::test_fillUserRequest_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (bank) */ 
        ::Bank * _bank_0  = 0 ;
        /* Initializing constructor argument 2 (display) */ 
        ::BaseDisplay _display_0_1 ;
        ::BaseDisplay * _display_0  = & _display_0_1;
    ::ATM _cpptest_TestObject (_bank_0, _display_0);

    /* Initializing argument 1 (request) */ 
    ::UserRequest _request  = ::UserRequest::REQUEST_BALANCE;
    /* Initializing argument 2 (amount) */ 
    double _amount  = 0.0;
    /* Tested function call */
    _cpptest_TestObject.fillUserRequest(_request, _amount);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _cpptest_TestObject.myCurrentAccount ", ( _cpptest_TestObject.myCurrentAccount ));
    CPPTEST_POST_CONDITION_PTR("Bank * _cpptest_TestObject.myBank ", ( _cpptest_TestObject.myBank ));
    CPPTEST_POST_CONDITION_PTR("BaseDisplay * _cpptest_TestObject.myDisplay ", ( _cpptest_TestObject.myDisplay ));
}
/* CPPTEST_TEST_CASE_END test_fillUserRequest_5 */

/* CPPTEST_TEST_CASE_BEGIN test_fillUserRequest_6 */
// @REQ REQ-123, REQ-345
/* CPPTEST_TEST_CASE_CONTEXT void ATM::fillUserRequest(UserRequest, double) */
void TestSuite_ATM_cxx_a1e971d1::test_fillUserRequest_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (bank) */ 
        ::Bank _bank_0_1 ;
        ::Bank * _bank_0  = & _bank_0_1;
        /* Initializing constructor argument 2 (display) */ 
        ::BaseDisplay * _display_0  = 0 ;
    ::ATM _cpptest_TestObject (_bank_0, _display_0);

    /* Initializing argument 1 (request) */ 
    ::UserRequest _request  = ::UserRequest::REQUEST_INVALID;
    /* Initializing argument 2 (amount) */ 
    double _amount  = cpptestLimitsGetMinPosDouble();
    /* Tested function call */
    _cpptest_TestObject.fillUserRequest(_request, _amount);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _cpptest_TestObject.myCurrentAccount ", ( _cpptest_TestObject.myCurrentAccount ));
    CPPTEST_POST_CONDITION_PTR("Bank * _cpptest_TestObject.myBank ", ( _cpptest_TestObject.myBank ));
    CPPTEST_POST_CONDITION_PTR("BaseDisplay * _cpptest_TestObject.myDisplay ", ( _cpptest_TestObject.myDisplay ));
}
/* CPPTEST_TEST_CASE_END test_fillUserRequest_6 */

/* CPPTEST_TEST_CASE_BEGIN test_fillUserRequest_7 */
/* CPPTEST_TEST_CASE_CONTEXT void ATM::fillUserRequest(UserRequest, double) */
void TestSuite_ATM_cxx_a1e971d1::test_fillUserRequest_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (bank) */ 
        ::Bank * _bank_0  = 0 ;
        /* Initializing constructor argument 2 (display) */ 
        ::BaseDisplay * _display_0  = 0 ;
    ::ATM _cpptest_TestObject (_bank_0, _display_0);

    /* Initializing argument 1 (request) */ 
    ::UserRequest _request  = ::UserRequest::REQUEST_TRANSACTIONS;
    /* Initializing argument 2 (amount) */ 
    double _amount  = cpptestLimitsGetMinPosDouble();
    /* Tested function call */
    _cpptest_TestObject.fillUserRequest(_request, _amount);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _cpptest_TestObject.myCurrentAccount ", ( _cpptest_TestObject.myCurrentAccount ));
    CPPTEST_POST_CONDITION_PTR("Bank * _cpptest_TestObject.myBank ", ( _cpptest_TestObject.myBank ));
    CPPTEST_POST_CONDITION_PTR("BaseDisplay * _cpptest_TestObject.myDisplay ", ( _cpptest_TestObject.myDisplay ));
}
/* CPPTEST_TEST_CASE_END test_fillUserRequest_7 */

/* CPPTEST_TEST_CASE_BEGIN test_fillUserRequest_8 */
/* CPPTEST_TEST_CASE_CONTEXT void ATM::fillUserRequest(UserRequest, double) */
void TestSuite_ATM_cxx_a1e971d1::test_fillUserRequest_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (bank) */ 
        ::Bank * _bank_0  = 0 ;
        /* Initializing constructor argument 2 (display) */ 
        ::BaseDisplay * _display_0  = 0 ;
    ::ATM _cpptest_TestObject (_bank_0, _display_0);

    /* Initializing argument 1 (request) */ 
    ::UserRequest _request  = ::UserRequest::REQUEST_WITHDRAW;
    /* Initializing argument 2 (amount) */ 
    double _amount  = cpptestLimitsGetMaxPosDouble();
    /* Tested function call */
    _cpptest_TestObject.fillUserRequest(_request, _amount);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _cpptest_TestObject.myCurrentAccount ", ( _cpptest_TestObject.myCurrentAccount ));
    CPPTEST_POST_CONDITION_PTR("Bank * _cpptest_TestObject.myBank ", ( _cpptest_TestObject.myBank ));
    CPPTEST_POST_CONDITION_PTR("BaseDisplay * _cpptest_TestObject.myDisplay ", ( _cpptest_TestObject.myDisplay ));
}
/* CPPTEST_TEST_CASE_END test_fillUserRequest_8 */

/* CPPTEST_TEST_CASE_BEGIN test_fillUserRequest_9 */
/* CPPTEST_TEST_CASE_CONTEXT void ATM::fillUserRequest(UserRequest, double) */
void TestSuite_ATM_cxx_a1e971d1::test_fillUserRequest_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (bank) */ 
        ::Bank * _bank_0  = 0 ;
        /* Initializing constructor argument 2 (display) */ 
        ::BaseDisplay * _display_0  = 0 ;
    ::ATM _cpptest_TestObject (_bank_0, _display_0);

    /* Initializing argument 1 (request) */ 
    ::UserRequest _request  = ::UserRequest::REQUEST_DEPOSIT;
    /* Initializing argument 2 (amount) */ 
    double _amount  = cpptestLimitsGetMinNegDouble();
    /* Tested function call */
    _cpptest_TestObject.fillUserRequest(_request, _amount);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _cpptest_TestObject.myCurrentAccount ", ( _cpptest_TestObject.myCurrentAccount ));
    CPPTEST_POST_CONDITION_PTR("Bank * _cpptest_TestObject.myBank ", ( _cpptest_TestObject.myBank ));
    CPPTEST_POST_CONDITION_PTR("BaseDisplay * _cpptest_TestObject.myDisplay ", ( _cpptest_TestObject.myDisplay ));
}
/* CPPTEST_TEST_CASE_END test_fillUserRequest_9 */

/* CPPTEST_TEST_CASE_BEGIN test_viewAccount_1 */
/* CPPTEST_TEST_CASE_CONTEXT void ATM::viewAccount(int, std::string) */
void TestSuite_ATM_cxx_a1e971d1::test_viewAccount_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (bank) */ 
        ::Bank * _bank_0  = 0 ;
        /* Initializing constructor argument 2 (display) */ 
        ::BaseDisplay * _display_0  = 0 ;
    ::ATM _cpptest_TestObject (_bank_0, _display_0);

    /* Initializing argument 1 (accountNumber) */ 
    int _accountNumber  = -1;
    /* Initializing argument 2 (password) */ 
    ::std::string _password  = "";
    /* Tested function call */
    _cpptest_TestObject.viewAccount(_accountNumber, _password);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _cpptest_TestObject.myCurrentAccount ", ( _cpptest_TestObject.myCurrentAccount ));
    CPPTEST_POST_CONDITION_PTR("Bank * _cpptest_TestObject.myBank ", ( _cpptest_TestObject.myBank ));
    CPPTEST_POST_CONDITION_PTR("BaseDisplay * _cpptest_TestObject.myDisplay ", ( _cpptest_TestObject.myDisplay ));
}
/* CPPTEST_TEST_CASE_END test_viewAccount_1 */

/* CPPTEST_TEST_CASE_BEGIN test_viewAccount_10 */
// @REQ REQ-123, REQ-987
/* CPPTEST_TEST_CASE_CONTEXT void ATM::viewAccount(int, std::string) */
void TestSuite_ATM_cxx_a1e971d1::test_viewAccount_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (bank) */ 
        ::Bank _bank_0_1 ;
        ::Bank * _bank_0  = & _bank_0_1;
        /* Initializing constructor argument 2 (display) */ 
        ::BaseDisplay _display_0_2 ;
        ::BaseDisplay * _display_0  = & _display_0_2;
    ::ATM _cpptest_TestObject (_bank_0, _display_0);

    /* Initializing argument 1 (accountNumber) */ 
    int _accountNumber  = 0;
    /* Initializing argument 2 (password) */ 
    ::std::string _password  = "Invalid account";
    /* Tested function call */
    _cpptest_TestObject.viewAccount(_accountNumber, _password);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _cpptest_TestObject.myCurrentAccount ", ( _cpptest_TestObject.myCurrentAccount ));
    CPPTEST_POST_CONDITION_PTR("Bank * _cpptest_TestObject.myBank ", ( _cpptest_TestObject.myBank ));
    CPPTEST_POST_CONDITION_PTR("BaseDisplay * _cpptest_TestObject.myDisplay ", ( _cpptest_TestObject.myDisplay ));
}
/* CPPTEST_TEST_CASE_END test_viewAccount_10 */

/* CPPTEST_TEST_CASE_BEGIN test_viewAccount_2 */
/* CPPTEST_TEST_CASE_CONTEXT void ATM::viewAccount(int, std::string) */
void TestSuite_ATM_cxx_a1e971d1::test_viewAccount_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (bank) */ 
        ::Bank _bank_0_1 ;
        ::Bank * _bank_0  = & _bank_0_1;
        /* Initializing constructor argument 2 (display) */ 
        ::BaseDisplay * _display_0  = 0 ;
    ::ATM _cpptest_TestObject (_bank_0, _display_0);

    /* Initializing argument 1 (accountNumber) */ 
    int _accountNumber  = -1;
    /* Initializing argument 2 (password) */ 
    ::std::string _password  = "";
    /* Tested function call */
    _cpptest_TestObject.viewAccount(_accountNumber, _password);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _cpptest_TestObject.myCurrentAccount ", ( _cpptest_TestObject.myCurrentAccount ));
    CPPTEST_POST_CONDITION_PTR("Bank * _cpptest_TestObject.myBank ", ( _cpptest_TestObject.myBank ));
    CPPTEST_POST_CONDITION_PTR("BaseDisplay * _cpptest_TestObject.myDisplay ", ( _cpptest_TestObject.myDisplay ));
}
/* CPPTEST_TEST_CASE_END test_viewAccount_2 */

/* CPPTEST_TEST_CASE_BEGIN test_viewAccount_3 */
/* CPPTEST_TEST_CASE_CONTEXT void ATM::viewAccount(int, std::string) */
void TestSuite_ATM_cxx_a1e971d1::test_viewAccount_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (bank) */ 
        ::Bank _bank_0_1 ;
        ::Bank * _bank_0  = & _bank_0_1;
        /* Initializing constructor argument 2 (display) */ 
        ::BaseDisplay * _display_0  = 0 ;
    ::ATM _cpptest_TestObject (_bank_0, _display_0);

    /* Initializing argument 1 (accountNumber) */ 
    int _accountNumber  = 0;
    /* Initializing argument 2 (password) */ 
    ::std::string _password  = "";
    /* Tested function call */
    _cpptest_TestObject.viewAccount(_accountNumber, _password);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _cpptest_TestObject.myCurrentAccount ", ( _cpptest_TestObject.myCurrentAccount ));
    CPPTEST_POST_CONDITION_PTR("Bank * _cpptest_TestObject.myBank ", ( _cpptest_TestObject.myBank ));
    CPPTEST_POST_CONDITION_PTR("BaseDisplay * _cpptest_TestObject.myDisplay ", ( _cpptest_TestObject.myDisplay ));
}
/* CPPTEST_TEST_CASE_END test_viewAccount_3 */

/* CPPTEST_TEST_CASE_BEGIN test_viewAccount_4 */
/* CPPTEST_TEST_CASE_CONTEXT void ATM::viewAccount(int, std::string) */
void TestSuite_ATM_cxx_a1e971d1::test_viewAccount_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (bank) */ 
        ::Bank _bank_0_1 ;
        ::Bank * _bank_0  = & _bank_0_1;
        /* Initializing constructor argument 2 (display) */ 
        ::BaseDisplay * _display_0  = 0 ;
    ::ATM _cpptest_TestObject (_bank_0, _display_0);

    /* Initializing argument 1 (accountNumber) */ 
    int _accountNumber  = cpptestLimitsGetMinInt();
    /* Initializing argument 2 (password) */ 
    ::std::string _password  = "";
    /* Tested function call */
    _cpptest_TestObject.viewAccount(_accountNumber, _password);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _cpptest_TestObject.myCurrentAccount ", ( _cpptest_TestObject.myCurrentAccount ));
    CPPTEST_POST_CONDITION_PTR("Bank * _cpptest_TestObject.myBank ", ( _cpptest_TestObject.myBank ));
    CPPTEST_POST_CONDITION_PTR("BaseDisplay * _cpptest_TestObject.myDisplay ", ( _cpptest_TestObject.myDisplay ));
}
/* CPPTEST_TEST_CASE_END test_viewAccount_4 */

/* CPPTEST_TEST_CASE_BEGIN test_viewAccount_5 */
/* CPPTEST_TEST_CASE_CONTEXT void ATM::viewAccount(int, std::string) */
void TestSuite_ATM_cxx_a1e971d1::test_viewAccount_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (bank) */ 
        ::Bank * _bank_0  = 0 ;
        /* Initializing constructor argument 2 (display) */ 
        ::BaseDisplay _display_0_1 ;
        ::BaseDisplay * _display_0  = & _display_0_1;
    ::ATM _cpptest_TestObject (_bank_0, _display_0);

    /* Initializing argument 1 (accountNumber) */ 
    int _accountNumber  = 1;
    /* Initializing argument 2 (password) */ 
    ::std::string _password  = "Hello world";
    /* Tested function call */
    _cpptest_TestObject.viewAccount(_accountNumber, _password);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _cpptest_TestObject.myCurrentAccount ", ( _cpptest_TestObject.myCurrentAccount ));
    CPPTEST_POST_CONDITION_PTR("Bank * _cpptest_TestObject.myBank ", ( _cpptest_TestObject.myBank ));
    CPPTEST_POST_CONDITION_PTR("BaseDisplay * _cpptest_TestObject.myDisplay ", ( _cpptest_TestObject.myDisplay ));
}
/* CPPTEST_TEST_CASE_END test_viewAccount_5 */

/* CPPTEST_TEST_CASE_BEGIN test_viewAccount_6 */
/* CPPTEST_TEST_CASE_CONTEXT void ATM::viewAccount(int, std::string) */
void TestSuite_ATM_cxx_a1e971d1::test_viewAccount_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (bank) */ 
        ::Bank _bank_0_1 ;
        ::Bank * _bank_0  = & _bank_0_1;
        /* Initializing constructor argument 2 (display) */ 
        ::BaseDisplay _display_0_2 ;
        ::BaseDisplay * _display_0  = & _display_0_2;
    ::ATM _cpptest_TestObject (_bank_0, _display_0);

    /* Initializing argument 1 (accountNumber) */ 
    int _accountNumber  = cpptestLimitsGetMaxInt();
    /* Initializing argument 2 (password) */ 
    ::std::string _password  = "Hello world";
    /* Tested function call */
    _cpptest_TestObject.viewAccount(_accountNumber, _password);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _cpptest_TestObject.myCurrentAccount ", ( _cpptest_TestObject.myCurrentAccount ));
    CPPTEST_POST_CONDITION_PTR("Bank * _cpptest_TestObject.myBank ", ( _cpptest_TestObject.myBank ));
    CPPTEST_POST_CONDITION_PTR("BaseDisplay * _cpptest_TestObject.myDisplay ", ( _cpptest_TestObject.myDisplay ));
}
/* CPPTEST_TEST_CASE_END test_viewAccount_6 */

/* CPPTEST_TEST_CASE_BEGIN test_viewAccount_7 */
/* CPPTEST_TEST_CASE_CONTEXT void ATM::viewAccount(int, std::string) */
void TestSuite_ATM_cxx_a1e971d1::test_viewAccount_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (bank) */ 
        ::Bank * _bank_0  = 0 ;
        /* Initializing constructor argument 2 (display) */ 
        ::BaseDisplay * _display_0  = 0 ;
    ::ATM _cpptest_TestObject (_bank_0, _display_0);

    /* Initializing argument 1 (accountNumber) */ 
    int _accountNumber  = 1;
    /* Initializing argument 2 (password) */ 
    ::std::string _password  = "A very long string that is supposed to contain more than 256 characters in length..................................................................................................................................................................................";
    /* Tested function call */
    _cpptest_TestObject.viewAccount(_accountNumber, _password);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _cpptest_TestObject.myCurrentAccount ", ( _cpptest_TestObject.myCurrentAccount ));
    CPPTEST_POST_CONDITION_PTR("Bank * _cpptest_TestObject.myBank ", ( _cpptest_TestObject.myBank ));
    CPPTEST_POST_CONDITION_PTR("BaseDisplay * _cpptest_TestObject.myDisplay ", ( _cpptest_TestObject.myDisplay ));
}
/* CPPTEST_TEST_CASE_END test_viewAccount_7 */

/* CPPTEST_TEST_CASE_BEGIN test_viewAccount_8 */
/* CPPTEST_TEST_CASE_CONTEXT void ATM::viewAccount(int, std::string) */
void TestSuite_ATM_cxx_a1e971d1::test_viewAccount_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (bank) */ 
        ::Bank _bank_0_1 ;
        ::Bank * _bank_0  = & _bank_0_1;
        /* Initializing constructor argument 2 (display) */ 
        ::BaseDisplay * _display_0  = 0 ;
    ::ATM _cpptest_TestObject (_bank_0, _display_0);

    /* Initializing argument 1 (accountNumber) */ 
    int _accountNumber  = cpptestLimitsGetMaxInt();
    /* Initializing argument 2 (password) */ 
    ::std::string _password  = "A very long string that is supposed to contain more than 256 characters in length..................................................................................................................................................................................";
    /* Tested function call */
    _cpptest_TestObject.viewAccount(_accountNumber, _password);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _cpptest_TestObject.myCurrentAccount ", ( _cpptest_TestObject.myCurrentAccount ));
    CPPTEST_POST_CONDITION_PTR("Bank * _cpptest_TestObject.myBank ", ( _cpptest_TestObject.myBank ));
    CPPTEST_POST_CONDITION_PTR("BaseDisplay * _cpptest_TestObject.myDisplay ", ( _cpptest_TestObject.myDisplay ));
}
/* CPPTEST_TEST_CASE_END test_viewAccount_8 */

/* CPPTEST_TEST_CASE_BEGIN test_viewAccount_9 */
/* CPPTEST_TEST_CASE_CONTEXT void ATM::viewAccount(int, std::string) */
void TestSuite_ATM_cxx_a1e971d1::test_viewAccount_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (bank) */ 
        ::Bank * _bank_0  = 0 ;
        /* Initializing constructor argument 2 (display) */ 
        ::BaseDisplay _display_0_1 ;
        ::BaseDisplay * _display_0  = & _display_0_1;
    ::ATM _cpptest_TestObject (_bank_0, _display_0);

    /* Initializing argument 1 (accountNumber) */ 
    int _accountNumber  = -1;
    /* Initializing argument 2 (password) */ 
    ::std::string _password  = "Invalid account";
    /* Tested function call */
    _cpptest_TestObject.viewAccount(_accountNumber, _password);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _cpptest_TestObject.myCurrentAccount ", ( _cpptest_TestObject.myCurrentAccount ));
    CPPTEST_POST_CONDITION_PTR("Bank * _cpptest_TestObject.myBank ", ( _cpptest_TestObject.myBank ));
    CPPTEST_POST_CONDITION_PTR("BaseDisplay * _cpptest_TestObject.myDisplay ", ( _cpptest_TestObject.myDisplay ));
}
/* CPPTEST_TEST_CASE_END test_viewAccount_9 */
