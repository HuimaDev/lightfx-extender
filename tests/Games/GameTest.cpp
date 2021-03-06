#include "GameMock.h"
#include "CppUnitTest.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;
using namespace lightfx;
using namespace lightfx::games;

namespace lightfx_tests {
    namespace games {

        TEST_CLASS(GameTest) {
public:

    TEST_METHOD(Initialize) {
        auto game = make_shared<GameMock>();
        Assert::IsFalse(game->IsInitialized());
        game->Initialize();
        Assert::IsTrue(game->IsInitialized());
    }

    TEST_METHOD(Release) {
        auto game = make_shared<GameMock>();
        game->Initialize();
        Assert::IsTrue(game->IsInitialized());
        game->Release();
        Assert::IsFalse(game->IsInitialized());
    }

        };

    }
}
