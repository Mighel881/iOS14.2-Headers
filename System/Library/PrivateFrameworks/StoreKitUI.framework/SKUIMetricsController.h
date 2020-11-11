/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_source;
@class SKUIMetricsImpressionSession, NSString, SSMetricsController, SSMetricsConfiguration, NSObject, NSNumber;

@interface SKUIMetricsController : NSObject {

	SKUIMetricsImpressionSession* _activeImpressionsSession;
	NSString* _applicationIdentifier;
	SSMetricsController* _controller;
	BOOL _flushesImmediately;
	SSMetricsConfiguration* _globalConfiguration;
	NSString* _hostApplicationIdentifier;
	BOOL _impressionsEnabled;
	NSObject*<OS_dispatch_source> _impressionsTimer;
	BOOL _loggingEnabled;
	SSMetricsConfiguration* _pageConfiguration;
	NSString* _pageContext;
	NSString* _pageURL;
	NSString* _topic;
	NSString* _userAgent;
	NSString* _windowOrientation;

}

@property (nonatomic,readonly) SKUIMetricsImpressionSession * activeImpressionsSession; 
@property (nonatomic,readonly) double flushInterval; 
@property (nonatomic,readonly) SSMetricsConfiguration * globalConfiguration;                         //@synthesize globalConfiguration=_globalConfiguration - In the implementation block
@property (nonatomic,retain) SSMetricsConfiguration * pageConfiguration;                             //@synthesize pageConfiguration=_pageConfiguration - In the implementation block
@property (nonatomic,readonly) NSNumber * accountIdentifier; 
@property (nonatomic,copy) NSString * applicationIdentifier;                                         //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * hostApplicationIdentifier;                                     //@synthesize hostApplicationIdentifier=_hostApplicationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * pageContext;                                                   //@synthesize pageContext=_pageContext - In the implementation block
@property (nonatomic,copy) NSString * pageURL;                                                       //@synthesize pageURL=_pageURL - In the implementation block
@property (nonatomic,copy) NSString * topic;                                                         //@synthesize topic=_topic - In the implementation block
@property (nonatomic,copy) NSString * userAgent;                                                     //@synthesize userAgent=_userAgent - In the implementation block
@property (nonatomic,copy) NSString * windowOrientation;                                             //@synthesize windowOrientation=_windowOrientation - In the implementation block
+(void)flushImmediately;
-(id)initWithGlobalConfiguration:(id)arg1 ;
-(NSNumber *)accountIdentifier;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(void)recordEvent:(id)arg1 ;
-(NSString *)topic;
-(void)setHostApplicationIdentifier:(NSString *)arg1 ;
-(void)setTopic:(NSString *)arg1 ;
-(NSString *)applicationIdentifier;
-(NSString *)pageContext;
-(void)setPageContext:(NSString *)arg1 ;
-(void)setWindowOrientation:(NSString *)arg1 ;
-(NSString *)pageURL;
-(NSString *)hostApplicationIdentifier;
-(id)tokenStringWithElements:(id)arg1 ;
-(NSString *)windowOrientation;
-(SSMetricsConfiguration *)globalConfiguration;
-(void)setUserAgent:(NSString *)arg1 ;
-(void)setPageURL:(NSString *)arg1 ;
-(id)locationWithPosition:(long long)arg1 type:(id)arg2 fieldData:(id)arg3 ;
-(void)setPageConfiguration:(SSMetricsConfiguration *)arg1 ;
-(NSString *)userAgent;
-(id)compoundStringWithElements:(id)arg1 ;
-(double)flushInterval;
-(void)dealloc;
-(id)performActionForItem:(id)arg1 offer:(id)arg2 clientContext:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)performActionForSoftwareItem:(id)arg1 offer:(id)arg2 clientContext:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)performActionForItem:(id)arg1 clientContext:(id)arg2 ;
-(SKUIMetricsImpressionSession *)activeImpressionsSession;
-(void)pingURLs:(id)arg1 withClientContext:(id)arg2 ;
-(id)itemOfferClickEventWithItem:(id)arg1 locationPosition:(long long)arg2 ;
-(id)locationWithPageComponent:(id)arg1 ;
-(BOOL)canRecordEventWithType:(id)arg1 ;
-(void)flushImmediately;
-(void)closeImpressionsSession;
-(void)_recordActiveImpressions;
-(void)_insertEvent:(id)arg1 ;
-(id)clickEventWithItem:(id)arg1 locationPosition:(long long)arg2 ;
-(id)performActionForItem:(id)arg1 ;
-(id)performActionForItem:(id)arg1 offer:(id)arg2 clientContext:(id)arg3 ;
-(void)pingURLs:(id)arg1 ;
-(void)recordBuyConfirmedEventsForItems:(id)arg1 purchaseResponses:(id)arg2 ;
-(void)_waitUntilRecordingComplete;
-(SSMetricsConfiguration *)pageConfiguration;
@end
