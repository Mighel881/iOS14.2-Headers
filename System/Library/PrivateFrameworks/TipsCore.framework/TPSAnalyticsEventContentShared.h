/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TipsCore/TPSAnalyticsEvent.h>

@class NSString;

@interface TPSAnalyticsEventContentShared : TPSAnalyticsEvent {

	NSString* _contentID;
	NSString* _collectionID;
	NSString* _shareMethod;

}

@property (nonatomic,retain) NSString * contentID;                 //@synthesize contentID=_contentID - In the implementation block
@property (nonatomic,retain) NSString * collectionID;              //@synthesize collectionID=_collectionID - In the implementation block
@property (nonatomic,retain) NSString * shareMethod;               //@synthesize shareMethod=_shareMethod - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)eventWithContentID:(id)arg1 collectionID:(id)arg2 shareMethod:(id)arg3 ;
-(NSString *)contentID;
-(id)eventName;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setCollectionID:(NSString *)arg1 ;
-(NSString *)collectionID;
-(id)mutableAnalyticsEventRepresentation;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithContentID:(id)arg1 collectionID:(id)arg2 shareMethod:(id)arg3 ;
-(NSString *)shareMethod;
-(void)setShareMethod:(NSString *)arg1 ;
-(void)setContentID:(NSString *)arg1 ;
@end

