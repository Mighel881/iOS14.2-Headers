/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TipsCore/TPSAnalyticsEvent.h>

@class NSString;

@interface TPSAnalyticsEventContentRetrieved : TPSAnalyticsEvent {

	NSString* _contentID;
	NSString* _bundleID;
	NSString* _context;
	NSString* _serviceError;

}

@property (nonatomic,retain) NSString * contentID;                 //@synthesize contentID=_contentID - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                  //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSString * context;                   //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSString * serviceError;              //@synthesize serviceError=_serviceError - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)eventWithContentID:(id)arg1 serviceError:(id)arg2 ;
+(id)eventWithContentID:(id)arg1 bundleID:(id)arg2 context:(id)arg3 serviceError:(id)arg4 ;
-(NSString *)contentID;
-(id)eventName;
-(NSString *)bundleID;
-(void)setDataProvider:(id)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)context;
-(id)_initWithContentID:(id)arg1 bundleID:(id)arg2 context:(id)arg3 serviceError:(id)arg4 ;
-(id)_initWithContentID:(id)arg1 serviceError:(id)arg2 ;
-(NSString *)serviceError;
-(void)setServiceError:(NSString *)arg1 ;
-(id)mutableAnalyticsEventRepresentation;
-(id)initWithCoder:(id)arg1 ;
-(void)setContext:(NSString *)arg1 ;
-(void)setContentID:(NSString *)arg1 ;
@end

