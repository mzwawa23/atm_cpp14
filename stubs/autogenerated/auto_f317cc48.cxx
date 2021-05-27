#include "cpptest.h"

/** 
 * This file contains auto-generated stub definitions.
 *
 * Available C++test API functions (see C++test Users Guide for details):
 *     void CppTest_Assert(bool test, const char * message)
 *     void CppTest_Break()
 *     const char* CppTest_GetCurrentTestCaseName()
 *     const char* CppTest_GetCurrentTestSuiteName()
 *     bool CppTest_IsCurrentTestCase(const char* testCaseName)
 */

/** 
 * Header files where the stubbed functions are originally declared.
 * Verify #include directives and add any additional header files as necessary.
 */
#include "BaseDisplay.hxx"

/** Auto-generated stub definition for function: virtual BaseDisplay::DisplayType BaseDisplay::getType(void) */
::BaseDisplay::DisplayType (::BaseDisplay::CppTest_Auto_Stub_getType) (void) 
{
    ::BaseDisplay::DisplayType __return = ::BaseDisplay::UNKNOWN;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, ::BaseDisplay::DisplayType* __return, ::BaseDisplay* __this)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("BaseDisplay::getType", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = __this->BaseDisplay::getType();
     */
    CPPTEST_CALL_STUB_CALLBACK("BaseDisplay::getType", &__return, this);

    return __return;
}

/** Auto-generated stub definition for function: virtual void BaseDisplay::logError(std::string) */
void (::BaseDisplay::CppTest_Auto_Stub_logError) (::std::string msg) 
{
    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, ::BaseDisplay* __this, ::std::string msg)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("BaseDisplay::logError", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     __this->BaseDisplay::logError(msg);
     */
    CPPTEST_CALL_STUB_CALLBACK("BaseDisplay::logError", this, msg);

}

/** Auto-generated stub definition for function: virtual void BaseDisplay::showBalance(double) */
void (::BaseDisplay::CppTest_Auto_Stub_showBalance) (double balance) 
{
    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, ::BaseDisplay* __this, double balance)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("BaseDisplay::showBalance", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     __this->BaseDisplay::showBalance(balance);
     */
    CPPTEST_CALL_STUB_CALLBACK("BaseDisplay::showBalance", this, balance);

}

/** Auto-generated stub definition for function: virtual void BaseDisplay::showInfoToUser(const char *) */
void (::BaseDisplay::CppTest_Auto_Stub_showInfoToUser) (const char * message) 
{
    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, ::BaseDisplay* __this, const char * message)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("BaseDisplay::showInfoToUser", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     __this->BaseDisplay::showInfoToUser(message);
     */
    CPPTEST_CALL_STUB_CALLBACK("BaseDisplay::showInfoToUser", this, message);

}

/** Auto-generated stub definition for function: virtual void BaseDisplay::showTransaction(UserRequest, double) */
void (::BaseDisplay::CppTest_Auto_Stub_showTransaction) (::UserRequest request, double amount) 
{
    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, ::BaseDisplay* __this, ::UserRequest request, double amount)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("BaseDisplay::showTransaction", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     __this->BaseDisplay::showTransaction(request, amount);
     */
    CPPTEST_CALL_STUB_CALLBACK("BaseDisplay::showTransaction", this, request, amount);

}
