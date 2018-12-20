
#import <UIKit/UIKit.h>

#if __has_include(<React/RCTConvert.h>)
  #import <React/RCTConvert.h>
#elif __has_include("RCTConvert.h")
  #import "RCTConvert.h"
#else
  #import "React/RCTConvert.h"

#if __has_include(<React/RCTBridge.h>)
  #import <React/RCTBridge.h>
#elif __has_include("RCTBridge.h")
  #import "RCTBridge.h"
#else
  #import "React/RCTBridge.h"
#endif

#if __has_include(<React/RCTUIManager.h>)
  #import <React/RCTUIManager.h>
#elif __has_include("RCTUIManager.h")
  #import "RCTUIManager.h"
#else
  #import "React/RCTUIManager.h"
#endif

#if __has_include(<React/RCTLog.h>)
  #import <React/RCTLog.h>
#elif __has_include("RCTLog.h")
  #import "RCTLog.h"
#else
  #import "React/RCTLog.h"
#endif

#if __has_include(<React/RCTUtils.h>)
  #import <React/RCTUtils.h>
#elif __has_include("RCTUtils.h")
  #import "RCTUtils.h"
#else
  #import "React/RCTUtils.h"
#endif
@interface WechatShare : NSObject <RCTBridgeModule>

- (void *) shareSingle:(NSDictionary *)options failureCallback:(RCTResponseErrorBlock)failureCallback successCallback:(RCTResponseSenderBlock)successCallback;
@end
