#include "OGRE/Ogre.h"
#include "OGRE/Bites/OgreApplicationContext.h"

using namespace Ogre;
using namespace OgreBites;

class OgreTutorial : public OgreBites::ApplicationContext
{
public:
    OgreTutorial();
    void setup();
};

OgreTutorial::OgreTutorial() : OgreBites::ApplicationContext()
{
}

void OgreTutorial::setup()
{
    // do not forget to call the base first
    OgreBites::ApplicationContext::setup();
}

int main()
{
    OgreTutorial app;
    app.initApp();
    app.getRoot()->startRendering();
    app.closeApp();
}
