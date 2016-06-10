
#import <UIKit/UIKit.h>
#import <objc/message.h>


#ifdef DEBUG
#define MJRefreshLog(...) NSLog(__VA_ARGS__)
#else
#define MJRefreshLog(...)
#endif


#define MJRefreshDeprecated(instead) NS_DEPRECATED(2_0, 2_0, 2_0, 2_0, instead)


#define MJRefreshMsgSend(...) ((void (*)(void *, SEL, UIView *))objc_msgSend)(__VA_ARGS__)
#define MJRefreshMsgTarget(target) (__bridge void *)(target)


#define MJRefreshColor(r, g, b) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1.0]


#define MJRefreshLabelTextColor MJRefreshColor(90, 90, 90)


#define MJRefreshLabelFont [UIFont boldSystemFontOfSize:14]


#define MJRefreshSrcName(file) [@"MJRefresh.bundle" stringByAppendingPathComponent:file]
#define MJRefreshFrameworkSrcName(file) [@"Frameworks/MJRefresh.framework/MJRefresh.bundle" stringByAppendingPathComponent:file]


UIKIT_EXTERN const CGFloat MJRefreshHeaderHeight;
UIKIT_EXTERN const CGFloat MJRefreshFooterHeight;
UIKIT_EXTERN const CGFloat MJRefreshFastAnimationDuration;
UIKIT_EXTERN const CGFloat MJRefreshSlowAnimationDuration;

UIKIT_EXTERN NSString *const MJRefreshKeyPathContentOffset;
UIKIT_EXTERN NSString *const MJRefreshKeyPathContentSize;
UIKIT_EXTERN NSString *const MJRefreshKeyPathContentInset;
UIKIT_EXTERN NSString *const MJRefreshKeyPathPanState;

UIKIT_EXTERN NSString *const MJRefreshHeaderLastUpdatedTimeKey;

UIKIT_EXTERN NSString *const MJRefreshHeaderIdleText;
UIKIT_EXTERN NSString *const MJRefreshHeaderPullingText;
UIKIT_EXTERN NSString *const MJRefreshHeaderRefreshingText;

UIKIT_EXTERN NSString *const MJRefreshAutoFooterIdleText;
UIKIT_EXTERN NSString *const MJRefreshAutoFooterRefreshingText;
UIKIT_EXTERN NSString *const MJRefreshAutoFooterNoMoreDataText;

UIKIT_EXTERN NSString *const MJRefreshBackFooterIdleText;
UIKIT_EXTERN NSString *const MJRefreshBackFooterPullingText;
UIKIT_EXTERN NSString *const MJRefreshBackFooterRefreshingText;
UIKIT_EXTERN NSString *const MJRefreshBackFooterNoMoreDataText;


#define MJRefreshCheckState \
MJRefreshState oldState = self.state; \
if (state == oldState) return; \
[super setState:state];
