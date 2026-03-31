#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("/ATM_Cpp14/src/Account.cxx");
CPPTEST_TEST_SUITE_INCLUDED_TO("/ATM_Cpp14/src/Account.cxx");

class TestSuite_Account_cxx_15e9a265 : public CppTest_TestSuite
{
    public:
        CPPTEST_TEST_SUITE(TestSuite_Account_cxx_15e9a265);
        CPPTEST_TEST_SUITE_SETUP(testSuiteSetUp);
        CPPTEST_TEST_SUITE_TEARDOWN(testSuiteTearDown);
        CPPTEST_TEST(test_case_unknown_display);
        CPPTEST_TEST(test_case_secure_display);
        CPPTEST_TEST(test_case_desposit_operations);
        CPPTEST_TEST(test_case_manual);
        CPPTEST_TEST_SUITE_END();
        
        static void testSuiteSetUp();
        static void testSuiteTearDown();

        void setUp();
        void tearDown();

        void test_case_unknown_display();
        void test_case_secure_display();
        static void CppTest_StubCallback_test_case_secure_display_1_BaseDisplay_getType(CppTest_StubCallInfo* stubCallInfo, ::BaseDisplay::DisplayType* __return, ::BaseDisplay* __this);//CPPTEST_TEST_CASE_CALLBACK void test_case_secure_display();
        void test_case_desposit_operations();
        static void CppTest_StubCallback_test_case_desposit_operations_1_BaseDisplay_getType(CppTest_StubCallInfo* stubCallInfo, ::BaseDisplay::DisplayType* __return, ::BaseDisplay* __this);//CPPTEST_TEST_CASE_CALLBACK void test_case_desposit_operations();
        void test_case_manual();
};

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_Account_cxx_15e9a265);

void TestSuite_Account_cxx_15e9a265::testSuiteSetUp()
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_Account_cxx_15e9a265::testSuiteTearDown()
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_Account_cxx_15e9a265::setUp()
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_Account_cxx_15e9a265::tearDown()
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}

/* CPPTEST_TEST_CASE_BEGIN test_case_unknown_display */
// @REQ REQ-123
/* CPPTEST_TEST_CASE_CONTEXT int Account::listTransactions(BaseDisplay &, UserRequest) */
void TestSuite_Account_cxx_15e9a265::test_case_unknown_display()
{
/* CPPTEST_TEST_CASE_DATA_BEGIN */
#if 0

<?xml version="1.0" encoding="UTF-8" standalone="no"?>
<testcase>
    <metadata/>
    <steps>
        <step id="MultiVariableStep" uid="0" version="1">
            <step id="VariableStep" version="1">
                <name>_cpptest_TestObject</name>
                <type>::Account</type>
                <value/>
            </step>
            <step id="VariableStep" version="1">
                <name>_display</name>
                <type>::BaseDisplay</type>
                <value/>
            </step>
            <step id="VariableStep" version="1">
                <name>_type</name>
                <type>::UserRequest</type>
                <value>::UserRequest::REQUEST_INVALID</value>
            </step>
        </step>
        <step id="CallStep" uid="1" version="1">
            <comment>Tested function call</comment>
            <return>int _return </return>
            <name>_cpptest_TestObject.listTransactions</name>
            <params>_display, _type</params>
        </step>
        <step id="AssertionsStep" uid="2" version="1">
            <comment>Post-condition check (outcome)</comment>
            <step id="AssertionStep" uid="2.0" version="1">
                <type>CPPTEST_ASSERT_INTEGER_EQUAL</type>
                <P1>0</P1>
                <P2>_return</P2>
                <P3/>
                <P4/>
            </step>
            <step id="AssertionStep" uid="2.1" version="1">
                <type>CPPTEST_ASSERT_INTEGER_EQUAL</type>
                <P1>0</P1>
                <P2>_cpptest_TestObject.myAccountNumber</P2>
                <P3/>
                <P4/>
            </step>
            <step id="AssertionStep" uid="2.2" version="1">
                <type>CPPTEST_ASSERT_FLOAT_EQUAL_DELTA</type>
                <P1>0</P1>
                <P2>_cpptest_TestObject.myBalance</P2>
                <P3>0.01</P3>
                <P4/>
            </step>
            <step id="AssertionStep" uid="2.3" version="1">
                <type>CPPTEST_ASSERT_CSTR_N_EQUAL</type>
                <P1>""</P1>
                <P2>_cpptest_TestObject.myPassword.c_str()</P2>
                <P3>256</P3>
                <P4/>
            </step>
        </step>
    </steps>
</testcase>

#endif
/* CPPTEST_TEST_CASE_DATA_END */
::Account _cpptest_TestObject;
::BaseDisplay _display;
::UserRequest _type = ::UserRequest::REQUEST_INVALID;
/* CPPTEST_TC_STEP_UID:1 */
int _return  = _cpptest_TestObject.listTransactions(_display, _type);
/* CPPTEST_TC_STEP_UID:2.0 */
CPPTEST_ASSERT_INTEGER_EQUAL(0, _return);
/* CPPTEST_TC_STEP_UID:2.1 */
CPPTEST_ASSERT_INTEGER_EQUAL(0, _cpptest_TestObject.myAccountNumber);
/* CPPTEST_TC_STEP_UID:2.2 */
CPPTEST_ASSERT_FLOAT_EQUAL_DELTA(0, _cpptest_TestObject.myBalance, 0.01);
/* CPPTEST_TC_STEP_UID:2.3 */
CPPTEST_ASSERT_CSTR_N_EQUAL("", _cpptest_TestObject.myPassword.c_str(), 256);
}
/* CPPTEST_TEST_CASE_END test_case_unknown_display */

