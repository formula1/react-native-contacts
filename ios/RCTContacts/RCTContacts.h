#if __has_include("RTCBridgeModule.h")
#import "RCTBridgeModule.h"
#else
#import <React/RCTBridgeModule.h>
#endif


@interface RCTContacts : NSObject <RCTBridgeModule>

@end
