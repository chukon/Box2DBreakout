#import "cocos2d.h"
#import "Box2D.h"
#import "MyContactListener.h"

#define PTM_RATIO 32.0

@interface HelloWorldLayer : CCLayer {
    b2World *_world;
    b2Body *_groundBody;
    b2Fixture *_bottomFixture;
    b2Fixture *_ballFixture;
    
    b2Body *_paddleBody;
    b2Fixture *_paddleFixture;
    
    b2MouseJoint *_mouseJoint;
    
    MyContactListener *_contactListener;

}

+ (id)scene;

@end