/* CPPTEST_TEST_CASE_BEGIN test_case_secure_display */
// @REQ REQ-123, REQ-345
/* CPPTEST_TEST_CASE_CALLBACKS_BEGIN */
void TestSuite_Account_cxx_15e9a265::CppTest_StubCallback_test_case_secure_display_1_BaseDisplay_getType(CppTest_StubCallInfo* stubCallInfo, ::BaseDisplay::DisplayType* __return, ::BaseDisplay* __this)
{
   /* CPPTEST_TC_STEP_UID:1.0 */
   *__return = ::BaseDisplay::SECURE;
}
/* CPPTEST_TEST_CASE_CALLBACKS_END */
/* CPPTEST_TEST_CASE_CONTEXT int Account::listTransactions(BaseDisplay &, UserRequest) */
void TestSuite_Account_cxx_15e9a265::test_case_secure_display()
{
/* CPPTEST_TEST_CASE_DATA_BEGIN */
#if 0

<?xml version="1.0" encoding="UTF-8" standalone="no"?>
<testcase>
    <metadata/>
    <steps>
        <step id="MultiVariableStep" uid="0" version="1">
            <step id="VariableStep" version="1">
                <name>_cpptest_TestObject</name>
                <type>::Account</type>
                <value/>
            </step>
            <step id="VariableStep" version="1">
                <name>_display</name>
                <type>::BaseDisplay</type>
                <value/>
            </step>
            <step id="VariableStep" version="1">
                <name>_type</name>
                <type>::UserRequest</type>
                <value>::UserRequest::REQUEST_INVALID</value>
            </step>
        </step>
        <step id="StubConfigurationStep" uid="1" version="1">
            <step id="StubConfigurationEntryStep" uid="1.0" version="1">
                <action>SET VALUE</action>
                <P1>*__return</P1>
                <P2>::BaseDisplay::SECURE</P2>
                <P3/>
                <P4/>
            </step>
            <function>BaseDisplay::getType</function>
            <code><![CDATA[//To access current call number use: 'stubCallInfo->callNo']]></code>
            <mode>table</mode>
        </step>
        <step id="CallStep" uid="2" version="1">
            <comment>Tested function call</comment>
            <return>int _return </return>
            <name>_cpptest_TestObject.listTransactions</name>
            <params>_display, _type</params>
        </step>
        <step id="AssertionsStep" uid="3" version="1">
            <comment>Post-condition check (outcome)</comment>
            <step id="AssertionStep" uid="3.0" version="1">
                <type>CPPTEST_ASSERT_INTEGER_EQUAL</type>
                <P1>0</P1>
                <P2>_return</P2>
                <P3/>
                <P4/>
            </step>
            <step id="AssertionStep" uid="3.1" version="1">
                <type>CPPTEST_ASSERT_INTEGER_EQUAL</type>
                <P1>0</P1>
                <P2>_cpptest_TestObject.myAccountNumber</P2>
                <P3/>
                <P4/>
            </step>
            <step id="AssertionStep" uid="3.2" version="1">
                <type>CPPTEST_ASSERT_FLOAT_EQUAL_DELTA</type>
                <P1>0</P1>
                <P2>_cpptest_TestObject.myBalance</P2>
                <P3>0.01</P3>
                <P4/>
            </step>
            <step id="AssertionStep" uid="3.3" version="1">
                <type>CPPTEST_ASSERT_CSTR_N_EQUAL</type>
                <P1>""</P1>
                <P2>_cpptest_TestObject.myPassword.c_str()</P2>
                <P3>256</P3>
                <P4/>
            </step>
        </step>
    </steps>
</testcase>

#endif
/* CPPTEST_TEST_CASE_DATA_END */
::Account _cpptest_TestObject;
::BaseDisplay _display;
::UserRequest _type = ::UserRequest::REQUEST_INVALID;
CPPTEST_REGISTER_STUB_CALLBACK("BaseDisplay::getType", &CppTest_StubCallback_test_case_secure_display_1_BaseDisplay_getType);
/* CPPTEST_TC_STEP_UID:2 */
int _return  = _cpptest_TestObject.listTransactions(_display, _type);
/* CPPTEST_TC_STEP_UID:3.0 */
CPPTEST_ASSERT_INTEGER_EQUAL(0, _return);
/* CPPTEST_TC_STEP_UID:3.1 */
CPPTEST_ASSERT_INTEGER_EQUAL(0, _cpptest_TestObject.myAccountNumber);
/* CPPTEST_TC_STEP_UID:3.2 */
CPPTEST_ASSERT_FLOAT_EQUAL_DELTA(0, _cpptest_TestObject.myBalance, 0.01);
/* CPPTEST_TC_STEP_UID:3.3 */
CPPTEST_ASSERT_CSTR_N_EQUAL("", _cpptest_TestObject.myPassword.c_str(), 256);
}
/* CPPTEST_TEST_CASE_END test_case_secure_display */

/* CPPTEST_TEST_CASE_BEGIN test_case_desposit_operations */
// @REQ REQ-345
/* CPPTEST_TEST_CASE_CONTEXT int Account::listTransactions(BaseDisplay &, UserRequest) */
/* CPPTEST_TEST_CASE_CALLBACKS_BEGIN */
void TestSuite_Account_cxx_15e9a265::CppTest_StubCallback_test_case_desposit_operations_1_BaseDisplay_getType(CppTest_StubCallInfo* stubCallInfo, ::BaseDisplay::DisplayType* __return, ::BaseDisplay* __this)
{
   /* CPPTEST_TC_STEP_UID:4.0 */
   *__return = ::BaseDisplay::SECURE;
}
/* CPPTEST_TEST_CASE_CALLBACKS_END */
void TestSuite_Account_cxx_15e9a265::test_case_desposit_operations()
{
/* CPPTEST_TEST_CASE_DATA_BEGIN */
#if 0

<?xml version="1.0" encoding="UTF-8" standalone="no"?>
<testcase>
    <metadata/>
    <steps>
        <step id="MultiVariableStep" uid="0" version="1">
            <step id="VariableStep" version="1">
                <name>_cpptest_TestObject</name>
                <type>::Account</type>
                <value/>
            </step>
            <step id="VariableStep" version="1">
                <name>_display</name>
                <type>::BaseDisplay</type>
                <value/>
            </step>
            <step id="VariableStep" version="1">
                <name>_type</name>
                <type>::UserRequest</type>
                <value>::UserRequest::REQUEST_DEPOSIT</value>
            </step>
        </step>
        <step id="CallStep" uid="1" version="1">
            <return/>
            <name>_cpptest_TestObject.deposit</name>
            <params>10.00</params>
        </step>
        <step id="CallStep" uid="2" version="1">
            <return/>
            <name>_cpptest_TestObject.deposit</name>
            <params>20.00</params>
        </step>
        <step id="CallStep" uid="3" version="1">
            <return/>
            <name>_cpptest_TestObject.debit</name>
            <params>20.00</params>
        </step>
        <step id="StubConfigurationStep" uid="4" version="1">
            <step id="StubConfigurationEntryStep" uid="4.0" version="1">
                <action>SET VALUE</action>
                <P1>*__return</P1>
                <P2>::BaseDisplay::SECURE</P2>
                <P3/>
                <P4/>
            </step>
            <function>BaseDisplay::getType</function>
            <code><![CDATA[//To access current call number use: 'stubCallInfo->callNo']]></code>
            <mode>table</mode>
        </step>
        <step id="CallStep" uid="5" version="1">
            <comment>Tested function call</comment>
            <return>int _return </return>
            <name>_cpptest_TestObject.listTransactions</name>
            <params>_display, _type</params>
        </step>
        <step id="AssertionsStep" uid="6" version="1">
            <comment>Post-condition check (outcome)</comment>
            <step id="AssertionStep" uid="6.0" version="1">
                <type>CPPTEST_ASSERT_INTEGER_EQUAL</type>
                <P1>2</P1>
                <P2>_return</P2>
                <P3/>
                <P4/>
            </step>
            <step id="AssertionStep" uid="6.1" version="1">
                <type>CPPTEST_ASSERT_INTEGER_EQUAL</type>
                <P1>0</P1>
                <P2>_cpptest_TestObject.myAccountNumber</P2>
                <P3/>
                <P4/>
            </step>
            <step id="AssertionStep" uid="6.2" version="1">
                <type>CPPTEST_ASSERT_FLOAT_EQUAL_DELTA</type>
                <P1>10</P1>
                <P2>_cpptest_TestObject.myBalance</P2>
                <P3>0.01</P3>
                <P4/>
            </step>
            <step id="AssertionStep" uid="6.3" version="1">
                <type>CPPTEST_ASSERT_CSTR_N_EQUAL</type>
                <P1>""</P1>
                <P2>_cpptest_TestObject.myPassword.c_str()</P2>
                <P3>256</P3>
                <P4/>
            </step>
        </step>
    </steps>
</testcase>

#endif
/* CPPTEST_TEST_CASE_DATA_END */
::Account _cpptest_TestObject;
::BaseDisplay _display;
::UserRequest _type = ::UserRequest::REQUEST_DEPOSIT;
/* CPPTEST_TC_STEP_UID:1 */
_cpptest_TestObject.deposit(10.00);
/* CPPTEST_TC_STEP_UID:2 */
_cpptest_TestObject.deposit(20.00);
/* CPPTEST_TC_STEP_UID:3 */
_cpptest_TestObject.debit(20.00);
CPPTEST_REGISTER_STUB_CALLBACK("BaseDisplay::getType", &CppTest_StubCallback_test_case_desposit_operations_1_BaseDisplay_getType);
/* CPPTEST_TC_STEP_UID:5 */
int _return  = _cpptest_TestObject.listTransactions(_display, _type);
/* CPPTEST_TC_STEP_UID:6.0 */
CPPTEST_ASSERT_INTEGER_EQUAL(2, _return);
/* CPPTEST_TC_STEP_UID:6.1 */
CPPTEST_ASSERT_INTEGER_EQUAL(0, _cpptest_TestObject.myAccountNumber);
/* CPPTEST_TC_STEP_UID:6.2 */
CPPTEST_ASSERT_FLOAT_EQUAL_DELTA(10, _cpptest_TestObject.myBalance, 0.01);
/* CPPTEST_TC_STEP_UID:6.3 */
CPPTEST_ASSERT_CSTR_N_EQUAL("", _cpptest_TestObject.myPassword.c_str(), 256);
}
/* CPPTEST_TEST_CASE_END test_case_desposit_operations */

/* CPPTEST_TEST_CASE_BEGIN test_case_manual */
// @REQ REQ-345, REQ-987
void TestSuite_Account_cxx_15e9a265::test_case_manual()
{
	::Account _cpptest_TestObject;
	::BaseDisplay _display;
	::UserRequest _type = ::UserRequest::REQUEST_DEPOSIT;
	/* CPPTEST_TC_STEP_UID:1 */
	_cpptest_TestObject.deposit(10.00);
	/* CPPTEST_TC_STEP_UID:2 */
	_cpptest_TestObject.deposit(20.00);
	/* CPPTEST_TC_STEP_UID:3 */
	_cpptest_TestObject.debit(20.00);
	CPPTEST_REGISTER_STUB_CALLBACK("BaseDisplay::getType", &CppTest_StubCallback_test_case_desposit_operations_1_BaseDisplay_getType);
	/* CPPTEST_TC_STEP_UID:5 */
	int _return  = _cpptest_TestObject.listTransactions(_display, _type);
	/* CPPTEST_TC_STEP_UID:6.0 */
	CPPTEST_ASSERT_INTEGER_EQUAL(2, _return);
	/* CPPTEST_TC_STEP_UID:6.1 */
	CPPTEST_ASSERT_INTEGER_EQUAL(0, _cpptest_TestObject.myAccountNumber);
	/* CPPTEST_TC_STEP_UID:6.2 */
	CPPTEST_ASSERT_FLOAT_EQUAL_DELTA(10, _cpptest_TestObject.myBalance, 0.01);
	/* CPPTEST_TC_STEP_UID:6.3 */
	CPPTEST_ASSERT_CSTR_N_EQUAL("", _cpptest_TestObject.myPassword.c_str(), 256);
}
/* CPPTEST_TEST_CASE_END test_case_manual */
