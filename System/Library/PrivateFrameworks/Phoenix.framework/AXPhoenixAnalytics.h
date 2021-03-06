/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Phoenix.framework/Phoenix
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class AXPhoenixConfiguration, NSDateFormatter, NSString, NSObject;

@interface AXPhoenixAnalytics : NSObject {

	AXPhoenixConfiguration* _configuration;
	NSDateFormatter* _dateFormatter;
	NSString* _modelVersion;
	unsigned long long _assetVersion;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)_descriptionForEventType:(long long)arg1 ;
-(void)_sendEvent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithConfiguration:(id)arg1 modelVersion:(id)arg2 assetVersion:(unsigned long long)arg3 ;
-(void)logEventWithType:(long long)arg1 machAbsoluteTime:(unsigned long long)arg2 context:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

